#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
//const int rs = 13, en = 12, d4 = 8, d5 = 4, d6 = 3, d7 = 2;
const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#include <Servo.h>

Servo myservo_1;

int ldr = 0;

int red = 11;
int green = 10;
int blue = 9;
int i=1;

void setup() {
  Serial.begin(9600);
  myservo_1.attach(5);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(A2, INPUT);

  lcd.begin(16, 2);
  
}

void loop() {
  if (Serial.available() > 0) {
    if (Serial.read() == '0' ) {
      Serial.println("hi");
      exit(0);
    }
    
  }
  else{
      myservo_1.write(50); 
  digitalWrite(red, HIGH);
//  digitalWrite(blue, HIGH);
//  digitalWrite(green, HIGH);

  ldr = analogRead(A2);
  lcd.print("R:");
  lcd.print(ldr);
  lcd.display();
  delay(1500);
  digitalWrite(red, LOW);
  
//  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
//  digitalWrite(green, HIGH);

  ldr = analogRead(A2);
  lcd.print(" B:");
  lcd.print(ldr);
  lcd.display();
  delay(1500);
  digitalWrite(blue, LOW);

//    digitalWrite(red, HIGH);
//  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);

  lcd.setCursor(0, 1); 
  ldr = analogRead(A2);
  lcd.print(" G:");
  lcd.print(ldr);
  lcd.display();
  delay(2000);
  lcd.clear();
  digitalWrite(green, LOW);

    }
  
}
