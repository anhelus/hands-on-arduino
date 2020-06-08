float float_var;

void setup() {
  // put your setup code here, to run once:
  float_var = 1.1;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int int_var = (int) float_var;
  Serial.println(int_var);
  delay(1000);
}
