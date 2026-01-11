  // Making blinking LEDs using variables and for loop
  //pin assignments
  int redled = 2;
  int greenled = 3;
  int blueled = 4;

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
}

void loop() {
  // Blink Led 5 times
  for(int i = 0 ; i < 5; i++){
    digitalWrite(redled,HIGH);
    delay(500);
    digitalWrite(redled,LOW);
    delay(500);
  }
  // Blink green led 10 times
  for(int i = 0; i < 10 ; i++){
    digitalWrite(greenled,HIGH);
    delay(500);
    digitalWrite(greenled,LOW);
    delay(500);
  }
  // Blink blue led 15 times 
  for(int i = 0; i < 15 ; i++){
    digitalWrite(blueled,HIGH);
    delay(500);
    digitalWrite(blueled,LOW);
    delay(500);
  }
  delay(1000);
}
