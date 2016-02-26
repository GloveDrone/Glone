const unsigned X_AXIS_PIN = 2;
const unsigned Y_AXIS_PIN = 1;
const unsigned Z_AXIS_PIN = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(analogRead(X_AXIS_PIN));
  Serial.print(" ");
  Serial.print(analogRead(Y_AXIS_PIN));
  Serial.print(" ");
  Serial.println(analogRead(Z_AXIS_PIN));
  delay(100);
}
