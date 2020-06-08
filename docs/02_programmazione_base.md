# Le basi della programmazione

## Cosa è una IDE?

Ok, partiamo subito rispondendo alla domanda che sorge quasi 'spontanea': *cosa si intende per IDE?*

IDE è un acronimo inglese, che sta per *Integrated Development Environment*. Come molti dei termini anglofoni, non è disponibile una traduzione 'letterale': si potrebbe approssimare con *ambiente di sviluppo integrato*, ma non renderebbe completamente l'idea. Una IDE è uno strumento indispensabile nella vita di qualsiasi sviluppatore. Può essere visto come un editor di testo 'potenziato', il quale mette a disposizione un insieme di tool per semplificare la scrittura e la verifica del codice, oltre che l'integrazione di librerie esterne e la compilazione dello stesso. Fermarsi qui sarebbe però riduttivo: esistono, infatti, delle IDE in grado di supportare un gran numero di linguaggi di programmazione, oltre che di offrire caratteristiche avanzate in termini di personalizzazione e verifica della qualità del codice scritto.

## La IDE di Arduino

In questo vasto ecosistema di tool per lo sviluppo si inserisce la [IDE di Arduino](https://www.arduino.cc/en/Main/Software), rilasciata anch'essa sotto licenza open source, ed utilizzata per lo sviluppo dei programmi (in gergo, `sketch`) che saranno eseguiti sulla board. 

Al momento, esistono due versioni della IDE. La prima è la versione classica, scaricabile all'indirizzo precedente, mentre la seconda è l'editor web, raggiungibile a [questo indirizzo](https://create.arduino.cc/editor).

# Il linguaggio `Arduino`

Il linguaggio usato per programmare una board Arduino ricorda parecchio il linguaggio C, estremamente come tra i programmatori, ma risulta essere comunque meno complesso, in quanto astrae, almeno a livello 'base', lo sviluppatore da problematiche quali la gestione della memoria e dei puntatori. Di conseguenza, se già sappiamo programmare, sarà estremamente facile approcciarci al mondo di Arduino: i concetti base di programmazione rimangono sempre gli stessi, e dovremo semplicemente adattarli alle nostre esigenze.

Il codice che scriveremo sarà quindi *human readable*. Ciò implica che sarà fatto da un insieme di istruzioni che avranno senso per gli esseri umani, ma, purtroppo, non saranno di facile interpretazione da parte della macchina. Parte del lavoro dell'IDE (e, nello specifico, di uno dei suoi componenti) è quindi quello di prendere il codice scritto dallo sviluppatore e modificarlo, traducendolo in un codice che possa essere eseguito dalla macchina (*machine readable*). Questo processo è genericamente chiamato *traduzione*, e, nello specifico caso di Arduino, viene detto *compilazione*.

Il compilatore ha quindi il compito di tradurre il codice scritto dallo sviluppatore in un linguaggio più vicino a quello della macchina (che, come è facile immaginare, parla un 'idioma' fatto di zeri ed uno). Questo processo avviene a *compile-time*, ed è seguito dal *runtime*, ovvero il periodo di tempo nel quale il programma è effettivamente in esecuzione sulla macchina. La IDE di Arduino permette di distinguere tra i due momenti: potremo infatti limitarci a compilare il codice, verificandone la sua esattezza, o potremo eseguirlo direttamente sulla board, andando quindi a verificarne il corretto funzionamento a runtime.

Ma come fare a scrivere un programma che possa essere interpretato dalla board? Per questo, occorre introdurre alcuni dei concetti alla base della programmazione, partendo dal più importante, ovvero quello di *variabile*.

# Le variabili, queste sconosciute...

Per descrivere il concetto di variabile, possiamo partire con una semplice analogia, assimilandola ad un *contenitore*. Ogni contenitore è adatto ad uno specifico *tipo* di oggetto: una bottiglia non potrà contenere del pane, mentre un cassetto non sarà adatto a contenere un televisore. Un'altra analogia è quella legata al *contenuto* del contenitore: infatti, questo può essere modificato alla bisogna. Ad esempio, possiamo sempre mettere altra acqua nella nostra bottiglia, o cambiare le calze nel nostro cassetto.

## Dichiarare una variabile

Cerchiamo di traslare questa analogia in termini più 'informatici'. La variabile (il nostro contenitore) sarà adatta a 'contenere', o, per meglio dire, *memorizzare*, un valore associato ad un certo *tipo*. A differenza della maggior parte dei contenitori, inoltre, una variabile ha anche un *nome* associato. Questo serve, ovviamente, per poterci riferire ad essa in un secondo momento. Possiamo provare quindi a dichiarare la nostra prima variabile in questo modo:

    int numero;

Semplice, vero? Cerchiamo di comprendere il codice precedente.

La parola `int` è una delle *parole chiave* (in inglese *keyword*) messe a disposizione dal linguaggio Arduino, e rappresenta uno specifico tipo di valori che, intuitivamente, è dato dai numeri *interi*. La parola `numero`, invece, è il nome che associamo alla variabile, e che potremo riutilizzare più avanti nel codice per *invocarla*.

### I tipi di variabile

Abbiamo detto che esistono diversi tipi di variabile. Finora, ne abbiamo incontrato uno, ovvero il tipo `int`. Questo tipo può assumere valori esclusivamente appartenenti al dominio dei numeri interi, che vanno da -32768 a 32767. Questi valori sono legati a due fattori ben precisi, ovvero la *memoria* occupata da una variabile di tipo intero, ed il *segno* della variabile. 

Per quello che riguarda il primo aspetto, le variabili di tipo intero occupano esattamente 16 bit all'interno della memoria del nostro microcontrollore. Ciò significa, di conseguenza, che i valori che potranno essere trattati saranno, al massimo, 65535 (ovvero 2 elevato alla 16). Oltre questo numero, il conteggio 'ricomincia', per cui, sommando 1 a 65535, otterremo 0. Un attimo, però: stiamo trascurando il secondo aspetto, ovvero quello del segno della variabile. Ed è proprio a causa di questo fattore che i valori massimo e minimo assumibile da una variabile di tipo intero sono rispettivamente -32768 e 32767: infatti, nei tipi con segno (*signed*), si suddivide a 'metà' il valore massimo teoricamente assumibile dalla variabile, con la conseguenza che metà dei valori assumibili diventa negativo, e metà positivo.

Alcuni degli altri tipi di variabile trattabili da Arduino sono: 

* `bool`, che può assumere valore `HIGH` (`1`) o `LOW` (`0`);
* `char`, che rappresenta un carattere di testo;
* `float` e `double`, che rappresentano numeri decimali a 32 e 64 bit, rispettivamente;
* `short` e `long`, che rappresentano numeri interi ad 8 e 64 bit, rispettivamente.

Esistono anche altri tipi di variabile; nella documentazione è presente l'[elenco completo](https://www.arduino.cc/reference/en/).

## Inizializzare una variabile

Finora, ci siamo limitati a *dichiarare* una variabile. Ciò significa che Arduino è a conoscenza dell'esistenza della stessa, ma ad essa, tuttavia, non abbiamo ancora assegnato alcun valore. Vediamo quindi come farlo (o, in termini informatici, *inizializzare* la variabile). Il nostro codice diventa:

    int led;            // Dichiarazione
    led = 13;           // Inizializzazione

E' interessante notare i due step in cui è diviso il codice precedente. Nel primo passo, stiamo *dichiarando*, ovvero mettiamo al corrente Arduino dell'esistenza di una variabile di tipo intero, ed il cui nome è `led`. Nel secondo passo, invece, assegnamo a questa variabile un valore, ovviamente numerico, e pari a `13`. 

Il codice precedente sembra un po' lungo, non trovate? Bene, in realtà non è strettamente necessario separare le fasi di dichiarazione ed inizializzazione della variabile. Infatti, molto spesso possono essere unite in un'unica istruzione:

    int led = 13;

## Il primissimo sketch

Adesso, proviamo a scrivere il nostro primo *sketch*. Apriamo l'IDE di Arduino, ed inseriamo le seguenti righe di codice:

    int led = 13;

    void setup() {

    }

Abbiamo fatto due cose: la prima, abbastanza semplice da individuare, è l'istruzione di dichiarazione ed inizializzazione della variabile `led`. La seconda, invece, rappresenta una nuova nozione che andiamo ad apprendere, ovvero quella del concetto di *funzione* (e, in particolare, la funzione `setup()`). Approfondiremo questo concetto nella prossima parte.