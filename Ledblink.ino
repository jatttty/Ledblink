int ledPin = 7;
int ledPin2 = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(LedPin, HIGH);
  digitalWrite(LedPin2, HIGH);
  delay(500);
  digitalWrite(LedPin, LOW);
  digitalWrite(LedPin2, LOW);
  delay(500);
 
}
