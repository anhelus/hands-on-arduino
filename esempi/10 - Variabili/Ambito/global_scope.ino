int a = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int b = 1;
  a += 1;
  b += 1;
  Serial.print("A is: ");
  Serial.println(a);
  Serial.print("B is: ");
  Serial.println(b);
  delay(1000);
}
