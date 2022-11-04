
#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


// pins for the LEDs:
const int redPin = 11;
const int greenPin = 12;
const int bluePin = 13;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // make the pins outputs:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  lcd.begin(16, 2);
}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    lcd.clear();
    // look for the next valid integer in the incoming serial stream:
    int red = Serial.parseInt();
    // do it again:
    int green = Serial.parseInt();
    // do it again:
    int blue = Serial.parseInt();

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
    Serial.println(red);
    Serial.println(green);
    Serial.println(blue);
    lcd.print(red);
    lcd.print(" ");
    lcd.print(green);
    lcd.print(" ");
    lcd.print(blue);
    }
  }
}
