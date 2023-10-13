#include <WiFi.h>
#include <WiFiUdp.h>

const char *ssid = "YourWiFiSSID";
const char *password = "YourWiFiPassword";

WiFiUDP udp;
unsigned int localPort = 1234; // Port to listen on

void setup() {
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Start UDP
  udp.begin(localPort);
  Serial.print("Listening on UDP port ");
  Serial.println(localPort);
}

void loop() {
  int packetSize = udp.parsePacket();
  if (packetSize >= sizeof(int)) {
    int receivedInt;
    udp.read((char *)&receivedInt, sizeof(int));

    Serial.print("Received integer: ");
    Serial.println(receivedInt);

    // Process the received integer as needed
  }
}
