Riprendiamo direttamente da dove avevamo interrotto la lezione precedente, e scriviamo il nostro primo sketch. La tradizione impone che il primo programma in un nuovo linguaggio sia il (famigerato) `Hello, World!`, uno script (invero molto semplice) la cui principale (ed unica) funzione è quella di visualizzare a schermo la scritta **Hello, World!**.  

Arduino, ovviamente, non va contro le ormai consolidate usanze. E' però necessario modificarle leggermente, dato che stiamo parlando di una piattaforma che combina hardware e software, per cui il nostro sketch dovrà eseguire l'operazione più semplice che si possa effettuare sui due elementi combinati. Ovvero, molto banalmente, far *lampeggiare un LED*. Benvenuti nello script `Blink.ino`.

## Di cosa abbiamo bisogno?

Tutti gli sketch che andremo ad eseguire su Arduino necessiteranno, oltre che della parte software, anche di alcune componenti hardware. Per questa prima prova, ci occorreranno:

* un LED (il colore non è importante);
* una resistenza da &Omega;;
* connettori a coccodrillo, jumper e/o una breadboard.

In realtà, esclusivamente per questo sketch, possiamo fare a meno di utilizzare la componentistica hardwre, sfruttando il LED integrato nella maggior parte delle board Arduino (tra cui la Uno, che è quella che utilizzeremo). Tuttavia, può essere utile usare questa configurazione per fare pratica. 

## Come fare?

Per prima cosa, inseriamo il LED all'interno della breadboard il LED, e colleghiamo il capo più corto alla resistenza da 220 &Omega;, come in figura. Successivamente, colleghiamo il capo del LED libero al GND, ed il terminale libero della resistenza al pin 13 di Arduino. E' importante sottolineare come la resistenza non sia *polarizzata*: ciò permette quindi di collegarla al LED ed alla scheda in maniera indipendente dal verso scelto. Nella figura successiva, vediamo come collegare effettivamente le varie componenti del circuito.

![blink](../immagini/fondamentali/blink.png){: .center}

Questa configurazione (che è quella che seguiremo) utilizza la breadboard ed i jumper.

## Lo sketch (nel dettaglio)

Colleghiamo adesso l'Arduino al nostro computer mediante un cavo USB, avviamo la IDE, ed inseriamo il codice seguente in un nuovo sketch, che chiameremo `01-blink.ino`.

    int led = 13;
    int latency = 1000;
    
    void setup() {
        pinMode(led, OUTPUT);
    }

    void loop() {
        digitalWrite(led, HIGH);
        delay(latency);
        digitalWrite(led, LOW);
        delay(latency);
    }

Clicchiamo ora sul pulsante **Verifica** dell'IDE; se è tutto ok, potremo procedere a caricare lo sketch sulla scheda tramite il pulsante **Carica**. I pulsanti sono collocati in alto a sinistra nell'IDE, e sono mostrati nella figura successiva.

![verifica_compilazione](../immagini/fondamentali/verifica_compilazione.png){: .center}

Una volta caricato lo sketch sulla scheda, se tutto è andato per il verso giusto, vedremo il led accendersi e spegnersi ogni secondo.

Torniamo sul codice che abbiamo scritto nel nostro primo sketch, ed analizziamolo quindi più nel dettaglio.

### L'inizializzazione delle variabili

Il primo blocco di codice che vogliamo analizzare è il seguente:

    int led = 13;
    int latency = 1000;

Qui vediamo un semplice esempio di applicazione dei concetti che abbiamo già illustrato quando abbiamo introdotto le variabili. Infatti, si tratta di due semplici *inizializzazioni* e *dichiarazioni*, rispettivamente della variabile di tipo intero `led`, il cui valore è pari a 13, e della variabile (sempre di tipo intero) `latency`, il cui valore è pari a 1000.

### Il `setup()`

Andiamo avanti con l'analisi del codice, e troviamo la nostra prima *funzione*, ovvero `void setup()`. Questa funzione viene chiamata all'inizio dell'esecuzione dello sketch, e serve ad impostare i valori e le operazioni iniziali. In questo caso, abbiamo già inizializzato i valori di `led` e `latency`; tuttavia, sarebbe stato ugualmente corretto modificare la funzione `setup()` per fare in modo che i valori iniziali di queste variabili fossero assegnati proprio all'interno di questa:

    void setup() {
        led = 13;
        latency = 1000;
        pinMode(led, OUTPUT);
    }

All'interno della funzione `setup()`, è possibile notare una ulteriore funzione, ovvero `pinMode()`. Vediamo assieme di cosa si tratta.

#### La funzione `pinMode()`

La funzione `pinMode()` permette di impostare la modalità di funzionamento di un pin: in particolare, questo può essere impostato come un *output* (ovvero come una *uscita*) o un *input* (ovvero come un *ingresso*). Quando il pin è impostato come output, è in grado di *scrivere*, o inviare in uscita, un certo valore di tensione; quando invece è impostato come input, è in grado di *leggere*, o ricevere in ingresso, un certo valore di tensione.

Di conseguenza, `pinMode()` accetta due parametri: il primo è il numero del pin di cui settare la modalità di funzionamento, mentre il secondo è indicativo della modalità di funzionamento vera e propria. Per quello che riguarda il primo parametro, questo è semplice da interpretare e ricordare, e può assumere valori che vanno da `0` a `13` per i pin digitali, e da `A0` ad `A5` per i pin analogici. Il secondo parametro è anch'esso estremamente semplice da ricordare, e può essere `INPUT` o `OUTPUT`.

### Il `loop()`

Vediamo ora il corpo centrale dello sketch, costituito dalla funzione `loop()`, la quale esegue in maniera *iterativa* (ovvero ciclica) le istruzioni contenute al suo interno. In particolare, la nostra implementazione del loop contiene le seguenti istruzioni:

    void loop() {
        digitalWrite(led, HIGH);
        delay(latency);
        digitalWrite(led, LOW);
        delay(latency);
    }

Approfondiamo le due nuove funzioni che abbiamo appena scritto, ovvero `digitalWrite()` e `delay()`.

#### La funzione `digitalWrite()`

La funzione `digitalWrite()` viene utilizzata per applicare una certo valore di tensione ai capi di un pin digitale. In particolare, gli unici valori ammissibili sono *alto* (`HIGH`) e *basso* (`LOW`). Impostare un valore alto applicherà ai capi del pin una tensione di 5 volt, la quale farà accendere il LED; di converso, un valore basso applicherà ai capi del pin un valore di tensione nullo, per cui il LED si spegnerà.

Il motivo per cui il LED si accende o spegne a seconda della tensione applicata è semplice, ed è riconducibile ai principi di base dell'elettronica. Infatti, dato che un capo del LED è collegato a terra (GND), con tensione pari a 0 V, applicare una differenza di potenziale grazie ai 5 V del pin settato su `HIGH` provocherà lo scorrere della corrente attraverso il LED. Ciò, ovviamente, non avverrà qualora la differenza di potenziale tra GND e pin 13 sia nulla (ovvero, se entrambi sono a 0 V).

#### La funzione `delay()`

L'altra funzione che abbiamo appena scoperto è `delay()`. Questa funzione accetta come parametro in ingresso un unico valore, pari al tempo (in millisecondi) che lo sketch dovrà attendere prima di proseguire nella sua esecuzione. In questo caso, quindi, scrivere:

    delay(latency);

significa imporre un ritardo pari proprio al valore di `latency` (che ricordiamo essere pari a 1000) prima della prosecuzione nell'esecuzione dello sketch.

# Ricapitoliamo

Rivediamo assieme cosa abbiamo imparato in questo sketch.

Per prima cosa:

* inizializziamo due variabili di tipo intero.

Nel `setup()`:

* impostiamo il pin 13 in modalità `OUTPUT`.

Nel `loop()`:

* per prima cosa, impostiamo il valore del pin 13 su `HIGH`, per cui il LED si accende;
* l'esecuzione del programma viene sospesa per un secondo;
* il valore del pin 13 viene quindi impostato a `LOW`, per cui il LED si spegne;
* l'esecuzione del programma viene sospesa per un secondo;
* il `loop()` ricomincia fino a che Arduino è in funzione.