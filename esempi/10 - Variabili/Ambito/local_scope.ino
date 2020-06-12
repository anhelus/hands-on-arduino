void setup() {
  // put your setup code here, to run once:
  int a = 10;
  Serial.begin(9600);
  Serial.println("Prima iterazione");
  Serial.println(a);
}

void loop() {
  // put your main code here, to run repeatedly:
  float a = 0.1;
  a += 1;
  Serial.println("Nel loop");
  Serial.println(a);
  delay(1000);
}
