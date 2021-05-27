

void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
  pinMode(A1,INPUT_PULLUP);
 
}

void loop() {
      int sensorValue = analogRead(A1);
      Serial.println(sensorValue);

}
