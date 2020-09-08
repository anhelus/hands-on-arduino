# Comunicare tramite la porta seriale (in digitale)

Esempi di domande *apparentemente* semplici, ma che in realtà ci si pone molto spesso quando si progetta un sistema IoT, sono le seguenti:

* *quando viene premuto un pulsante?*
* *quante volte viene commutato un interruttore?*
* *qual è lo stato attuale del sensore?*

Per rispondere a questo tipo di domande è spesso possibile implementare azioni basate sullo stato attuale del sistema. Ad esempio:

* **SE** il pulsante è stato premuto, **ALLORA** attiva la luce, **ALTRIMENTI** manda un segnale di allarme.

Prima di poter implementare logiche più o meno complesse, tuttavia, dobbiamo essere in grado di tenere traccia dello stato all'interno dei pin digitali.

## Di cosa abbiamo bisogno?

Per implementare questo sketch, avremo bisogno di:

* un pulsante;
* cavetteria per il collegamento delle componenti;
* una resistenza a 10K&Omega;;
* una breadboard.

## Come fare?

Per prima cosa, connettiamo il pulsante alla breadboard. Uno dei due connettori del pulsante sarà collegato al pin 5V di Arduino, mentre l'altro alla resistenza. Quest'ultima, a sua volta, dovrà essere collegata al pin GND di Arduino da un lato, ed al pin digitale 2 dall'altro. Lo schema è mostrato nella seguente figura.

![digital_read](../immagini/fondamentali/digital_read.png){: .center}

## Lo sketch (nel dettaglio)

Apriamo la IDE, ed inseriamo le seguenti istruzioni in un nuovo sketch, che chiameremo `02-digital_read.ino`.

    int pushButton = 2;
    int baudRate = 9600;
    int latency = 1;

    void setup() {
        Serial.begin(baudRate);
        pinMode(pushButton, INPUT);
    }

    void loop() {
        int buttonState = digitalRead(pushButton);
        Serial.println(buttonState);
        delay(latency);
    }

### Il monitor seriale

Prima di passare a commentare lo sketch, introduciamo un tool *essenziale* messo a disposizione dalla IDE di Arduino, ovvero il *monitor seriale*, che risulterà essere estremamente utile per il debug dei nostri sketch. Per valutare la corretta funzionalità del codice, infatti, si usano molto spesso dei flag (che possono essere, ad esempio, stringhe o valori booleani), che vanno monitorati durante l'esecuzione dello sketch. In tal senso, è necessario utilizzare il monitor seriale, che mostra a schermo, ad ogni iterazione del loop, quello che effettivamente sta accadendo.

Per aprire il monitor seriale, assicuriamoci di aver collegato la nostra board al computer; andiamo quindi dal menu **Strumenti** e selezioniamo **Monitor Seriale**. In alternativa, possiamo usare la scorciatoia da tastiera `Ctrl + Maiusc + M`. Il monitor seriale è mostrato nella figura successiva.

![monitor_seriale](../immagini/fondamentali/monitor_seriale.png){: .center}

!!! nota
    Se non riuscite a connettervi al Monitor Seriale, assicuratevi che la porta cui è collegato l'Arduino sia selezionata da **Strumenti > Porta**.

### Inizializzazione delle variabili e setup

Le prime tre istruzioni, come al solito, vedono l'inizializzazione delle variabili che utilizzeremo:

    int pushButton = 2;
    int baudRate = 9600;
    int latency = 1;

La prima variabile rappresenta il pin cui connetteremo il nostro pulsante, mentre la terza, in analogia con lo script `blink.ino`, è il ritardo che introdurremo nel `loop()`. La seconda variabile, invece, è il valore che assegneremo al [baud rate](https://it.wikipedia.org/wiki/Baud) (a breve scenderemo più nel dettaglio, non preoccupatevi).

Vediamo rapidamente il `setup()`:

    void setup() {
        Serial.begin(baudRate);
        pinMode(pushButton, INPUT);
    }

Conosciamo già `pinMode()`, che però stavolta useremo per impostare il pin 2 come ingresso; passiamo quindi ad introdurre direttamente la funzione `Serial.begin()`. 

#### La funzione `Serial.begin()`

La funzione `Serial.begin()` fa parte della libreria `Serial`, delegata alla gestione della comunicazione sulla porta seriale. In particolare, la libreria permette di *stabilire* e *gestire* la comunicazione tra il nostro computer e la board Arduino.

!!! nota
    Per accedere ad una funzione contenuta in una libreria, occorre usare la notazione `Libreria.funzione()`, facendo quindi precedere il nome della funzione da quello della libreria, e separandoli mediante un punto.

La comunicazione tra computer e board è *bidirezionale*, e la funzione `begin()` permette di inizializzarla. Per farlo, è però necessario definire il *baud rate*, ovvero la frequenza alla quale i dati fluiscono tra il nostro computer ed Arduino. In particolare, il baud rate è il numero di *simboli* che sono trasmessi ogni secondo sul canale di comunicazione. Di conseguenza, scegliere un baud rate pari a 9600 farà sì che tra la board ed il computer possano 'scorrere' 9600 simboli al secondo. 

!!! nota
    E' importante non confondere il baud rate con il [bitrate](https://it.wikipedia.org/wiki/Velocit%C3%A0_di_trasmissione), ovvero il numero di bit trasmessi al secondo. In particolare, Arduino usa 10 bit per codificare un singolo byte, dovendo inserire anche un bit di start ed un bit di stop. Di conseguenza, anche se il numero di bit trasmessi è effettivamente 9600, Arduino trasmette 960 byte al secondo, di cui solo 7680 rappresentano il payload utile.

### Il `loop()`

Nel `loop()` troviamo le seguenti istruzioni:

    void loop() {
        int buttonState = digitalRead(pushButton);
        Serial.println(buttonState);
        delay(latency);
    }

Anche qui troviamo una funzione conosciuta, `delay()`, e due nuove, ovvero `digitalRead()` e `println()`; approfondiamole assieme.

#### La funzione `digitalRead()`

L'istruzione:

    int buttonState = digitalRead(pushButton);

è molto interessante per due motivi: il primo è che, contrariamente a quanto abbiamo visto finora, non si trova all'inizio dello sketch. Questo ci suggerisce come sia possibile dichiarare ed inizializzare una variabile in *qualsiasi* punto del codice; ovviamente, però, il *dove* si effettua questa operazione influenza in ogni caso tutta una serie di aspetti che approfondiremo nel prosieguo.

Il secondo punto è leggermente più complesso. Proviamo a spezzare l'istruzione: nella prima parte (`int buttonState`) dichiariamo una variabile di tipo intero e di nome `buttonState`, mentre nella seconda parte chiamiamo la funzione `digitalRead()`, la quale accetta come parametro un intero (il nostro `pushButton`) e restituisce il valore associato alla lettura dello stesso (in questo caso, essendo un pin digitale, `HIGH` o `LOW`). In particolare, `digitalRead(pushButton)` sarà pari ad 1 nel caso il valore di `pushButton` sia settato ad `HIGH`, e 0 nel caso il valore di `pushButton` sia a `LOW`. Questo valore, di conseguenza, sarà 'trasmesso' a `buttonState`, che sarà pari ad 1 se `pushButton` è `HIGH`, ed a 0 se `pushButton` è `LOW`.

Ricapitolando:

* se `pushButton` è `HIGH`, `digitalRead(pushButton)` restituisce `HIGH`, e `buttonState` è inizializzato ad `HIGH`;
* viceversa, se `pushButton` è `LOW`, `digitalRead(pushButton)` restituisce `LOW`, e `buttonState` è inizializzato ad `LOW`.

Anche questo tipo di assegnazione è molto utilizzato, per cui conviene familiarizzarvi il prima possibile.

#### La funzione `Serial.println()`

Vediamo ora un'altra funzione appartenente alla libreria `Serial`, chiamata `println()`. Questa funzione accetta come parametro un valore (in questo caso, un intero), e lo stampa in output sulla porta seriale. La funzione `println()` ci permette quindi di monitorare, tramite monitor seriale, il valore assunto da `buttonState` nel tempo, ad ogni iterazione dello sketch.

# Ricapitoliamo

Rivediamo assieme cosa abbiamo imparato in questo sketch.

Per prima cosa:

* inizializziamo tre variabili di tipo intero.

Nel `setup()`:

* inizializziamo la scrittura su seriale con baud rate a 9600;
* impostiamo il pin 2 in modalità `INPUT`.

Nel `loop()`:

* impostiamo il valore della variabile `buttonState` al valore restituiot dalla funzione `digitalRead()` con parametro `pushButton`. Questo valore varia ad ogni iterazione del `loop()`;
* scriviamo sulla seriale il valore di `buttonState`;
* attendiamo un millisecondo, e ricominciamo il `loop()`.

Per verificare il funzionamento dello sketch, provate ad eseguirlo sulla vostra board, e controllate il monitor seriale.