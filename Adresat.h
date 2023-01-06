#ifndef ADRESAT_H
#define ADRESAT_H

#include <string>
#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawId(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int wczytajIdUzytkownika();
    int wczytajId();
    string wczytajImie();
    string wczytajNazwisko();
    string wczytajNumerTelefonu();
    string wczytajEmail();
    string wczytajAdres();
};

#endif
