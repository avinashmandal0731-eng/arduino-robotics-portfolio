Day 04 - Making a binary counter

Objective:

Understand the binary number system and apply it by building a digital counter using LEDs to represent biary values.

Concept Covered:

1. Binary numbers(base-2)
2. Bit representation using LEDs
3. Decimal to binary conversion
4. Counting logic in embedded systems

Components Used:

- Arduino Uno
- 4 LEDs
- 4 resistors(100Ω)
- Breadboard and jumper wires

  What I did:

  - Learned how numbers are represented in binary(0 & 1).
  - Assigned each LED to represent a binary bit (LSB to MSB).
  - Built a digital counter that increments values and displays them using LEDs.
  - Used logical patterns instead of random blinking.

  How the Counter Works:

  - Each LED represents one bit:
    1. LED 1 = 1 (LSB)
    2. LED 2 = 2
    3. LED 3 = 4
    4. LED 4 = 8
  - By turning LEDs ON/OFF in combinations, the system counts from 0 to 15 in binary.
  - The counter resets after reaching the maximum value.

  Problem Faced:

  - Initially confused binary values with LED order.
  - Manually code the counter using only pinMode and digitalWrite, manual LED control became complex as the count increased.

  Solution:

  - Mapped each LED to a binary weight.
  - Used structure logic to update LED states based on the counter value.
  - Improved understanding of how computers store and process data.

  What I Learned:

  - How binary numbers represent decimal values ,e.g. (5=0101).
  - How LEDs can visually represent bits.
  - How digital counters work at a hardware level.
  - Why binary logic is fundamental to microcontrollers.

  Engineering Takeaway:

  Binary counting is the foundation of registers, memory, timers, and CPUs.
  This project connects abstract computer science concepts directly to physical hardware.
  
