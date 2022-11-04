
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
//const int rs = 13, en = 12, d4 = 8, d5 = 4, d6 = 3, d7 = 2;
const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hi Brooooo");
}

void loop() {
  // Turn off the display:
//  lcd.noDisplay();
//  delay(500);
  // Turn on the display:
  lcd.display();
  delay(500);
}
