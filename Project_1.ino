const int ledPin = 13;
const int buttonPin = 2;
int buttonState;

void setup()
{
  Serial.begin(9600);          // Initialize virtual USB communication
  pinMode(ledPin, OUTPUT);     // Set Pin 13 as a digital output
  pinMode(buttonPin, INPUT);   // Set Pin 2 as a digital input
}

void loop()
{
  buttonState = digitalRead(buttonPin);  // Reads the electrical state of Pin 2
  
// Checks if the button is pressed or not
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed! LED turned ON.");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Button Released! LED turned OFF.");
  }
  
  delay(500);  // Pauses the execution program for half a second
}
