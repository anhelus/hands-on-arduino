## La storia di Linux

Dopo che AT&T cessò il supporto al progetto Multics (TROVARE REF), il sistema operativo Unix venne concepito ed implementato da Ken Thompson e Dennis Ritchie, entrambi membri degli AT&T Bell Laboratories, nel 1969, per poi essere rilasciato durante il 1970. Successivamente, lo riscrissero in un nuovo linguaggio di programmazione, ovvero il C, per renderlo portabile. La disponibilità e portabilità di Unix lo rese ampiamente adottato, copiato e modificato da istituzioni accademiche e business.

Nel 1977, fu sviluppata la Berkeley Software Distribution (BSD) dal Computer System Research Group (CSRG) di Berkeley, basata sulla sesta edizione di Unix da AT&T. Dal momento che BSD conteneva codice Unix che AT&T possedeva, AT&T lanciò una causa legale nei primi anni '90 contro l'università. Questo limitò fortemente lo sviluppo e l'adozione di BSD.

Nel 1983, Richard Stallman creò il progetto GNU con l'obiettivo di creare un sistema operativo libero UNiX-like. Come parte di questo lavoro, scrisse la GNU General Public License (GPL). All'inizio degli anni '90, c'era abbastanza software disponibile per creare un sistema operativo completo.

Nel 1985, Intel rilasciò il processore 80386, ilprimo microprocessore x86 con un instruction set a 32 bit ed una memory management unit con meccanismi di paging (TODO: valurare rilevanza)

Nel 1986, Maurice Bach deglki AT&T Bell Labs pubblicò *The Design of the UNIX Operating System*. Questa descrizione copriva principalemnte il kernel System V Release 2, con alcune nuove feature prese dalla Release 3 e dalla BSD.

Nel 1987, MINIX, un sistema Unix-like pensato per l'utilizzo accademico, venne rilasciato da Tanenbaum allo scopo di esemplificare i principi coperti nel suo libro *Operating Systems: Design and Implementation*. Anche se il codice sorgente per il sistema era stato reso disponibile, modifiche e redistribuzione erano vincolate. Inoltre, il design a 16 bit di MINIX non era adatto alle feature a 32 bit dell'architettura 386 di Intel. Contestualmente, però, nei primi anni '90 un sistema operativo UNIX commerciale per i PC 386 era considerato troppo costoso per gli utenti privati.

Questi fattori, uniti alla mancanza di un kernel libero ampiamente adottato, fornirono l'impeto a Linus Torvald per iniziare il suo progetto. In tal senso, disse che se uno tra GNU Hurd e 386BSD fossero stati disponibili all'epoca, probabilmente non avrebbe iniziato a scrivere Linux.

### La creazione di Linux

Nel 1991, mentre studiava informaica all'Univerità di Helsinki, Linus Torvalds iniziò un progetto che venne successivamente conosciuto come Linux kernel. Scrisse il programma specificamente per l'hardware che stava usando, ed indipendentemente dal sistema operativo, perché voleva usare le funzioni del suo nuovo PC con processore 80386. Lo sviluppo avvenne su MINIX usando il compilatore GCC, che rappresenta ancora la scelta principale usata in Linux al giorno d'oggi.

Così come Torvalds scrive nel suo libro *Just for Fun*, alla fine scrisse un kernel per un sistema operativo. Il 25 agosto 1991 annunciava questo sistema in un post sul gruppo Usenet "comp.os.minix.":

!!! quote "Il lancio di Linux"
    Hello everybody out there using minix -

    I'm doing a (free) operating system (just a hobby, won't be big and professional like gnu) for 386(486) AT clones. This has been brewing since april, and is starting to get ready. I'd like any feedback on things people like/dislike in minix, as my OS resembles it somewhat (same physical layout of the file-system (due to practical reasons) among other things).

    I've currently ported bash(1.08) and gcc(1.40), and things seem to work. This implies that I'll get something practical within a few months, and I'd like to know what features most people would want. Any suggestions are welcome, but I won't promise I'll implement them :-)

    Linus (torvalds@kruuna.helsinki.fi)

    PS. Yes - it's free of any minix code, and it has a multi-threaded fs. It is NOT portable (uses 386 task switching etc), and it probably never will support anything other than AT-harddisks, as that's all I have :-(.

    — Linus Torvalds

Secondo Torvalds, Linux iniziò a guadagnare importanza nel 1992, dopo che *X Window System* (che non è una versione arcaica di Windows, ma un sistema di gestione della grafica) venne rilasciato su Linux da Orest Zborowski, permettendo a Linux di offrire un'interfaccia grafica per la prima volta.

### Il nome

Linus Torvalds avrebbe voluto chiamare la sua invenzione *Freax*, un misto tra le parole *free*, *freak* ed *x*, quest'ultima come allusione ad Unix. Durante l'inzio del suo lavoro sul sistema, memorizzò i file sotto il nome *Freax* per circa sei mesi. Torvalds aveva già considerato il nome Linux, ma lo aveva inizialmente scartato ritenendolo troppo egoista.

Per facilitare lo sviluppo, ifile vennero messi su un server FTP di FUNET nel settembre del 1991. Ari Lemmke della *Helsinki University of Technology* che era uno degli amministratori volontari del server FTP all'epoca non pensava che Freax fosse un buon nome. Per cui, cambiò il nome del progetto a Linux sul server senza consultare Torvalds, che però successivamente acconsenti a chiamarli Linxu.

Per mostrare come la parola "Linux" dovrebbe essere pronunciata ([ˈliːnɵks]), Torvalds incluse un'audioguida all'interno del codice sorgente di Linux.

### Linux e la licenza GNU GPL

!!! quote "Linus Torvalds sulla scelta di usare la licenza GNU GPL"
    *Making Linux GPLed was definitely the best thing I ever did.*

Torvalds rilasciò inizialmente il kernel Linux sotto una licenza che aveva una restrizione riguardante le attività commerciali.

Il software da usare con il kernel doveva essere stato sviluppato come parte del progetto GNU, e rilasciato con la GNU General Public License. Laprima release dle kernel Linux, Linux 0.01, includeva il codice sorgente del Bash shell di GNU.

Nelle *Notes for linux release 0.01*, Torvalds elencava il software GNU che è richiesto epr eseguire Linux:

!!! quote
    Sadly, a kernel by itself gets you nowhere. To get a working system you need a shell, compilers, a library etc. These are separate parts and may be under a stricter (or even looser) copyright. Most of the tools used with linux are GNU software and are under the GNU copyleft. These tools aren't in the distribution - ask me (or GNU) for more info.

Nel 1992, suggerì di rilasciare il kernel sotto la GNU GPL. Annunciò per la prima volta questa decisione nelle release note della versione 0.12. Alla metà di dicembre 1992, pubblicò la versione 0.99 usando la GNU GPL. Linux e gli sviluppatori GNU lavorarono per integrare i componenti GNU con Linux e creare un sistema operativo completamente funzionante e libero.

Attorno al 2000, Torvalds chiarì che la licenza utente per il kernel Linux è esattamente la GPLv2, senza la *common "or later clause"*.

Nel 2007, dopo anni di discussione del draft, venne rilasciata la GPLv3, e Torvalds, assieme alla maggior parte degli sviluppatori del kernel, decise di adottare la nnuova licenza per il kernel.

### La controversia GNU/Linux

Il nome "Linux" venne inizialmente usato da Torvalds soltanto per il kernel. Il kernel era, comunque, spesso usato assieme ad altro software, specialmente quello legato al progetto GNU. Questo divenne rapidamente l'adozione più popolare del software GNU. Nel giugno 1994, nel GNU bulletin, Linux fu indicato come un *free UNIX clone*, ed il progetto Debian iniziò a chiamare il suo prodotto Debian GNU/Linux. Nel maggio 1996, Stallman pubblicò la versione 19.31 di Emacs, nel quale il tipo di sistema venne chiamato Lignnux invece di Linux. Questo spelling era necessario per riferirsi alla combinazione di GNU e Linux.

### Mascotte ufficiale

Torvalds annunciò nel 1996 che ci sarebbe stata una mascotte per Linux, un pinguino. Qeusto era perché quando stavano scegliendo la mascotte Torvalds disse che era stato morso da un piccolo pinguino in una visita allo zoo di Canberra in Australia. Larry Ewing fornì lo schizzo iniziale della mascotte basato su questa descrizione. Il nome invece venne suggerito da James Hughes, e pensato come un derivativo da Torvalds' UniX, e come un abbrievativo di *tuxedo*, un capo elegante con un colore simile a quello di un pinguino.

## NUovi sviluppi

### Comunità Linux

La maggior parte del lavoro su Linux è effettuato dalla community: le migliaia di programmatori nel mondo che usano Linux e mandano i miglioramenti suggeriti ai manutentori. Varie compagnie hanno anche aiutato a sviluppare non solo ill kernel, ma anche a scrivere software aggiuntivo, disribuito con Linux.

A febbraio del 2015, oltre l'80% degli sivluppatori del kernel Linux sono pagati.

Viene rilasciato sia da progetti organizzati come Debian, che da progetti connessi direttamente con altre compagnie come Fedora ed openSUSE. I membri dei risepttivi progetti si incontrano a diverse conferenze e fiere, per scambiare idee. Una delle più grandi fiere del genere è LinuxTag in Genrmania, dove si assemblano annualmente 10.000 persone per discutere Linux ed il progetto associato. (TODO: questo va tolto, citation needed)

### Open Source Development Lab e Linux Foundation

L'Open Source Develpment Lab (OSDL) fu creato nel 2000 come organizzazione indipendente noprofit il cui scopo è quello di ottimizzare Linux per usarlo in data center e nel mondo professionale. Torvals lavorava full-time per conto di OSDL, sviluppando i kernel Linux.

Nel gennaio del 2007, OSDL si unì al Free Standards Group per fondare *The Linux Foundation*, restringendo i focus rispettivi a quello di promuovere LInux come alternativa a Microsoft Windows. Nel 2015, Torvalds rimane con Linux Foundation come Fellow.

### Companies

Nonostante sia liberamente disponibile, diverse compagnie traggono profitto da Linux. Queste compagnie, molte delle quali sono membri della Linux Foudnation, investono risorse considerevoli nell'avanzamento e sviluppo di Linnux, per renderlo adatto a diverse aree applicative. Queste includono donazioni hardware per sviluppatori dei driver, donazioni in cash per chi sviluppa softawre Linux, e l'uso di programmatori Linux nella compagnia. Alcuni esempi sono Dell, IBM ed HP, che validano, usanod e vendono Linux sui loro server, e Red Hat e SUSE, che mantengono le loro distriibuzioni enterprise. Allo stesso modo Digia supporta Linux grazie allo sviluppo ed alla licenza LGPL di Qt, che rende possibile lo sviluppo di KDE, e assumendo alcuni degli sviluppatori di X e KDE.

### Ambienti desktop

KDE è stato il primo ambiente desktop avanzato (la versione 1.0 venne rilasciata nel luglio 1998), ma ci sono delle ocntroversie legate all'uso dell'allora proprietario toolkit Qt. GNOME venne sviluppato come alternativa a cauas di questioni legate alle licenze. I due usavano un diverso toolkit sottostante, e quindi progrmamazione differente, ed erano sponsorizzati da due gruppi differenti, KDE e.V. per la prima, e la GNOME Foundation la seconda.

Nell'aprile del 2007 venne stimatoche KDE aveva il 65% del emrcato, contro il 26 di GNOME. Nel gennaio del 2008, KDE 4 venne rilasciata prrematuramente cond iversi bug, portando diversi utenti verso GNOME. GNOME 3, rilasciato nell'apriel 2011, venne addirittura definito un *unholy mess* da Linsu Torvalds a causa di alcuni cambi di design controversi (TODO: approfondire)

I problemi con GNOME 3 condussero ad un fork, chiamato Cinnamon, e svilupapto direttamente dallo svilupaptore di Linux Mint chiamato Clement LeFebvre. Questo recuperava lo stile tradizionale, con alcuni miglioramenti marginali.

La fondazione Ubuntu rpogettò e rilascio nel 2011 una'ltra interfaccia utente chiamata Unity, che è radicalmente differente dall'ambiente desktop tradizionale, ed è stata criticata per diversi punti deboli ed una scarsa configurabilità. Uno dei motivi per cui venne sviluppata questa interfaccia è la versione mobile di Ubuntu, che però venne cancellata nell'aprile del 2017da Canonical assieme al progetto ubuntu Touch (TODO: approfondire) per focalizzarsi sui progetti IoT come Ubuntu Core. Nell'aprile 2018, Canonical smise di supportare Unity, ed iniziò ad usare GNOME per le release Ubunut a partire dalla 18.04.

### Linux is obsolete

Nel 1992, Tanenmaum scrisse un articolo su Usenet sul gruppo comp.os.minix con il titolo *Linux is obsolete*, che contraddistinse l'inizio di un famoso dibattito sulla struttura dell'allora recente kernel. Tra le critiche più aspre c'era quella la seguente:

* il kernel era monolitico,e  quinid "antico"
* non vi era portabilità, perché si supportava esclusivamente il processore Intel 386
* non vi era uno stretto controllo del codice sorgente da parte di qualcuno
* linux immpiegava un set di feature inutili (perché Tanenbaum era convinto che un file system multithread era semplicemente un *performance hack*)

La predizione di Tanenbaum era che Linux sarebbe diventato datato in pochi anni, e rimpiazzato da GNU Hurd (che lui considerava essere al passo coi tempi). Ovviamente, questo si rivelò non essere corretto. Linux è stato portato su tutti gli hardware principali, ed il suo modello di sviluppo aperto ha portato ad un tasso di sviluppo esemplare. In contrasto, GNU Hurd non ha ancora raggiunto il livello di stabilità che gli permetterebbe di essere usato su un server in produzione. Inoltre, il definire la linea di processori Intel 386 "strana" è stato anch'esso un errore, in quanto hanno fatto da base per tutti i processori Intel moderni.

Nel suo libro non pubblicato Samizdat, Kenneth Brown afferma che Torvalds ha copiato illegalmente codice da MINIX. Nel maggio 2004, ad ogni modo, queste affermazioni vennero confutate da Tanenbaum stesso, che affermò che nonostante MINIX avesse avuto una grossa influenza su Linux, non credeva che Torvalds avesse usato il codice.

## Collaborazione e competizione con Microsoft

Anche se Torvalds ha affermato che Microsoft si sente minacciata da Linux in passato e che questo non aveva avuto alcuna conseguenza su di lui, Microsoft e Linux ebbero numerose interazioni antagonistiche tra il 1997 ed il 2001. Questo divenne chiaro a sufficienza la prima volta nel 1998, quando il primo documento di Halloween venne portato alla luce da Eric Raymond. Questo consisteva in sostanza di un breve saggio da parte di uno sviluppatore Microsoft che elencava le minacce poste a Microsoft dal free software ed identificava le strategie necessarie a minimizzare queste minacce.

La competizione entrò in una nuova fase all'inizio del 2004, quando Microsoft pubblicò i risultati dai casi studio degli utenti che valutavano Windows contro Linux nel nome "Get the Facts" sulla loro pagina web. In base a delle ricerche di mercato sponsorizzata dalla Microsoft stessa, i casi di studio dicevano che l'uso enterprise di Linux sui server era sfavorevole a quello di Windows in termini di affidabilità, sicurezza, e costi totali.

In risposta, i distributori commerciali di Linux produssero i loro studi, survey e testimonial contro la campagna di Microsfot. La campagnia web di Novell alla fine del 2004 era chiamata "Unbending the truth", e elencava gi vantaggi così come sfatava i problemi legali di Linux. Novell si riferiva agli studi di Microsoft in molti punti. IBM pubblicò anche una serie di studi chiamati "The Linux at IBM competitive advantage" per contrastare la capmagna di Microsfot. Red Hat aveva una campagna chiamata "Truth Happens" mirata a far sì che fossero el performance del prodotto a parlare.

Nell'autunno del 2006, Novell e Microsoft annunciarono un accordo per cooperare sull'interoperabilità software e la protezione dei brevetti. Qeusto incluse un accordo a riguardo che i clienti di Microsoft e Novell non potevanno essere citati dall'altra compagnia per infrazione dei brevetti. Qeusta protezione dei brevetti era anche estesa agli sviluppatori di software non commerciale free. Quest'ultima parte venne criticata perché includeva soltanto questi ultimi (non-commercial free software developers).

Nel luglio 2009, Microsfot sottomise 22.000 linee di codice sorgente al kernel Linux sotto licenza GPLv2, che vennero poi accettate. Anche se qeusta è chiamata "mosta storica", ed è una cartina a tornasole di un miglioramento nelle attitudini di Microsoft verso Linux e l'open source, la decisione non fu proprio altruistica, ion quanto prometteva di portare ad un vantaggio competitivo per Microsoft e evitò azioni legali contro Microsoft. Microsoft fu in realtà spinta a fare il contributio quando il principal enigneer di Vyatta e il contribuotre di Linux Stephen Hemminger scoprirono che Micorsoft aveva incorporato un driver di rete Hyper-V, con componenti GPL, linkato staticamente a binari closed-source, contravvenendo alla licenza GPL. Microsoft contribuì ai driver per rettificare la vioalzione di licenza, anche se la compagnia tentò di mostrarlo come un atto di favore, piuttosto che uno per evitare lezioni legali. Nel passato Microsoft aveva chiamato Linux "cancro" e "comunista".

Nel 2011, però, Microsoft era diventata il 17esimo contributiore al kernel Linux, per poi uscrire dagli sponsor negli anni successivi.

Il progetto Windows Azure, poi chiamato Microsoft Azure, venne annunciato nel 2008. Questo incorpora Linux compe parte della suite di applicazioni software server-side. Nel 2018, SUSE creò un kernel Linux psecificamente dedicato al cloud computing, sotto il cappello del progetto Azure. Parlando del port del kernel, un rappresentnatnte di Microsoft afferma che "The new Azure-tuned kernel allows those customers to quickly take advantage of new Azure services such as Accelerated Networking with SR-IOV."

Negli ultimi anni, Torvalds ha espresso un attitudine neutrale ed a volte aminchevole verso Microsfot, seguendo l'abbraccio dell'open source softwarre da parte di questa e la collaborazione con la community Linux. In un'intervista a ZDNet Torvalds afferma che:

"The whole anti-Microsoft thing was sometimes funny as a joke, but not really. Today, they're actually much friendlier. I talk to Microsoft engineers at various conferences, and I feel like, yes, they have changed, and the engineers are happy. And they're like really happy working on Linux. So I completely dismissed all the anti-Microsoft stuff."[52]

## Trademark

Nel 1994 e nel 1995, diverse persone da diversi paesi tentarono di registrare il nome Linux come marchio registrato, per lanciare diverse richeiste di royalty a diverse compagnie Linux. Linus Trovalds aiutò queste compatnie, e venne lui concesso il trademark del nome, che venne trasferito a Linux International. La protezione del marchio venne poi gestita da una fondazione dedicata, il Linux Mark Institute. Nel 2000, Torvalds specificò le regole base per l'assegnazione delle licenze. Questo significava che chiunque offrrisse un prodotto o servizio con il nome Linux doveva averne una lincenza, che poteva essere ottenuta mediante un unico acquisto.

Nel giugno del 2005, una nuova controversia si sivluppo a riguardo dell'uso di royalty generate dal trademark Linux. Il Linux Mark Institute, che rappresenta i diritti di Linus Torvalds, annunciò un aumento dei costi di licenza da 500 a 5000 dollari. Questo passo venne giustificato come necessario per coprire il costo della trademark protection.

La community non fu contenta, per cui Linus Rovalds stesso fece un annuncio il 21 agosto 2005, per chiarire la confusione, via e-mail:

!!! quote "Linus Torvalds sull'aumento del costo della licenza Linux"
    [...] And let’s repeat: somebody who doesn’t want to protect that name would never do this. You can call anything "MyLinux", but the downside is that you may have somebody else who did protect himself come along and send you a cease-and-desist letter. Or, if the name ends up showing up in a trademark search that LMI needs to do every once in a while just to protect the trademark (another legal requirement for trademarks), LMI itself might have to send you a cease-and-desist-or-sublicense it letter.

    At which point you either rename it to something else, or you sublicense it. See? It’s all about whether you need the protection or not, not about whether LMI wants the money or not.

    [...] Finally, just to make it clear: not only do I not get a cent of the trademark money, but even LMI (who actually administers the mark) has so far historically always lost money on it. That’s not a way to sustain a trademark, so they’re trying to at least become self-sufficient, but so far I can tell that lawyers fees to give that protection that commercial companies want have been higher than the license fees. Even pro bono lawyers charge for the time of their costs and paralegals etc.

    — Linus Torvalds[58]

Da quel momento, però, il Linux Mark Institute ha iniziato ad offrire una sottolicenza perpetua e valevole nel mondo.
