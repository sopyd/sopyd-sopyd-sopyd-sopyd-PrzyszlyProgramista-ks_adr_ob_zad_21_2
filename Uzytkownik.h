#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik
{
    int id; // to jest zahemretyzowane, skladniki prywatne
    string login;
    string haslo;

    // zeby inne klasy mialy dostep do powyzszego musze daæ settery i gettery
public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif
