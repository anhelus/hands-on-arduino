char a = '2';

void setup() {
  Serial.begin(9600);
}

void loop() {
  int b = a - '0';
  char c = b + '0';
  Serial.print("A is: ");
  Serial.println(a);
  Serial.print("B is: ");
  Serial.println(b);
  Serial.print("C is: ");
  Serial.println(c);
  delay(1000);
}
