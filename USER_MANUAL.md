# iKshana User Manual

## Introduction

Welcome to iKshana, your personal navigation assistant designed to help you navigate safely and independently. This manual will guide you through setting up and using your iKshana system.

## Package Contents

- 2× iKshana foot modules (left and right)
- 2× Elastic attachment straps
- 1× USB charging cable
- 1× Quick start guide

## Getting Started

### Step 1: Charge the Modules

Before first use, charge both modules fully using the provided USB cable. The LED indicator will:
- **Red**: Charging
- **Green**: Fully charged

Charging time: Approximately 2 hours for full charge.

### Step 2: Install the Android App

1. Download the iKshana app from the repository
2. Enable "Install from Unknown Sources" in your phone settings
3. Install the APK file
4. Grant location permissions when prompted

### Step 3: Attach the Modules

1. **Identify left and right modules** - Check the label on each module
2. **Position the module** - Place on top of your shoe, near the toe area
3. **Secure with straps** - Wrap elastic straps around your shoe
4. **Ensure sensors face forward** - Ultrasonic sensors should point ahead

## Powering On

1. Press and hold the power button for 2 seconds
2. Wait for the vibration confirmation (two short pulses)
3. The module will automatically connect to your phone via WiFi

## Using Short-Range Navigation

Short-range navigation helps you avoid obstacles while walking.

### Understanding Vibration Alerts

| Vibration Pattern | Meaning |
|-------------------|---------|
| Single pulse (left foot) | Obstacle on your left |
| Single pulse (right foot) | Obstacle on your right |
| Continuous vibration | Obstacle directly ahead |
| No vibration | Path is clear |

### Detection Range

- Obstacles are detected within **30 cm** (approximately 1 foot)
- Walk at a comfortable pace for best detection

## Using Long-Range Navigation

Long-range navigation provides turn-by-turn directions to your destination.

### Setting a Destination

1. Open the iKshana app
2. Tap "Set Destination"
3. Enter the location or select from saved places
4. Tap "Start Navigation"

### Following Directions

| Vibration Pattern | Meaning |
|-------------------|---------|
| Left foot pulses 3 times | Turn left at next intersection |
| Right foot pulses 3 times | Turn right at next intersection |
| Both feet pulse together | Continue straight |
| Long vibration (both feet) | You have arrived |

### Navigation Tips

- Walk slowly when approaching intersections
- Wait for the complete vibration pattern before turning
- The app will recalculate if you miss a turn

## Troubleshooting

### Modules Not Connecting

1. Ensure WiFi is enabled on your phone
2. Check that both modules are powered on
3. Restart the app
4. If problem persists, restart the modules

### Weak or No Vibrations

1. Check battery level in the app
2. Ensure modules are properly charged
3. Check strap tightness - loose straps reduce vibration feel

### Inaccurate Obstacle Detection

1. Clean ultrasonic sensors with a soft cloth
2. Ensure sensors are not blocked
3. Avoid using near very soft materials (may not reflect sound)

### GPS Not Working

1. Ensure you're outdoors with clear sky view
2. Check location permissions in phone settings
3. Wait 30 seconds for GPS lock

## Safety Guidelines

- **Always remain aware of your surroundings** - iKshana is an aid, not a replacement for caution
- **Use in familiar areas first** - Practice in known locations before exploring new places
- **Keep a walking stick handy** - Recommended as backup, especially in crowded areas
- **Avoid water and rain** - Modules are not waterproof
- **Regular charging** - Charge after each use to ensure reliability

## Maintenance

### Cleaning
- Wipe modules with a dry or slightly damp cloth
- Do not submerge in water
- Keep ultrasonic sensors free of debris

### Storage
- Store in a cool, dry place
- Charge to 50% if storing for extended periods
- Keep away from extreme temperatures

### Battery Care
- Avoid complete discharge
- Charge regularly even when not in use
- Expected battery life: 8+ hours of continuous use

## Technical Specifications

| Specification | Value |
|---------------|-------|
| Detection Range | 2 cm - 30 cm |
| Battery Life | 8+ hours |
| Charging Time | ~2 hours |
| Communication | WiFi (UDP) |
| Weight per Module | ~50g |
| Water Resistance | Not waterproof |

## Support

For technical support or questions:
- **GitHub Issues**: [github.com/abhineet-agarwal/ikshana](https://github.com/abhineet-agarwal/ikshana)
- **Documentation**: See `docs/` folder in repository

## Quick Reference Card

```
POWER ON:     Hold button 2 sec → Wait for 2 pulses
POWER OFF:    Hold button 3 sec → Single long pulse

OBSTACLES:
  Left foot vibrates  → Obstacle on left
  Right foot vibrates → Obstacle on right
  Both vibrate       → Obstacle ahead

NAVIGATION:
  Left pulses 3×     → Turn left
  Right pulses 3×    → Turn right
  Both pulse 3×      → Go straight
  Long vibration     → Arrived
```

---

*iKshana - Empowering independent navigation*
