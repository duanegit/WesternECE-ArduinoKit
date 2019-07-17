// should have good commenting up here

int ledPin = 8; // choose the pin for the LED
int inPin = 9;   // choose the input pin (for a pushbutton)
int val = 0;     // variable for reading the pin status

void setup() {
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT_PULLUP);    // declare pushbutton as input 
}                                  // with internal pullup resistor 

void loop(){
  val = digitalRead(inPin);  // read input value - likely get away without debounce
  if (val == HIGH) {         // check if the input is HIGH (button released)
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH);  // turn LED ON
  }
}
