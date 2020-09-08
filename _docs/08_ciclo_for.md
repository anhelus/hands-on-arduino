# Il ciclo For

Esistono alcune istruzioni talmente utilizzate che è possibile trovarle praticamente ovunque. Ne abbiamo vista una nello sketch precedente, ovvero l'istruzione `if`; un altro esempio è dato dall'istruzione `for`, che permette di reiterare un'azione un certo numero di volte, riducendo così le righe di codice necessarie per la scrittura dello sketch, e semplificando, di conseguenza, la vita dello sviluppatore.

Scopriamolo insieme.

## Di cosa abbiamo bisogno

Per questo esperimento, avremo bisogno di:

* quattro LED (di qualsiasi colore);
* quattro resistenze da 220 &Omega;;
* cavetteria e breadboard.

## Come fare?

Lo schema di connessione è molto semplice, e ricalca fedelmente quello visto per la realizzazione degli script `blink` e `pwm`. Ad ogni modo, in questo caso sfrutteremo le proprietà della breadboard per connettere tutti e quatro i led all'unico pin GND di Arduino.

Lo schema è mostrato nella figura successiva.

![for_loop](../immagini/fondamentali/for_loop.png){: .center}

## Lo sketch (nel dettaglio)

Apriamo l'IDE di Arduino, e creiamo un nuovo sketch chiamato `for_loop.ino`. Aggiungiamo il codice seguente:

    int timer = 100;

    void setup() {
        for (int thisPin = 5; thisPin <= 8; thisPin++) {
            pinMode(thisPin, OUTPUT);
        }
    }

    void loop() {
        for (int thisPin = 5; thisPin <= 8; thisPin++) {
            digitalWrite(thisPin, HIGH);
            delay(timer);
            digitalWrite(thisPin, LOW);
        }

        for (int thisPin = 8; thisPin >= 5; thisPin--) {
            digitalWrite(thisPin, HIGH);
            delay(timer);
            digitalWrite(thisPin, LOW);
        }
    }

Come al solito, concentriamoci sulle istruzioni più interessanti.

### Il `setup()`

Nel `setup()`, troviamo il primo esempio di ciclo `for`. In particolare:

    for (int thisPin = 5; thisPin <= 8; thisPin++) {
        pinMode(thisPin, OUTPUT);
    }

Analizziamo nel dettaglio il funzionamento del ciclo.

#### Il ciclo `for`

La sintassi alla base del ciclo `for` è la seguente:

    for (int thisPin = 5; thisPin <= 8; thisPin++)

Ci sono tre diverse istruzioni tra le parentesi. La prima inizializza il *contatore* usato nel ciclo, ed è praticamente una dichiarazione ed inizializzazione di variabile:

    int thisPin = 2;

La variabile `thisPin` sarà quindi usata nell'istruzione successiva, chiamata *condizione di test*:

    thisPin <= 8;

La condizione di test, in pratica, stabilisce se continuare o meno il ciclo. E' un'istruzione condizionale: per cui, se la condizione è vera, le istruzioni all'interno del ciclo saranno eseguite, altrimenti lo sketch terminerà l'esecuzione del ciclo, e proseguirà con le istruzioni successive.

L'ultima istruzione specificata nella firma del ciclo permette di *aggiornare* il valore del contatore:

    thisPin++;

In particolare, l'operatore `++` indica allo sketch di aumentare di 1 il valore della variabile `thisPin`. In altre parole, l'istruzione precedente rappresenta una forma compatta della seguente:

    thisPin = thisPin + 1;

Ovviamente, `thisPIn--` diminuisce la variabile `thisPin` di 1, mentre istruzioni del tipo:

    thisPin += 10
    thisPin -= 10

permettono di aumentare e diminuire, rispettivamente, il valore di `thisPin` di `10` (o di qualsiasi altro valore specificato nell'istruzione).

Torniamo al ciclo. Abbiamo detto che se la condizione è rispettata, allora le istruzioni specificate all'interno del ciclo saranno eseguite, ed il contatore verrà incrementato. Questo processo viene ripetuto, iterazione dopo iterazione; alla fine, il contatore assumerà un valore tale da non rispettare più la condizione di test, ed il programma uscirà dal ciclo for. Nel nostro caso, ciò avverrà quando la variabile `thisPin` sarà strettamente maggiore di 8.

Analizziamo brevemente l'unica istruzione contenuta all'interno del ciclo. Notiamo subito che si tratta dell'uso di `pinMode()` per definire il pin specificato da `thisPin` come pin di uscita:

    pinMode(thisPin, OUTPUT);

E' interessante sottolineare come `pinMode()` sia parametrizzata con il valore associato a `thisPin`; ciò significa che, iterazione dopo iterazione, `pinMode()` andrà a definire come OUTPUT un diverso pin della board. Se non utilizzassimo il ciclo `for`, dovremmo scrivere le seguenti istruzioni:

    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);

E' quindi evidente come l'utilizzo di un ciclo `for` ci permetta, anche in casi molto semplici, di risparmiare la scrittura di diverse righe di codice, rendendo il nostro sketch più leggibile (e migliorandone la manutenibilità nel tempo).

### Il `loop()`

All'interno del `loop()` ci sono altri due cicli `for`:

    for (int thisPin = 5; thisPin <= 8; thisPin++) {
        digitalWrite(thisPin, HIGH);
        delay(timer);
        digitalWrite(thisPin, LOW);
    }

    for (int thisPin = 8; thisPin >= 5; thisPin--) {
        digitalWrite(thisPin, HIGH);
        delay(timer);
        digitalWrite(thisPin, LOW);
    }

Il funzionamento è analogo al ciclo presente nel `setup()`. Descrivendolo in maniera informale, vedremo il seguente effetto: nel primo ciclo, incrementeremo man mano il valore di `thisPin`, facendo lampeggiare tutti i LED da sinistra a destra; nel secondo ciclo, il valore di `thisPin` diminuirà, e l'ordine di lampeggiamento sarà quindi invertito (ovvero, da destra verso sinistra).

Una volta che termina il secondo ciclo, il `loop()` ricomincia, e si riprende dal primo `for`.

!!! nota
    E' ovvia l'analogia tra il ciclo `for` e la funzione `loop()`. Infatti, il `loop()` non è altro che un ciclo in cui la funzione di test è sempre rispettata.

!!! nota
    Esiste un'altra forma di ciclo, definita dall'istruzione `while`. Questa forma è sostanzialmente analoga al `for`, con la differenza che la modifica della variabile di test deve essere effettuata, iterazione dopo iterazione, all'interno del ciclo (e non nella testa dello stesso).

!!! nota
    I cicli ci offrono un buono spunto per accennare brevemente al concetto di *ambito* di una variabile. L'ambito indica la validità di una variabile all'interno di un programma: quelle dichiarate all'inizio dello sketch, prima di `setup()` e `loop()`, hanno ambito *globale*, e possono essere usate ovunque all'interno del codice. Le variabili usate all'interno di un ciclo, come ad esempio il contatore, sono valide invece soltanto all'interno del ciclo stesso.

# Ricapitoliamo

Rivediamo assieme cosa abbiamo imparato in questo sketch.

Per prima cosa:

* inizializziamo una variabile di tipo intero.

Nel `setup()`:

* usiamo un ciclo per impostare i pin dal 5 all'8 come `OUTPUT`.

Nel `loop()`:

* usiamo un ciclo per far lampeggiare i pin dal 5 all'8;
* usiamo un altro ciclo per far lampeggiare i pin dall'8 al 5;
* reiteriamo il `loop()`.