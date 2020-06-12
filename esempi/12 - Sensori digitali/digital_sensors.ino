/*
  Esempio di funzionamento di sensori ed attuatori digitali.

  Accende un LED collegato al pin digitale 12 in seguito alla pressione di un pulsante
  collegato al pin digitale 2.

  creato l'11/06/2020
  da Angelo Cardellicchio

  Questo codice di esempio è rilasciato sotto licenza MIT.
*/
// Dichiaro ed inizializzo le variabili globali
int pushButton = 2;
int led = 12
int baudRate = 9600;
int latency = 10;
int buttonState;
int led = 12;

void setup() {
    // Inizializzo la scrittura su seriale ed i pin
    Serial.begin(baudRate);
    pinMode(pushButton, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    // Leggo lo stato del pulsante (1 se premuto, 0 altrimenti)
    buttonState = digitalRead(pushButton);
    Serial.print("Il circuito e': ");
    if (buttonState == 0)
    {
      Serial.println("aperto!");
    }
    else
    {
      Serial.println("chiuso!");
    }
    // Se il pulsante è premuto, accendo il LED.
    digitalWrite(led, buttonState);
    delay(latency);
}
