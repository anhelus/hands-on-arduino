/*
  Esempio di funzionamento di sensori ed attuatori analogici

  Modula, mediante PWM, la luminosità di un LED collegato al pin digitale
  11 a seguito della rotazione di un potenziometro collegato al pin 
  analogico 2.

  creato l'11/06/2020
  da Angelo Cardellicchio

  Questo codice di esempio è rilasciato sotto licenza MIT.
*/
int baudRate = 9600;
int led = 11;
int potentiometer = A0;

void setup() {
  Serial.begin(baudRate);
  pinMode(led, OUTPUT);
}

void loop() {
  // Leggo il valore attuale del potenziometro, lo converto in un valore
  // di luminosità mediante semplici proporzioni matematiche.
  int value = analogRead(potentiometer);
  float voltage = (float) (value / 1024 * 5);
  int brightness = (int) (voltage / 5 * 256);
  // Le istruzioni precedenti possono essere combinate in questo modo:
  // int brightness = (int) (value / 4)
  // Scrivo il valore di luminosità sul pin del LED.
  analogWrite(11, brightness);
}