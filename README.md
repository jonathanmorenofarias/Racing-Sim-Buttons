# ATmega32U4 Keyboard Controller for Racing Simulator

# Introduction

This Arduino program is designed for the ATmega32U4 microcontroller, allowing it to function as a keyboard controller. The program utilizes the Arduino Keyboard library to simulate keypresses based on the input from specific pins on the ATmega32U4.

# Features

* Key Mapping: The program maps specific keypresses to input conditions based on the state of certain pins.
* Custom Key Combinations: Supports custom key combinations triggered by specific pin conditions.
* LED Feedback: Provides visual feedback through LEDs to indicate when certain actions are triggered.

# Hardware Setup

Ensure the following hardware setup for proper functionality:

* ATmega32U4 Microcontroller
* LEDs (Optional): LEDs are used for visual feedback and are connected to PORTB pins. Adjust the connections accordingly.
* Switches or Jumpers: Connect switches or jumpers to PORTD pins for input conditions.

# Usage

1. Upload the Program: Use the Arduino IDE to upload the program to the ATmega32U4 microcontroller.
2. Power On: Power on the ATmega32U4.
3. Input Conditions: Trigger specific input conditions by manipulating switches or jumpers connected to the designated pins.
4. Keypress Simulation: The program will simulate keypresses based on the input conditions, sending them as keyboard commands.
