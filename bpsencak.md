Vysvetujem Frantovi:
Ake su vlastnosti pisma
Existujuce riesenia s popisom
Na ake vlastnosti sa zamerat
	Vytvoorenie zadania - KOMPROMIS
ake senzory na to pouzit
	Franta nievie ako funguju - popis senzorov
1. Navrh pera zo senzorov
2. Vytvorenie prototypov
3. Zistene vysledky
4. Som spokojby s vysledkami?
	ANO -> dalej
	NIE -> 1.
Spracovanmie dat
Zhrnutie vysledkov

Co sa da vylepsit


PRED odovzdanim
Kontrola pravopisu 
	ispall/aspell/hunspell - Linux
	Word - WIndows


#Titulná strana - vziať z webu

Abstrakt
Aký problém sa rieši., cieľom tejto práce je
Ako bol problém vyriešený/naplnený
Konkrétne výsledky
Hlavným výsledkom/zistením ALEBO Aky je prínos tejto práce


#CZ

Abstract
#EN

# Klíčová slova


# Keywords

Citace
SENČÁK, Jakub. Konstrukce pera se skrytými senzory. Brno, 2019. Bakalárska práca. Vysoké učení technické v Brně, Fakulta informačních technologií.
Vedoucí práce Ing. Martin Sakin #tituly

\pagebreak

Konstrukce pera se skrytými senzory

# Prohlášení

Prohlašuji, že jsem tuto bakalářskou práci vypracoval samostatně pod vedením pana Ing. Martina Sakina. Uvedl jsem všechny literární prameny a ublikace, ze kterých jsem čerpal.

.......................
Jakub Senčák
#XX. května 2020


# Poděkování

Ďakujem svojmu vedúcemu Martinovi Sakinovi, za jeho prístup a ochotu pri vedení tejto práce. 

\pagebreak

# Obsah

[] 1 Úvod
[] 2 Existujúce 
[] 3
[] 4
[] 5
[] 6 Záver

Literatúra

Ukážka + prílohy

---------------------------------------------------------------------------

\pagebreak

# 1 Úvod

Historické texty nám ukazujú, že človek mal vždy tendenciu si informácie ukladať - zapisovať. Či sa jednalo o písanie na steny v jaskyniach, papyrusové zvytky alebo tlačené knihy. V priebehu času sa vyvíjali materiály aj technológia, ktorou tieto informácie zapisujeme. Hoci už sme v 21. storočí stále využívame pero a papier na poznámky, písanie poštovej korešpondencie a aj ako spôsob našej identifikácie - podpisovanie. Minulý rok sa na na Fakulte Informačných technológií na VUT v Brne robil biometrický výskum, kde sa skúmali vlastnosti písma. Témou bolo "Zařízení pro napodobení statických a dynamických vlastností písma" riešiteľ pán Ing. Jan Pawlus. Radi by sme tento výskum rozšírili a vylepšili. 

\pagebreak

# Existujúce technológie

Livescribe 3

Livescribe 3 je určené na písanie poznámok. Toto pero využíva Bluetooth v4.0 na spojenie s mobilným zariadením, do ktorého následne odosiela dáta o pohybe. Systém je tieto dáta v reálnom ačse prevádza do písaného textu, pričom je možné použiť aj funkciu konvertovania písaného textu do tlačenej podoby!!!!!!!!!!!!!. Na záznam využíva infračervenú kameru, ktorá sa nachádza na spodnej časti pera pod hrotom tuhy. Okrem písma zaznamenáva aj zvuk a tak písmo doplňuje ďalší kontext. Veľkosťou je sa jedná o pomerne kompaktné zariadenie - 162x14.9 mm a hmotnosťou 34 gramov. 

Hodnotenie:
+ kompaktnosť
+ presnosť
+ nevyžaduje kalibráciu

- infračervená kamera je príliš veľká, aby si ju používateľ nevšimol

iskn Slate 2+

Slate 2+ od firmy iskn využíva magnetický prstenec a špeciálnu podložku, v ktorej sa nachádza 32 magnetometrov (senzorov na meranie zmien magnetického poľa). Podložka komunikuje s aplikáciou v mobilnom zariadení alebo počítači pomocou Bluetooth LE 5.0 a v reálnom čase tieto dáta zobrazuje. Výsledok je veľmi presný, no vyžaduje presnú kalibráciu. 

Hodnotenie:
+ nezáleží na použitom pere
+ písať sa môže čímkoľvek

- vyžaduje podložku
- kalibrácia

Stylus

Stylus sa používa na písanie na dotykové plochy. Asi najsofistikovanejším je Apple Pencil. Radí sa mezdi aktívne stylusy [12]. Používa dva trojosé gyroskopy rozmiestnené v rôznych častiach pera. Hrot pera funguje ako tlakový senzor a taktiež ako anténa, ktorá vysiela nízkofrekvenčné (dlhé) vlny a tie sú detekované senzorovou vrstvou pod displejom. Spojenie s iPadom zabezpečuje Bluetooth 4.1 [10a,10b]. Intel v roku 2014 predpovedal, že aktívne stylusy nebudú také úspešné ako pasívne z dôvodu vysokej ceny a náročnosti vývoja takej technológie [11]. No ako môžeme vidieť, táto technológia nakoniec prerazila. 

Hodnotenie:
+ vysoká presnosť
+ realtime
+ nie je potrebná kalibrácia
- náročnosť a komplexnosť vývoja
- vyžaduje displej ako špeciálnu podložku
- vysoká cena (keď rátame aj HW + displej a proprietárny software)
- nefunguje so všetkými displejmi

# Moje riešenie:

Čo potrebujeme sledovať:
- prítlak hrotu na podložku
- smer
- rotáciu pera 
- ukladanie nasnímaných dát


Zameral som sa na tieto vlastnosti, ktoré by malo mať pero 





 Pre potreby tejto práce sa zameriame na písanie perom na obyčajný papier.  


#zisiť niečo o histórii vyrábania pier - 1odstavec
Dovozom a znižovaním nákladov na výrobu... čína, Teraz je to remeslo.



Typy pier.
Dizajn.

Časti pera.

#suciastky

Gyroskop
Akcelerometer

tlakovy odpor senzor - ako funguje a moje ulozenie, 3vs4ks  
vyhody-nevyhody


----
gyroskop a akcelerometer budu rozhodovat o tom v akej pozicii je pero a teda ako sa bude prepocitavat sila z jednotlivych senzorov



Zistit na com sa bude 






Keď chceme určiť akou vzorkovacou frekvenciou chceme analógové hodnoty tlaku na hrot čítať potrebujeme vedieť čas a dĺžku napísaného textu. Ak sa zamyslíme pri akej príležitosti človek vykoná najrýchlejší pohyb rukou, tak nám jednoznačne napadne podpisovanie. Pri podpisovaní človek robí automatizovaný pohyb, ktorý má proste "v ruke" (z angličtiny muscle memory). Urobil som experiment na niekoľkých subjektoch, ktorým som nepovedal, čo meriam a nechal som ich podpísať sa. Odstopoval som koľko im trvalo ich bežné podpísanie a hodnoty som si zaznamenal. Toto testovanie prebiehalo na malej vzorke 10 ľudí a jeho cieľom bolo nájsť najrýchlejší podpis - keďže by sme chceli, aby pero dokázalo pracovať aj v náročných podmienkach. Potreboval som len referenčnú hodnotu podľa ktorej by som vedel vybrať vhodný mikrokontrolér s vhodným A/D prevodníkom. 

Tento experiment by sa mohol vylepšiť použitím pera s jedným tlakovým senzorom, ktorý by si pri začiatku podpisu zaznamenal čas a pri detekovaní tlaku by zaznamenal úvodný čas a na konci by zaznamenal koncový čas. Takto by sme dostali presnejšie hodnoty.

Experimentálne sme zistili, že najrýchlejší podpis trvá len 0.8 s, pričom nevylučujeme možnosť rýchlejšieho podpisu. Ak budeme chcieť vzorkovať podpis povedzme po 1 mm musíme zmerať dĺžku podpisu. v tomto prípade sa jednalo o dĺžku asi 60 mm. Ak si to prevedieme trojčlenkou výjde nám, že za 1 sekundu urobí 75 mm a teda potrebujeme 75 vzorkov za sekundu - 75 Hz. Experimentálna vzorkovacia frekvencia vo výskume z roku 1990\cite{SchomakerL.1990Trbp} bola 105 Hz pričom rozlíšenie bolo nastavené na 0.025 mm s presnosťou 0.25 mm. Z tohoto dôvodu nastavíme aj my vzorkovaciu frekvenciu na hodnotu 100 Hz.



75 ... 1mmm
x  ... 0.025mm
x = 75*0.025



Thesamplingfrequencywas 105.2Hz,sampleshavingaresolutionof 0.025mmandanaccuracyof 0.25mmin bothX andY direction


Ak budeme počítať s nahorším možným scenárom a teda, že podpis bude trvať 










