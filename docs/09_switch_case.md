# L'istruzione `switch-case`

Immaginiamo di dover organizzare una vacanza. Oltre a tenere conto di tutta una serie di vincoli legati, ad esempio, al budget, al periodo, ed alle nostre precedenze, è molto probabile che, dopo un po', si finisca per dover scegliere la nostra meta tra un ventaglio di possibili opzioni. Ad esempio:

* se il budget è poco, rimaniamo in Italia;
* se il budget è medio, andiamo in Europa;
* con un budget alto, andiamo negli Stati Uniti.

Questa situazione, in cui si presenta la necessità di scegliere tra diverse opzioni, o *casi*, è abbastanza comune nella programmazione. Ed è quindi per questo che molti linguaggi definiscono un'apposita istruzione per trattare questa evenienza, ovvero lo `switch-case`. In linguaggio informatico, infatti, l'istruzione precedente potrebbe essere riscritta come:

    switch (budget) {
        case basso:
            goTo(Italia);
            break;
        case medio:
            goTo(Europa);
            break;
        case alto:
            goTo(Stati Uniti);
            break;
    }

La sintassi parte quindi con la parola `switch`, seguita da delle parentesi nelle quali si scrive il nome della variabile da valutare. Conseguentemente, nel caso la variabile `budget` assuma valore `basso`, si eseguiranno le istruzioni contenute nell'apposito `case` (ovvero andare in Italia); se il `budget` è `medio`, si andrà in Europa, e così via. Importante sottolineare come le istruzioni relative ad ogni `case` siano quelle che si trovano prima della rispettiva parola chiave `break`.

!!! nota
    Lo `switch-case` può essere implementato anche mediante una serie di `if-then-else`. Offre però una sintassi più concisa e, in alcuni linguaggi di programmazione, performance migliori.

!!! nota
    Esiste anche un `case` particolare, detto di *default*, nel quale sono contenute le istruzioni da eseguire qualora la variabile sotto esame non rispetto alcuno dei `case` precedentemente valutati.

## Di cosa abbiamo bisogno?

Per questo esperimento, abbiamo bisogno di:

* un potenziometro;
* cavetteria ed una breadboard.

## Come fare?

Per questo esperimento, sfrutteremo il setup già visto con `analog_read.ino`; di seguito, riportiamo la figura contenente la schematica.

![analog_read](../immagini/fondamentali/analog_read.png){: .center}

## Lo sketch (nel dettaglio)

Anche stavolta, apriamo l'IDE di Arduino, e creiamo un nuovo sketch, chiamato `switch.ino`, che conterrà il seguente codice.

    int analogPin = A0;
    int latency = 100;

    void setup() {
        Serial.begin(9600);
    }

    void loop() {
        int min = 0;
        int max = 1023;

        int sensorReading = analogRead(A0);

        int range = map(sensorReading, min, max, 0, 3);

        switch (range) {
            case 0:
                Serial.println('low');
                break;
            case 1:
                Serial.println('medium");
                break;
            case 2:
                Serial.println("high");
                break;
            case 3:
                Serial.println("very high");
                break;
        }
        delay(latency);
    }

Notiamo subito che questo sketch è leggermente più complesso di quelli visti finora. Non perdiamoci però d'animo, e passiamo ad analizzarlo nelle parti più interessanti, che troviamo all'interno del `loop()`.

### Il `loop()`

La prima nuova funzione che notiamo all'interno del `loop()` è la funzione `map()`.

#### La funzione `map()`

Per prima cosa, ricordiamo che `analogRead()` restituisce un valore all'interno di un range che va da 0 a 1023. Esistono quindi 1024 diversi possibili casi, per cui possiamo scrivere una serie di istruzioni per ciascuno o, più sapientemente, *condensare* questo range in un insieme di valori molto più piccolo. Questo è proprio quello che ci permette di fare la funzione `map()`

    int range = map(sensorReading, min, max, 0, 3);

In particolare, `map()` accetta i seguenti cinque argomenti:

* *variabile da mappare*, nel nostro caso `sensorReading`;
* *valore inferiore del range iniziale*, nel nostro caso `min`, che è pari a `0`;
* *valore superiore del range iniziale*, nel nostro caso `max`, che è pari a `1023`;
* *nuovo valore inferiore del range iniziale*, nel nostro caso `0`;
* *nuovo valore superiore del range iniziale*, nel nostro caso `3`;

Per chiarire meglio il funzionamento di `map()`, osserviamo la seguente tabella:

| Valore in ingresso | &rarr; | Valore in uscita |
|---|---|---|
| 0-255 | &rarr; | 0 |
| 256-511 | &rarr; | 1 |
| 512-767 | &rarr; | 2 |
| 768-1023 | &rarr; | 3 |

In altre parole, un valore di `sensorReading` compreso tra `0` e `255` sarà convertito in `0`; un valore tra `256` e `511` in `1`, e così via.

#### Lo switch-case

Successivamente, viene definito il nostro `switch` come:

    switch (range) {
        case 0:
            Serial.println('low');
            break;
        case 1:
            Serial.println('medium");
            break;
        case 2:
            Serial.println("high");
            break;
        case 3:
            Serial.println("very high");
            break;
    }

Se abbiamo seguito fin qui, è molto semplice comprendere cosa stia accadendo. Nel caso la variabile `range` (ovvero la variabile già mappata) assuma valore `0`, verrà stampato sulla seriale il valore `low`; nel caso range sia `1`, sarà stampato sulla seriale `medium`, e via dicendo.

Una volta uscito dallo `switch`, lo sketch attende cento millisecondi, e riprende quindi l'esecuzione del `loop()`.

# Ricapitoliamo

Rivediamo assieme cosa abbiamo imparato in questo sketch.

Per prima cosa:

* inizializziamo due variabili di tipo intero.

Nel `setup()`:

* inizializziamo la scrittura su seriale con baud rate a 9600.

Nel `loop()`:

* leggiamo il valore in ingresso dal potenziometro, e lo mappiamo in un range compreso tra 0 e 4;
* a seconda del valore assunto dalla variabile mappata (`range`), scriviamo una diversa stringa sulla seriale mediante l'istruzione `switch`;
* attendiamo cento millisecondi, e ricominciamo il `loop()`.