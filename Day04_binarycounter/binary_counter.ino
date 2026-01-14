// Digital Counter up to 15 using 4 LEDs
// Avinash's Arduino project

int ledPins[] = {2, 3, 4, 5};  // LEDs connected to pins 2,3,4,5

void setup() {
  // Set all LED pins as output
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Count from 0 to 15
  for (int count = 0; count <= 15; count++) {
    displayBinary(count);   // Show binary value on LEDs
    delay(1000);          
  }
}

// Function to display a number in binary on LEDs
void displayBinary(int num) {
  for (int i = 0; i < 4; i++) {
    int bitValue = bitRead(num, i);   // Read each bit
    digitalWrite(ledPins[i], bitValue);
  }
}