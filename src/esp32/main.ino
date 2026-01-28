// defines pins numbers
const int trigPin = 5;
const int echoPin = 18;
const int vibrator = 23;
const int vibrator1 = 22;
const int trigPin1 = 27;
const int echoPin1 = 26;
#include <WiFi.h>
#include <WiFiUdp.h>

const char *ssid = "YourWiFiSSID";
const char *password = "YourWiFiPassword";

WiFiUDP udp;
unsigned int localPort = 1234; // Port to listen on


// defines variables
long duration1;
long duration2;
int distance1;
int distance2;
int safetyDistance1;
int safetyDistance2;


void setup() {
  pinMode(trigPin, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);   // Sets the echoPin as an Input
  pinMode(vibrator, OUTPUT);
  pinMode(vibrator1,OUTPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  Serial.begin(115200); 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Start UDP
  udp.begin(localPort);
  Serial.print("Listening on UDP port ");
  Serial.println(localPort); // Starts the serial communication
}


void loop() {
  int packetSize = udp.parsePacket();
  int receivedInt=0;
  if (packetSize >= sizeof(int)) {
    
    udp.read((char *)&receivedInt, sizeof(int));

    Serial.print("Received integer: ");
    Serial.println(receivedInt);
  }
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration1 = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance1 = duration1 * 0.034 / 2;

  safetyDistance1 = distance1;
  if(safetyDistance1 < 30 && safetyDistance1 > 0 || safetyDistance2 < 30 && safetyDistance2 > 0) 
  {
    if (safetyDistance1 < 30 && safetyDistance1 > 0) {
    digitalWrite(vibrator, HIGH);
  } else {
    digitalWrite(vibrator, LOW);
  }
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance1: ");
  Serial.println(distance1);

    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(2);
    digitalWrite(trigPin1, LOW);

    duration2 = pulseIn(echoPin1, HIGH);
    distance2 = duration2 * 0.034 / 2;

 safetyDistance2 = distance2;
  if (safetyDistance2 < 30 && safetyDistance2 > 0) {
    digitalWrite(vibrator1, HIGH);
  } else {
    digitalWrite(vibrator1, LOW);
  }
  
  Serial.print("Distance2: ");
  Serial.println(distance2);
}
   else if (receivedInt%100==1 && receivedInt%10==1)
  {
     digitalWrite(vibrator, HIGH);
     digitalWrite(vibrator1, HIGH);
  }
  else if(receivedInt%100==1 && receivedInt%10==0)
  {
    digitalWrite(vibrator, HIGH);
     digitalWrite(vibrator1, LOW);
  }
  else if(receivedInt%100==0 && receivedInt%10==1)
  {
    digitalWrite(vibrator, LOW);
     digitalWrite(vibrator1, HIGH);
  }
  else
  {
    digitalWrite(vibrator, LOW);
     digitalWrite(vibrator1, LOW);
  }
  }
