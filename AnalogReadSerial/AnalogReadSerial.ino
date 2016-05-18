/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

 This example code is in the public domain.
 */
const int ledPin = 13;
float sensorValue = 0;
int ledState = LOW;
boolean pressed = false;
String message ="";
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
    if (sensorValue >= 400) {
    ledState = HIGH;
    pressed = true;
  } else {
    ledState = LOW;
    pressed = false;
    message = "get cucked";
  }
  // print out the value you read:
  Serial.println(message);
  digitalWrite(ledPin, ledState);
  delay(1);        // delay in between reads for stability
}
