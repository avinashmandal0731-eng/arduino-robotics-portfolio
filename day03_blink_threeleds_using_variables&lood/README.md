Day03 - Three LEDs blink using variables and loop 

Objective : 
Learn how to use variables and how they easy the work 

Components used : 
- Arduino Uno
- 3 LEDDs (red, green, blue)
- 3 resistors(100Ω)
- Breadboard and jumper wires
What I did:
1. Assigned digital pins to LEDs using variables.
2. Used for loops to blink each LED multiple times.
3. Controlled LEDs sequentially with different blink counts using a single program structure.

Problem Faced:
- Initial code was with out any variables and loop so it get a bit messy, lengthy and inefficient when blinking LEDs multiple times.
- Using delay() caused blocking behavior, stopping other operations during execution.
Solution:
- Introduced Variables for pin assisnment to make the code readable and maintainable.
- Used (for loops) to reduce repition and control blinks counts easily
- Structured the code properly using setup() and loop() functions.
  
What I learned:
- How variables simplify pin management
- How for loops reduce code duplication
- Why structured logic is important in embedded programming
- Limitations of delay() in real-time applications
  
Engineering Takeaways:

  Blinking LEDs using loops is a foundation for controlling motors,  sensors, and actuators in robotics.
  However, using blocking delay is not scalable, which highlights the needs for non blocking timing methods like millis() n future projects.
