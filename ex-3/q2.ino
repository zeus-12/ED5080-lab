int proxPin = A2;
int buttonState = 0;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(proxPin, INPUT);
}

void loop() {
  buttonState = digitalRead(proxPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(7, HIGH);
  } else {
    // turn LED off:
    digitalWrite(7, LOW);
  }
  delay(100);
}
