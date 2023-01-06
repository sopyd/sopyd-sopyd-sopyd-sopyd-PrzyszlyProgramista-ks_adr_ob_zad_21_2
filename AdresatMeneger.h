#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

class AdresatMeneger
{
    int idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMeneger(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {}; // na koncu cialo konstruktora {}

    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

};

#endif
