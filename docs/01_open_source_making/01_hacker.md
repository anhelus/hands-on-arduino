# il software libero

# l'hardware libero

# il making

# Il software libero

TODO: vanno concentrati in un'unica lezione, troppo prolisso

Iniziamo il nostro viaggio alla scoperta di Arduino parlando del concetto "sottostante" all'intero fenomeno, ovvero quello dell'_open source_.

Per farlo, partiremo dagli anni '60, quando un gruppo di ricercatori e studenti del MIT iniviava l'esplorazione delle sconfinate lande del sapere virtuale, creando quella che negli anni successivi sarebbe stata conosciuta come _cultura hacker_.

## La cultura hacker

Il termine _hacker_ deriva da una parola del diciassettesimo secolo, indicante un lavoratore che, in maniera più o meno vigorosa, curava il terreno mediante la sua zappa. Ovviamente, però, non è questo il concetto che abbiamo in mente quando pensiamo ad un hacker!

Dalla fine della seconda guerra mondiale in poi, e specialmente a seguito della creazione dei primi computer ENIAC, alcuni dei primi programmatori, che erano principalmente matematici, fisici o ingegneri, iniziarono a coltivare una vera e propria passione per la loro nascente professione.

C'era una crescente ricerca di uno stile di programmazione _elegante_ e _ricercato_: questa ricerca portò, verso l'inizio degli anni '60, ad utilizzare il termine hacker per descrivere dei programmatori particolarmente abili, che godevano della _sfida_ legata al ricercare modi innovativi per aggirare i limiti dei sistemi dell'epoca, provando contestualmente a migliorare le loro abilità.

All'epoca, però, i meccanismi di comunicazione non erano paragonabili a quelli odierni. Ciò comportò la nascita di diverse "subculture" hacker, indipendenti e parallele, spesso non consapevoli le une delle altre. Tutte però avevano diverse caratteristiche in comune, tra cui le più notevoli erano sicuramente la condivisione della conoscenza, una (non troppo velata) ostilità verso la segretezza e l'autorità, ed una certa predisposizione all'humor.

Le diverse subculture hacker nascevano normalmente negli ambienti accademici: l'AI Lab del MIT, la University of California, Berkeley e la Carnegie Mellon University erano rinomante per essere dei terreni fertili per gli hacker.

Il primo "contatto" tra le diverse culture avvenne con l'avvento di ARPANET, nel 1969. In particolare, il focus venne portato verso un PDP-10 del MIT, che non implementava il software fornito da DEC, ma un sistema operativo interamente scritto dagli hacker al MIT, ovvero ITS (acronimo che sta per _Incompatible Timesharing System_). Il fatto che i ragazzi del MIT avessero creato il loro sistema operativo dà una buona idea dell'attitudine degli hacker: non si accontentano delle tecniche standard, ma vogliono che lavorino come dicono loro.

ARPANET fece in modo che le mailing list elettroniche venissero usate per sviluppare la cooperazione tra gruppi di interesse remoti, ed usata anche per scopi sociali e ricreativi. La DARPA, che aveva sviluppato ARPANET, chiudeva un occhio su tutte queste attività, considerate "non autorizzate": capiva che l'overhead extra da sopportare era un piccolo prezzo da pagare per attirare un'intera generazione di menti brillante nell'ambito del computing.

Altre influenze importanti furono gli sviluppi apportati da XEROX PARC, ovvero il Palo Alto Research Center di XEROX, che tra l'inizio degli anni '70 e la metà degli anni '80 portò un gran volume di innovazioni hardware e software. Ciò che usiamo normalmente al giorno d'oggi, inclusi mouse, interfacce grafiche e stampanti laser, oltre che le LAN, vennero inventate dal PARC.

Importantissima fu anche l'ascesa del movimento del software libero, di cui parleremo estesamente più avanti: la community dei diversi gruppi hacker si unì, raggiungendo la "massa critica" che le permetteva di incoraggiare la diffusione dell'etica _hacker_, che portò all'adozione di uno slang comune ed una visione condivisa della società, in modo simile a quanto avviene per altri gruppi e comunità, ma in maniera sicuramente più informale.

### I testi cardine

La cultura hacker ha diversi testi "cardine", che ne rappresentano i punti fondamentali.

#### Jargon File

Il [Jargon File](https://en.wikipedia.org/wiki/Jargon_File), la cui prima versione venne redatta da Raphael Finkel nel 1975, è una sorta di "glossario" che racchiude i più importanti termini usati nello slang dei programmatori. Originariamente, era una semplice collezione di termini da culture "tecniche", come l'AI Lab del MIT, il SAIL (Stanford AI Lab) ed altri facenti parte delle community ARPANET AI/LISP/PDP-10. Il Jargon File venne poi rivisto nel 1983, e pubblicato come _The Hacker's Dictionary_ da Guy Steele, e poi nel 1991, nel _The New Hacker's Dictionary_. Il file venne comunque concepito negli anni '50 dal Tech Model Railroad Club del MIT.

#### CatB

[CatB](https://en.wikipedia.org/wiki/The_Cathedral_and_the_Bazaar) (il cui nome completo è in realtà _The Cathedral and the Bazaar: Musings on Linux and Open Source by an Accidental Revolutionary_) è un saggio pubblicato da Eric Raymond nel 1997, e focalizzato sul contrasto tra due diversi modelli di sviluppo del software libero: il primo è il modello _Cathedral_, nel quale il codice sorgente è disponibile ad ogni release del software, ma quello _tra_ le release (ovvero il codice di sviluppo) è disponibile soltanto agli sviluppatori, mentre il secondo è il modello _Bazaar_, nel quale il codice è sviluppato in Internet e visibile dal pubblico. Esempi notevoli di codice _Cathedral_ sono GCC ed Emacs, mentre l'esempio maggiormente conosciuto di software _Bazaar_ è Linux.

Nel saggio, Raymond afferma che il modello migliore è il secondo: tutto è sotto gli occhi di tutti, il che facilita la scoperta e correzione di bug e comportamenti inattesi; ed è in realtà questo il modello che è andato affermandosi al giorno d'oggi (pensiamo al funzionamento di repository come GitHub).

#### Il GNU Manifesto

Il manfiesto GNU venne scritto da Stallman per aumentare il supporto al progetto GNU. Nel GNU Manifesto, Stallman elencava quattro principi fondamentali per gli utenti di un software: la _libertà di eseguire un programma per qualunque scopo_, _libertà di studiare i meccanismi alla base del programma e modificarli_, libertà di redistribuirne copie, e libertà di migliorare e cambiare versioni modificate per l'uso pubblico. Per implementare queste libertà, gli utenti avevano bisogno di accesso completo al codice. Per assicurarsi che il codice rimanesse libero ed a disposizione del pubblico, Stallman creò la GNU General Public License (GPL), che permetteva ai software ed alle generazioni successive di codice derivate da questo di rimanere libere per l'uso pubblico.

Parleremo più estesamente del manifesto GNU nella sezione dedicata a Richard Stallman.
