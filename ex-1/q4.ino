// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 7;     // the number of the pushbutton pin
const int buttonPin2 = 8;
const int buttonPin3 = 9;
const int ledPin1 =  11;      // the number of the LED pin
const int ledPin2 =  12; 
const int ledPin3 =  13; 

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
    // initialize the LED pin as an output:
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);
    // initialize the LED pin as an output:
  pinMode(ledPin3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
  }


  

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin2, LOW);
  }



  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState3 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin3, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin3, LOW);
  }
}
