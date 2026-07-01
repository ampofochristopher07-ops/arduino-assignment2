# Arduino-Assignment2

Arduino Uno project:beeping countdown using tone() and 7-segment display
This is my submission for the assignment 2 in the programming;C++ for 
engineers Using Arduino course at [Ghana Commuinication Technology University]
A segment display counts down from 9 to 0.on each step,a passive buzzer plays a short beep.when the countdown reaches 
0,the buzzer plays a longer tone to signal completion

##hardware used

- 1 x passive buzzer (piezo)
- 1 x single-digit 7-segment display (common cathode)
- 1 x 220 ohm resistor (on the COM pin)
- Breadboard and jumper wires
  
## Concepts demonstrated

- The tone() and noTone() functions
- Passive vs active buzzers
- 7-segment display wiring (common cathode)
- 2D arrays for digit patterns (lookup table)
- Functions with parameters
- while and for loops
- Serial Monitor output
  
## How to run it
1. Wire the buzzer to pin 8.
2. Wire the 7-segment segments a-g to Arduino pins 2, 3, 4, 5, 6, 7, 9
(direct wires, no resistors).
3. Connect the COM pin of the display to GND via a 220 ohm resistor.
4. Open the .ino file in the Arduino IDE.
5. Select Tools > Board > Arduino Uno and the correct Port.
6. Click Upload.
## Author
Ampofo Christopher- 2526404624
