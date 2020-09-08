L'acronimo *IDE* sta per *Integrated Development Environment*, e rappresenta, in informatica, il vero e proprio *ambiente di sviluppo*.

Una IDE offre, in genere, un certo numero di funzionalità che possono semplificare la vita allo sviluppatore, velocizzando i tempi di sviluppo di un programma. Alcuni esempi di questi tool sono:

* *syntax highlighting*: le IDE offrono dei tool che permettono di evidenziare la sintassi, differenziando tra keyword del linguaggio, tipi, nomi delle variabili, e così via;
* *compilazione semplificata*: molte IDE permettono di compilare il nostro codice sorgente tramite la semplice pressione di un tasto, eliminando quinid la necessità di ricorrere a strumenti da riga di comando molto spesso complessi e di difficile configurazione;
* *tool per test e debug*: le IDE offrono solitamente degli strumenti in grado di eseguire inmodo semplice l'intera suite di test per il nostro programma, o di aiutarci nel debug riga per riga dello stesso;
* *integrazione per il versioning* le IDE possono offrire dei tool per la gestione semplificata dei sistemi di VCS (Version Control Systems) come Git.

## La IDE di Arduino

Tra i diversi tool disponibili per Arduino, uno tra i più importanti, se non forse *il* più importante, è per l'appunto la [IDE di Arduino](https://www.arduino.cc/en/Main/Software), Questo strumento, rilasciato anch'esso sotto licenza open source, è lo strumento principale per lo sviluppo dei programmi (*sketch*) che saranno eseguiti sulla baord.

Esistono diverse versioni dell'IDE. La prima è quella classica, scaricabile a questo indirizzo, mentre la seconda è l'editor web, raggiungibile a [questo indirizzo](https://create.arduino.cc/editor).

La IDE offre diversi tool, tra cui i più importanti sono il Gestore delle Schede ed il Gestore delle Librerie.

## Gestore delle schede

Abbiamo già visto come quella di Arduino sia in realtà una *famiglia* di schede. Ciò comporta che, per definizione, esistano delle differenze tra diverse schede: pensiamo ad esempio alle schede della famiglia Arduino Uno, che non supportano le uscite analogiche, che invece sono supportate dalle schede della famiglia di Arduino Due.

Altro fattore influente è la natura *open* di Arduino: le schematiche sono liberamente disponibili, per cui nel tempo è sorto un ecosistema di *cloni*, di qualità più o meno elevata, alle volte non compatibili con la scheda originaria a causa di differenze in termini di microcontrollore.

Le differenze tra le varie famiglie implicano come diretta conseguenza l'impossibilità di utilizzare un unico driver per tutte le schede; di conseguenza, è necessaria una maniera per gestire le differenti configurazioni.

Per far questo è stato introdotto il *gestore delle schede*: questo permette, mediante un semplice wizard, di gestire diverse schede, selezionandone la famiglia, ed andando a configurarne ciascuna a seconda dei casi.

## Gestore delle librerie

Arduino è fortemente incentrato sull'open source. Questo significa che la community ha, nel tempo, sviluppato diverse *librerie*, ovvero collezioni di classi, metodi e variabili, per la gestione della maggior parte dei casi possibili.

Esistono librerie per la gestione, ad esempio, di diverse classi di sensori di temperatura; librerie per la gestione dei servomotori, librerie per l'utilizzo di server REST, e via dicendo.

Affidarsi a queste librerie è molto spesso meglio che scrivere da sè le funzionalità: questo, infatti, ci permette di procedere più speditamente ad implementare le funzionalità che effettivamente ci servono, oltre che di affidarci ad una base 'condivisa' da diversi programmatori (alcuni dei quali con molta esperienza).

Per semplificarci la vita, Arduino ci offre un apposito gestore, che può essere utilizzato sia per integrare una preselezione di librerie curata direttamente dalla community, sia per integrare qualsiasi tipo di libreria fornita in un formato compatibile (che, solitamente, è un file di tipo `.zip`).

## Installazione e primo avvio

TODO: ILLUSTRARE LA PROCEDURA DI INSTALLAZIONE E DI PRIMO AVVIO DELLA IDE
