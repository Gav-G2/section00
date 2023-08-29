int n = 0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  Serial.print(n);
  Serial.println(" seconds have passed");
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(800);
  n=n+1;
}
