<img width="959" height="475" alt="image" src="https://github.com/user-attachments/assets/a523fcbd-f8c2-4bdc-9d9a-9b07be260ec1" />

## Project 1: Push Button LED Control System

**Objective:**
Demonstrate digital Input/Output (I/O) processing on an Arduino Uno by reading a tactile switch and controlling an LED output in real-time.

**Hardware Architecture:**
* **Microcontroller:** Arduino Uno
* **Input:** Push Button (connected to Digital Pin 2)
* **Output:** Red LED (connected to Digital Pin 13)
* **Passive Components:**
  * **220Ω Resistor:** Current-limiting resistor placed in series with the LED to prevent overcurrent damage.
  * **1kΩ Resistor:** External pull-down resistor connected between Pin 2 and GND to prevent a floating input state when the button is open.

**Circuit Logic & Signal Conditioning:**
When the tactile push button is unpressed, the 1kΩ pull-down resistor holds Digital Pin 2 strictly at 0V (GND / `LOW`). Pressing the button closes the circuit to 5V (`HIGH`), switching the pin state. The Arduino evaluates this state with `digitalRead(buttonPin)`, actuates Pin 13 accordingly using `digitalWrite(ledPin, state)`, and transmits the live state to the Serial Monitor at 9600 baud.
