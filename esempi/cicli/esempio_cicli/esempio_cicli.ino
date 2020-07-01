int pinArray[3] = {4, 7, 8};

void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  // Esempio usando il for
  for(int i = 0; i <= 2; i++) {
    Serial.println("Nel for...");
    digitalWrite(pinArray[i], HIGH);
    delay(1000);
    digitalWrite(pinArray[i], LOW);
    delay(100);
  }
  
  int j = 0;
  // Esempio usando il while  
  while (j < 3) {
    Serial.println("Nel while...");
    digitalWrite(pinArray[j], HIGH);
    delay(1000);
    digitalWrite(pinArray[j], LOW);
    delay(100);
    j += 1;
  }
}
