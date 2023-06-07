// [number of languages][number of texts][max. length of text]

const char myLanguage[6][46][100] = {
  { "English",												// English
    "Rotary direction changed",
    "Please release button",
    "Screen flipped",
    "Calibrate analog meter",
    "Release button when ready",
    "encoder set to optical",
    "encoder set to standard",
    "FM/AM receiver",
    "Tuner: !None!",
    "Volume:",
    "Converter:",
    "Low band edge:",
    "High band edge:",
    "RF Level offset:",
    "Stereo threshold:",
    "High Cut corner:",
    "Highcut threshold:",
    "Low level threshold:",
    "Contrast:",
    "Set volume",
    "Set converter offset",
    "Set low band edge",
    "Set high band edge",
    "Set level offset",
    "Set Stereo sep. threshold",
    "Set high cut corner frequency",
    "Set High cut threshold",
    "Set low level threshold",
    "Set Display brightness",
    "Off",
    "Screen is muted!",
    "To unmute uncheck RF+ box",
    "OFF",
    "SCANNING...",
    "Tuner not detected",
    "Tuner version set: v",
    "Please restart tuner",
    "Show RDS errors",
    "Language",
    "Choose language",
    "PRESS MODE TO EXIT AND STORE",
	"On",
	"Softmute FM",
	"Softmute AM",
	"Beep at band edge"
  },
  
  { "Nederlands",											// Dutch
    "Rotary richting aangepast",
    "Laat aub de knop los",
    "Scherm gedraaid",
    "Kalibratie analoge meter",
    "Laat knop los indien gereed",
    "encoder ingesteld als optisch",
    "encoder ingesteld als standaard",
    "FM/AM ontvanger",
    "Tuner: !Geen!",
    "Volume:",
    "Converter:",
    "Lage bandgrens:",
    "Hoge bandgrens:",
    "RF niveau afwijking:",
    "Stereo grens:",
    "Hoge tonen afval:",
    "Hoog afval grens:",
    "Laag signaal grens:",
    "Helderheid:",
    "Audio volume",
    "Converter offset",
    "Band ondergrens",
    "Band bovengrens",
    "Signaalafwijking",
    "Stereo signaalgrens",
    "Hoge tonen afval frequentie",
    "Hoge tonen afval signaalniveau",
    "Laag signaalgrens",
    "Stel helderheid in",
    "Uit",
    "Scherm is bevroren!",
    "Schakel RF+ uit om weer te activeren",
    "UIT",
    "ZOEKEN...",
    "Tuner niet herkend!",
    "Tuner ingesteld: v",
    "Herstart de tuner",
    "Toon RDS fouten",
    "Taal",
    "Kies taal",
    "DRUK OP MODE OM AF TE SLUITEN",
	"Aan",
	"Softmute FM",
	"Softmute AM",
	"Piep op bandeinde"
  },
  
  { "Polski", 												// Polish
   "Kierunek obrotu zmieniony", 
   "Zwolnij przycisk", 
   "Obrocono ekran", 
   "Kalibracja analogowego miernika", 
   "Zwolnij przycisk gdy gotowe", 
   "wybrano enkoder optyczny", 
   "wybrano standardowy enkoder", 
   "Odbiornik FM/AM", 
   "Tuner: !Brak!", 
   "Glosnosc:", 
   "Konwerter:", 
   "Dolna granica pasma:", 
   "Gorna granica pasma:", 
   "Odchylenie poziomu RF:", 
   "Prog Stereo:", 
   "Krawedz dolnoprzep..:", 
   "Prog dolnoprzepust.:", 
   "Prog niskiego sygnalu:", 
   "Kontrast:", 
   "Ustaw glosnosc", 
   "Ustaw odchylenie konwertera", 
   "Ustaw dolna granice pasma", 
   "Ustaw gorna granice pasma", 
   "Ustaw odchylenie sygnalu", 
   "Ustaw prog separacji Stereo", 
   "Czest. gran. filtra dolnoprzep.", 
   "Ustaw prog dolnoprzep.", 
   "Ustaw dolna granice sygnalu", 
   "Ustaw jasnosc wyswietlacza", 
   "Wyl.", 
   "Ekran jest wyciszony!", 
   "Aby wyl. wyciszenie odznacz RF+", 
   "WYL.", 
   "SKANOWANIE...", 
   "Nie wykryto tunera", 
   "Ustawiono wersje tunera: v", 
   "Prosze uruchomic pon. tuner", 
   "Pokaz bledy RDS", 
   "Jezyk", 
   "Wybierz swoj jezyk",
   "WCISNIJ MODE ABY ZAMKNAC I ZAPISAC",
   "Wlacz.", 										
   "Lagodne wycisz. FM",								
   "Lagodne wycisz. AM", 								
   "Beep na krawedzi pasma"						
   },
   
  {"Hrvatski",												// Croatian
  "Smjer enkodera promij.", 
  "Otpustite gumb",
  "Zaslon je okrenut",
  "Kalibracija analog. mjerača", 
  "Otpustite gumb", 
  "Optički enkoder postav.", 
  "Standardni enkoder postav.", 
  "FM/AM prijemnik",
  "Prijemnik: !Nije pronađen!",
  "Pomak glasnoće:",
  "Pomak konvertera:",
  "Donja granica opsega:", 
  "Gornja granica opsega:", 
  "Pomak RF razine:",
  "Razina stereo signala:", 
  "Granična frekvencija:", 
  "Razina granične frekv.:", 
  "Donja granica za signal:", 
  "Svjetlina:",
  "Pomak glasnoće", 
  "Pomak konvertera", 
  "Donja granica frekv. opsega", 
  "Gornja granica frekv. opsega", 
  "Pomak signala", 
  "Razina stereo signala", 
  "Granična frekvencija", 
  "Razina granične frekv.", 
  "Donja granica za signal", 
  "Svjetlina zaslona", 
  "Isključeno",
  "Zaslon je isključen!",
  "Da biste uključili zaslon, poništite kvadratić RF+",
  "ISK.", 
  "SKENIRANJE...",
  "Prijemnik nije pronađen",
  "Postavljena verzija prijemnika: v",
  "Molim, ponovno pokrenite prijemnik",
  "Prikaži RDS pogreške",
  "Jezik",
  "Odaberite jezik",
  "PRITISNITE MODE ZA IZLAZ I SPREMANJE",
  "Uključeno", 
  "Softmute FM",
  "Softmute AM",
  "Beep na rubu frekv. opsega"
  },
   
  {"Ελληνικά",												// Greek
    "Η διεύθυνση του ρότορα άλλαξε",
    "Παρακαλώ ελευθερώστε το πλήκτρο",
    "Η οθόνη αναποδογύρισε",
    "Βαθμονόμηση αναλογικού μετρητή",
    "Ελευθερώστε το πλήκτρο όταν είστε έτοιμοι",
    "ο κωδικοποιητής ρυθμίστηκε σε οπτικός",
    "ο κωδικοποιητής ρυθμίστηκε σε στάνταρ",
    "FM/AM δέκτης",
    "Tuner: !Κανένα!",
    "Ένταση ήχου:",
    "Μετατροπέας:",
    "Κάτω όριο μπάντας:",
    "Άνω όριο μπάντας:",
    "Ολίσθηση επιπέδου RF:",
    "Κατώφλι στέρεο:",
    "Όριο υψηλής αποκοπής:",
    "Κατώφλι υψηλής αποκοπής:",
    "Κατώφλι χαμηλού επιπέδου:",
    "Αντίθεση:",
    "Ορισμός έντασης ήχου",
    "Ολίσθηση (offset) κωδικοποιητή",
    "Κάτω όριο μπάντας",
    "Άνω όριο μπάντας",
    "Επίπεδο ολίσθησης",
    "Κατώφλι διαχωρισμού στέρεο",
    "Συχνότητα ορίου υψηλής αποκοπής",
    "Κατώφλι υψηλής αποκοπής",
    "Κατώφλι χαμηλού επιπέδου",
    "Φωτεινότητα οθόνης",
    "Ανενεργό",
    "Οθόνη σε σίγαση!",
    "Για επαναφορά ήχου τσεκάρετε το RF+",
    "ΑΝΕΝΕΡΓΟ",
    "ΑΝΙΧΝΕΥΣΗ...",
    "Το tuner δεν εντοπίστηκε",
    "Η έκδοση tuner ορίστηκε σε: v",
    "Παρακαλώ επανεκκινήστε το tuner",
    "Εμφάνιση σφαλμάτων RDS",
    "Γλώσσα",
    "Επιλογή γλώσσας",
    "ΠΙΕΣΤΕ ΤΟ MODE ΓΙΑ ΕΞΟΔΟ & ΑΠΟΘΗΚΕΥΣΗ",
	"Ενεργό",
	"Softmute FM",
	"Softmute AM",
	"Ηχητικό σήμα στο όριο μπάντας"
  },
  
  { "Romana",												// Roman
    "Sens rotire schimbat",
    "Eliberati butonul",
    "Ecran inversat",
    "Calibrati S-metrul analog",
    "Eliberati butonul cand terminati",
    "Encoderul setat pe Optic",
    "Encoderul setat pe Standard",
    "Receptor FM/AM ",
    "Nu exista Tuner !",
    "Volum:",
    "Convertor:",
    "Limita inferioara a benzii:",
    "Limita superioara a benzii:",
    "offset ptr. nivel RF:",
    "Prag ptr. Stereo :",
    "Limita taiere inalte:",
    "Prag taiere inalte:",
    "Prag taiere joase:",
    "Contrast:",
    "Seteaza volum",
    "Seteaza offset ptr convertor ",
    "Seteaza marginea de jos a benzii",
    "Seteaza marginea de sus a benzii",
    "Seteaza nivel offset",
    "Seteaza prag separare Stereo",
    "Seteaza limita de sus inalte",
    "Seteaza prag taiere inalte",
    "Seteaza pragul nivelului de jos",
    "Seteaza luminozitatea ptr. Display ",
    "Oprit",
    "Ecran oprit",
    "Ptr a porni debifati RF+ box",
    "Oprit",
    "Scanare...",
    "Tunerul nu este detectat",
    "Versiune Tuner: v",
    "Va rog restartati tuner",
    "Arata erorile RDS",
    "Limba",
    "Alege Limba",
    "Apasa MODE pentru a salva si iesi",
    "Pornit",
    "FM fara sonor",
    "A fara sonorM",
    "Sunet la marginea Benzii"
  }
};
