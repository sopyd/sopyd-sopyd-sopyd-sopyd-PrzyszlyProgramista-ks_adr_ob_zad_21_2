#include "Adresat.h"

void Adresat::ustawIdUzytkownika(int noweIdUzytkownika) {
    idUzytkownika = noweIdUzytkownika;
}

void Adresat::ustawId(int noweId) {
    id = noweId;
}

void Adresat::ustawImie(string noweImie) {
    imie = noweImie;
}

void Adresat::ustawNazwisko(string noweNazwisko) {
    nazwisko = noweNazwisko;
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu) {
    numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawEmail(string nowyEmail) {
    email = nowyEmail;
}

void Adresat::ustawAdres(string nowyAdres) {
    adres = nowyAdres;
}

int Adresat::wczytajIdUzytkownika() {
    return idUzytkownika;
}

int Adresat::wczytajId() {
    return id;
}

string Adresat::wczytajImie() {
    return imie;
}

string Adresat::wczytajNazwisko() {
    return nazwisko;
}

string Adresat::wczytajNumerTelefonu() {
    return numerTelefonu;
}

string Adresat::wczytajEmail() {
    return email;
}

string Adresat::wczytajAdres() {
    return adres;
}
