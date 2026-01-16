void setup() {
  Serial.begin(9600);
}

void loop() {
  int airQuality = analogRead(A0);
  Serial.print("AQI Value: ");
  Serial.println(airQuality);
  delay(1000);
}
