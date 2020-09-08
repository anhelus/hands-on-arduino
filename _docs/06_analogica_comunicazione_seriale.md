# Comunicare tramite la porta seriale (in analogico)

Il mondo è *analogico*, e non digitale. Spesso, infatti, non ci basta sapere se una luce è accesa o spenta, ma vogliamo anche conoscere informazioni sulla potenza istantanea utilizzata, o su quanto è luminosa. Una risposta di questo tipo deve necessariamente coprire un range di valori più grande rispetto a quello offerto dai segnali digitali.

Arduino è in grado di affrontare questa esigenza. Infatti, anche la scheda Uno offre la possibilità di gestire input analogici, mediante sei pin dedicati, etichettati, come già detto, da `A0` ad `A5`. Questi pin hanno a disposizione l'accesso ad un convertitore analogico-digitale, che prende l'intero range di valori in ingresso e li digitalizza 'suddividendoli' in piccole parti. In termini rigorosi, le operazioni coinvolte sono quelle di [campionamento](https://it.wikipedia.org/wiki/Campionamento_(teoria_dei_segnali)) e [quantizzazione](https://it.wikipedia.org/wiki/Quantizzazione_(elettronica)). L'intera conversione avviene in maniera *trasparente* allo sviluppatore: tutto ciò che dovremo fare, quindi, è usare un insieme di semplici funzioni per ottenre ciò di cui abbiamo bisogno.

## Di cosa abbiamo bisogno?

Per questo esperimento, avremo bisogno di:

* un potenziometro;
* cavetteria e connettori;
* una breadboard.

## Come fare?

Inseriamo innanzitutto il potenziometro sulla breadboard, e colleghiamo l'uscita 5V di Arduino ad uno dei pin esterni del potenziometro; l'altro pin esterno dello stesso andrà a GND. A questo punto, colleghiamo il pin `A0` al pin centrale del potenziometro. Lo schema è mostrato nella seguente figura.

![analog_read](../immagini/fondamentali/analog_read.png){: .center}

## Lo sketch (nel dettaglio)

Apriamo la IDE, ed inseriamo il seguente codice in un nuovo sketch, che chiameremo `analog_read.ino`.

    int baudRate = 9600;
    int analogPin = A0;
    int latency = 1;

    void setup() {
        Serial.begin(baudRate);
    }

    void loop() {
        int sensorValue = analogRead(analogPin);
        Serial.println(sensorValue);
        delay(latency);
    }

Notiamo subito che il codice è estremamente simile a quello che abbiamo visto finora; l'unica, vera novità è dato dall'utilizzo della funzione `analogRead()` nel `loop()`.

!!! nota
    I più attenti avranno notato che, in questo sketch, manca la funzione `pinMode()`, che abbiamo finora usato per impostare i pin in modalità di `INPUT` o `OUTPUT`. Ciò è legato al fatto che Arduino imposta *di default* i pin come ingressi: di conseguenza, non è necessario chiamare esplicitamente `pinMode()` qualora si vogliano usare i pin in questa modalità.

### La funzione `analogRead()`

Passiamo direttamente alla parte 'interessante' dello sketch, rappresentata dalla seguente istruzione:

    int sensorValue = analogRead(analogPin);

Avrete notato che l'utilizzo è molto simile a `digitalRead()`. Tuttavia, questa volta stiamo specificando un pin analogico, ovvero `A0`, indirizzato tramite l'uso della variabile `analogPin`. E' particolarmente interessante notare come, contrariamente a quello che si potrebbe pensare, `A0` è un *intero*; occorre quindi tenere bene a mente questo fattore quando andremo a chiamare in futuro delle funzioni che adoperano sui pin analogici.

La funzione `analogRead()` restituisce quindi un valore proporzionale alla lettura del sensore in quello specifico istante. In particolare, il valore restituito è compreso tra 0 e 1023 (quest'ultimo valore è legato alla codifica a 10 bit di Arduino). Se volessimo conoscere il valore di tensione sul pin (che ricordiamo essere compreso tra 0 e 5 V), potremmo usare una semplice proporzione. Per farlo, possiamo usare la seguente istruzione:

    float voltage = sensorValue * (5.0 / 1023.0)

Ricordiamo che il tipo di dato `float` rappresenta un numero decimale, la cui precisione è a 32 bit. Dato che rispetto agli interi l'occupazione in termini di memoria è molto più elevata, è bene utilizzare i float (ed i double) soltanto ove sia strettamente necessario.

Modifichiamo quindi il `loop()` come segue:

    void loop() {
        int sensorValue = analogRead(analogPin);
        Serial.println(sensorValue);
        delay(latency);
        float voltage = sensorValue * (5.0 / 1023.0)
        Serial.println(voltage);
        delay(latency);
    }

In questo modo, potremo conoscere sia il valore analogico letto dal sensore, sia il corrispettivo in volt.

# Ricapitoliamo

Rivediamo assieme cosa abbiamo imparato in questo sketch.

Per prima cosa:

* inizializziamo tre variabili di tipo intero.

Nel `setup()`:

* inizializziamo la scrittura su seriale con baud rate a 9600.

Nel `loop()`:

* impostiamo il valore della variabile `sensorValue` al valore restituito dalla funzione `analogRead()` con parametro `analogPin`. Questo valore è compreso tra 0 e 1023, e varia ad ogni iterazione del `loop()`;
* scriviamo sulla seriale il valore di `sensorValue`;
* attendiamo un millisecondo, e calcoliamo, mediante una semplice proporzione, il valore di tensione associato alla lettura precedente;
* scriviamo sulla seriale il valore di `voltage`;
* attendiamo un millisecondo, e ricominciamo il `loop()`.