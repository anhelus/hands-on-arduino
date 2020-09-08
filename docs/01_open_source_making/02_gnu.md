# Gnu (is Not Unix)

## Richard Stallman: nascita di un mito

Uno dei più importanti contributi alla definizione della cultura dell'open source si deve alla carismatica figura di Richard Stallman, che rappresenta in tutto e per tutto l'archetipo dell'hacker.

Stallman era un ragazzo prodigio: all'età di 17 anni frequentava il suo primo anno di università ad Harvard, mostrando le sue qualità in corsi come il famigerato *Math 55*, noto per "condensare" quattro anni di insegnamenti in due soli semestri, e considerato come uno dei corsi di matematica più difficili al mondo (se non [il più difficile](https://www.quora.com/What-is-it-like-to-take-Harvards-Math-55-purported-the-most-difficult-undergraduate-math-class-in-the-country-teaching-four-years-of-math-in-two-semesters)).

Nel 1971, a 18 anni, iniziò a frequentare il MIT, specializzandosi nell'arte della programmazione ed iniziando a frequentare la comunità hacker dell'Istituto di Boston, dove venne conosciuto con il (non troppo originale) nickname di RMS. In seguito, Stallman iniziò a lavorare come ricercatore all'AI Lab, occupandosi di tematiche prevalentemente legate all'intelligenza artificiale e contribuendo, assieme a Gerry Sussman, alla definizione di un [famoso approccio al ragionamento automatico](https://www.sciencedirect.com/science/article/abs/pii/0004370277900297), ancora molto citato al giorno d'oggi.

## La deriva della cultura hacker

### L'alba del software proprietario

Stallman era anche noto per la sua forte ostilità alle restrizioni che venivano poste all'accesso alla conoscenza: Richard voleva che i computer del MIT fossero sempre disponibili a chiunque, ed arrivò perfino ad architettare un sistema per decifrare le password degli utenti, i quali venivano poi avvertiti da Stallman, che gli invitava contestualmente a sostituirle con stringhe vuote, permettendo quindi l'accesso a chiunque al computer; purtroppo, il suo avviso venne seguito soltanto da un quinto degli utenti del laboratorio.

Questo atteggiamento lo rendeva una sorta di "paladino" di quelli che abbiamo già visto fossero i "principi" alla base della cultura hacker che, verso la fine degli anni '70, iniziava a frammentarsi sotto i colpi di un ben noto colpevole: il *profitto*. La maggior parte dei produttori di computer, infatti, aveva smesso di distribuire il codice sorgente dei propri software, principalmente per evitare che venissero copiati sui computer della concorrenza. Si iniziò inoltre a diffondere l'uso di licenze particolarmente restrittive, allo scopo di proebire, o quantomeno limitare, la copia e distribuzione del software proprietario, che stava pian piano diventando la norma.

Stallman prese ferocemente posizione contro questa tendenza, arrivando a definire l'utilizzo delle cosiddette *time-bombs* (ovvero delle funzioni che, in base al tempo di utilizzo, erano in grado di disattivare il software, esattamente come accade per i free trial odierni) un ["crimine contro l'umanità"](https://archive.org/details/freeasinfreedomr00will). Ovviamente, come chiarì egli stesso in un'intervista del 2008, il crimine non era ricevere un corrispettivo monetario per una prestazione, ma il bloccare l'accesso ad un software ed alla conoscenza derivante.

### L'addio al MIT

#### L'affaire Xerox

Nel 1980, Stallman si vide revocare, assieme ad altri membri dell'AI Lab, l'accesso al sorgente del software di una stampante laser Xerox 9700 appena acquistata dal laboratorio. Il problema era decisamente serio: la stampante era collocata in un ambiente diverso da quello dove si trovavano i suoi utenti, che quindi non potevano sapere se le loro stampe fossero state completate, o se si fosse verificato qualche problema. Per ovviarvi, il software della precedente stampante era stato modificato da Stallman, in maniera che fossero inviati degli appositi messaggi agli utenti indicanti il termine di una stampa o l'insorgenza di problemi più o meno seri. Ciò non era però possibile con la nuova stampante, in quanto il codice non era disponibile. Questo disagio contribuì a rafforzare in Stallman l'idea della necessità dell'accesso al codice sorgente del software utilizzato.

#### Lisp Machines Inc. e Symbolics

Nello stesso periodo, i membri dell'AI Lab crearono la prima Lisp Machine, un computer general-purpose progettato per eseguire in maniera efficiente programmi basati su Lisp. 

Nello stesso periodo, un altro membro dell'AI Lab, Richard Greenblatt, aveva fondato la *Lisp Machine Inc.*, per commercializzare le idee ed i prototipi che lui e Tom Knight avevano realizzato in laboratorio. Greenblatt non credeva negli investimenti esterni: pensava infatti che i proventi dell'attività commerciale dovessero essere reinvestiti in ricerca e sviluppo, permettendo una crescita costante dell'azienda; di contro, altri membri dell'AI Lab pensavano che affidarsi ai fondi provenienti da società esterne fosse un approccio più sicuro e, non riuscendo a raggiungere un accordo con Greenblatt, decisero di fondare *Symbolics*. Symbolics riuscì a recrutare la maggior parte dei membri dell'AI Lab, facendo anche in modo che Greenblatt non potesse più citare in alcun modo il MIT. Entrambe le compagnie producevano software proprietario: tuttavia, Stallman si schierò contro Symbolics, dato che LMI non aveva tentato di "colpire"


Richard Greenblatt, un altro hacker all'AI Lab, aveva fondato la società Lisp Machines Inc. per mettere sul mercato le macchine Lisp, che lui e Tom Knight avevano progettato in laboratorio. Greenblatt respingeva investimenti esterni, credendo che il processo di costruzione e vendita di alcune macchine potesse essere reivestito con profitto nella crescita della compagnia. Di contro, gli altri hacker pensavano che l'approccio basato sugli investitori fosse migliore. Dato che on si riusciva a raggiungere un accordo, gli altri hacker fondarono Symbolics, con l'aiuto di Russ Noftsker, un amministratore dell'AI Lab. Symbolics recrutò la maggiro parte degli hacker rimanenti, incluso Bill Gosper, che quindi lasciò l'API Lab. Symbolics forzò anche Greenblatt a smettere di citare le policy del MIT. Anche se entrambe le compagnie fornivano software proprietario, Stallman credeva che LMI, a differenza di Symbolic, aveva provato ad evitare di "colpire" la comunità del lab. Per due anni, dal 1982 fino alla fine del 1983, Stallman lavorò da solo per clonare l'output dei programmatori di Symbolics, con l'obiettivo di prevenire a questi di ottenere un monopolio sui computer del laboratorio.

Uno degli argomenti principali di Stallman era che gli utilizzatori del software dovrebbero avere la libertà di condividerlo con i loro vicini ed essere in grado di studiare e fare cambi al softawre che usano, affermava inoltre che i venditori di software compivano atti antisociali e non etici. La frase *software wants to be free* è spesso attribuita non correttaemtne a lui, e Stallman afferma che questo sia un'interpretazione non buona della sua filosofia. Uno dei suoi punti di vista era che la libertà è vitale per la libertà degli utenti e della società come valore morale, e non solamente per ragioni pragmatiche come la possiblità di sviluppare software tecnicamente superiore. Eric S. Rayomnd, uno dei creatori del movimento open-source, diceva però che gli argomenti morali, piuttosto che quelli pragmatici, alienano potenziali alleati e colpiscono il fine di rimuovere la secretezza nel codice.

Nel febbraio 1984, Stallman lasciò il suo lavoro al MIT per lavorare a tempo pieno sul progetto GNU, che aveva annunciato nel settembre del 1983. Da quel momento, rimane affiliato con il mIT come visiting scientist non pagato al Computer Science and Artificial Intelligence Laboratory. Fino al '98, aveva mantenuto un ufficio al MIT.

### Il progetto GNU

### Origini

Richard Stallman annunciò il suo intento di iniziare a lavorare sul progetto GNU in un messaggio Usenet nel settembre del 1983, che è possibile ritrovare [qui](https://www.gnu.org/gnu/initial-announcement.en.html).

Nel messaggio, Stallman annunciava la sua volontà di creare il progetto GNU (Gnu's Not Unix), e renderlo disponibile a chiunque fosse in grado di utilizzarlo:

!!! quote "Richard Stallman sul progetto GNU:"
    *Starting this Thanksgiving, I am going to write a complete Unix-compatible software system called GNU (for Gnu's Not Unix), and give it away free to everyone who can use it.*

Richard indicava anche il motivo alla base della creazione del progetto:

!!! quote "Il perché del progetto GNU:"
    *I consider that the golden rule requires that if I like a program I must share it with other people who like it. [...]
    I have decided to put together a sufficient body of free software so that I will be able to get along without any software that is not free.*

Quando GNU venne iniziato, aveva un editor testuale Emacs per Lisp per scrivere comandi, un debugger di codice sorgente, un parser generator compatibile con yacc, ed un linker. Il sistema GNU richiedeva che il compilatore C ed i tool che venivano utilizzati fossero liberi, per cui anche questi furono sviluppati. Per giugno 1987, il progetto aveva accumulato e sviluppato un assembler open source, quasi terminato un compilatore C (GCC), un editor (GNU Emacs) e diverse utility (come ls, grep, awk, make ed ld). Era anche presente un kernel iniziale, che però aveva bisogno di ulteriori aggiornamenti.

Una volta che il kernel ed il compilatore furono terminati, GNU fu in grado di essere usata per lo sviluppo software. L'obiettivo principale era creare molte altre applicazioni simili al sistema Unix. GNU era in grado di eseguire programmi Unix, ma non era identica a questo. Incorporava dei nomi dei file più lunghi, numeri di versione dei file, ed un file system a prova di crash. Il manifesto GNU venne scritto per ottenere supporto e partecipazione esterna al progetto. I programmatori furono incoraggiati a prendere parte ad ogni aspetto del progetto che li interessava. Le persone potevano donare fondi, parti di computer, o anche il loro tempo per scrivere codice e programmi per il progetto.

Le origini e lo sviluppo della maggior parte degli aspetti del progetto GNU (e del free software in generale) è possibile ritrovarli nell'help di Emacs.

C-h g

## Il manifesto GNU






# Free Software Foundation


## La Free Software Foundation (FSF)

La *Free Software Foundation* (FSF) venne fondata da Richard Stallman il 4 ottobre del 1985 come supporto al *free software movement*, il quale promuoveva come abbiamo già visto la libertà universale di studiare, distribuire, creare e modificare software, possibilmente distribuito secondo termini *copyleft* (anche detti *share-alike*), così come definiti con la GNU General Public License. La FSF venne creata a Boston, dove è tuttora situata.

Dalla sua fondazione fino alla metà degli anni '90, i fondi della FSF vennero usati principalmente per sviluppatori software che scrivessero software libero per il progetto GNU. Dal 1990, gli impiegati della fondazione ed i volontari hanno lavorato per lo più a parti legali e strutturali per il free software movement e la free software community.

La *Free Software Foundation* (FSF) venne fondata nel 1985 come corporazione no-profit che supporta lo sviluppo di software *libero*. Ha permesso di continuare i progetti GNU esistenti, così come la vendita di materiale istruttivo, ed ha impiegato gli sviluppatori del software libero. Da quiel momento, ha continuato  le sue attività, così come pubblicizzare il software libero. La FSF è anche lo steward di diverse licenze per il software libero, il che significa che le pubblica ed ha la possibilità di revisionarle se necessario.

La FSF detiene i diritti di diverse parti dei sistemi GNU, come il GCC. Come detentore dei diritti, ha l'autorità di forzare i requisiti di copyleft della GNU General Public License (GPL), quando accadono delle violazioni su questo software.

Dal 1991 al 2001, la GPL è stata fatta rispsettare in maniera informarle, normalmente da Stallman. Nell'interesse di promuovere il copyleft, ad ogni modo, Harald Welte lanciò nel 2004 il sito gpl-violations.org.

Nel tardo 2001, il direttore esecuitov della FSF, Bradley M. Kuhn, assieme a Moglen, Daviud Turner e Peter Brown, formalizzarono questi sforzi nella creazione del *GPL Compliance Labs*. Dal 2002 al 2004, tutte le cause di GPL enforcement di alto profilo, come quelle contro Linksys ed OpenTV, divennero più frequenti.

Il GPL enforcement e le campagne educative sul rispetto della GPL fu uno degli sforzi maggiori durente questo periodo.

Nel marzo del 2003, la SCO fece causa contro IBM, dicendo che i contributi ad IBM a diversi software liberi, inclusi alcuni del progetto GNU, violavano i diritti di SCO. FSF venne chiamata in causa a fine 2003, il che comportò un sostanziale sforzo per rispondere alla causa, con conseguente impatto negativo sull'adozione e promozione del software libero.

Dal 2003 al 2005, la FSF ha tenuto seminari legali per spiegare il GPL e la normativa che lo riguardava. Normalmente erano tenuti da Bradley M. Kuhn e Daniel Ravicher, questi seminari erano il promo sforzo a dare un'educazione formale legale sulla GPL. 

Nel 2007, la FSF pubblicò la terza versione della GNU GPL dopo significative pressioni esterne.

Nel dicembre 2008, la FSF ha lanciato una causa legale contro Cisco per l'uso di componenti GPL-licensed con i prodotti Linksys. Cisco è stato notificato del problema di licenze nel 2003, ma ripetuttamente ignorò gli avvisi. nel maggio 2009, la FSF lasciò la causa quando Cisco accettò di fare una donazione monetaria ad FSF e defini un Free Software DIrector per condurre review continue delle pratiche di compliance della compagnia alla licenza.

## Free Software Definition

La definizione di Free Software venne pubblicata dalla FSF nel febbraio del 1986, ed ha due punti:

!!! quote
    "The word "free" in our name does not refer to price; it refers to freedom. First, the freedom to copy a program and redistribute it to your neighbors, so that they can use it as well as you. Second, the freedom to change a program, so that you can control it instead of it controlling you; for this, the source code must be made available to you."

Nel 1996, quando venne lanciato il sito gnu.org, il free softwre venne definito avere *three levels of freedom* aggiungendo una menzione esplicita alla libertà di sfgudiare il software (che può essere letta nella definizione originaria come parte della libertà di cambiare il programma). Stallman successivamente evitò la parola "livelli", dicendo che si ha bisogno soltanto di tutta liberta, per cui non va bene pensarci in termini di livelli.

Infine, venne aggiunta un'altra libertà, per indicare esplicitamente che l'utente deve essere in grado di eseguire il programma. Le libertà esistenti erano già numerate dalla uno alla tre, ma questa viene prima delle altre, ed è chiamata "zero". La definizione moderna ha quindi quattro definizioni:

* The freedom to run the program as you wish, for any purpose (freedom 0).
* The freedom to study how the program works, and change it so it does your computing as you wish (freedom 1). Access to the source code is a precondition for this.
* The freedom to redistribute copies so you can help your neighbor (freedom 2).
* The freedom to distribute copies of your modified versions to others (freedom 3). By doing this you can give the whole community a chance to benefit from your changes. Access to the source code is a precondition for this.

La prima e la terza libertà richiedono il sorgente, perché studiare e modificare il software senza il sorgente è molto poco pratico (per usare un eufemismo).

### Progetti ad alta priorità

La FSF manitene una lsita di *progetti ad alta priorità*, dei quali la Fondazione afferma che vi sia un bisogno vitale che la free software community si prenda carico. La FSF considera questi progetti importanti perché gli utenti sono continuamente spinti ad usare software non libero, perché non vi è un adeguato rimpiazzo libero.

Le task ad alta priorità attuale sono il reverse enginerring di firmware proprietario; il revesible debugging in GNU Debugger, lo sviluppo di software automatico per trascrizione e video editing, Coreboot, driver per router di rete e  rimpiazzi per Skyupe, Google Earth, OpenDWG, BitTorrent Sync ed Oracle Forms.

Alcuni di quelli del passato riguardavano GNU Classpath, il GNU Compiler per Java, e GNOME.

Lo sforzo è stato criticato da Michael Larabel per non istigare lo sviluppo attivo o per essere lenti nello sviluppo, anche dopo che certi progetti sono stati aggiunti alla lista.

### Critiche

#### posizione sul DRM

Linus Torvalds ha criticatoi la FSF per usare GPLv3 come arma nella lotta al DRM. Torvals nota che il problema della DRM e quello delle licenze dovrebbero essere separati.

#### Defective by Desiugn

Nel giungo 2919 Joe Brockmeier, un giornalista al Linux Magazine, criticò la campagna Defective by Design della FSF come "negativa " ed infantile e non adeguata per dare agli utenti alternative credibili al softgware propreiatario. La FSF rispose a queste critiche dicendo che "that there is a fundamental difference between speaking out against policies or actions and smear campaigns", e che "that if one is taking an ethical position, it is justified, and often necessary, to not only speak about the benefits of freedom but against acts of dispossession and disenfranchisement."[63]

#### GNU LibreDWG license controversy

Nel 2009, un aggiornamento di LibDWG/LibreDWG alla versione 3 della GPL ha reso impossibile per i progetti LibreCAD e FreeCad di usare la LibreDWG legalmente. Molti altri si aggiunsero al coro, come Assimp e Blender. Alcuni selezionariono che la scelta di una licenza con una compatibilità più alta, come MIT, BSD o LGPL 2.1. Questa richiesta è stata respinta nel 2012.
