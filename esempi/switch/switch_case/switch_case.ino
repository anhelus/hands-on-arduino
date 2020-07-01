void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int value = analogRead(A0);
  int led = map(value, 0, 1023, 1, 4);
  Serial.print("Value: ");
  Serial.println(value);
  Serial.print("LED: ");
  Serial.println(led);
  switch (led) {
    case 1:
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      break;
    case 2:
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      break;
    case 3:
      digitalWrite(8, LOW);
      digitalWrite(12, HIGH);
      break;
    case 4:
      digitalWrite(8, LOW);
      digitalWrite(12, HIGH);
      break;
    default:
      digitalWrite(8, LOW);
      digitalWrite(12, LOW);
      break;
  }
}
