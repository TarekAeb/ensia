// Define the LED pin
const int green = 13;
const int yellow = 12;
const int red = 11;

void setup() {
  // Initialize the LED pin as an output
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // Red light ON (Stop)
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);

  // Yellow light ON (Get ready)
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  // Green light ON (Go)
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);

  // Brief yellow light before red again (caution)
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
}