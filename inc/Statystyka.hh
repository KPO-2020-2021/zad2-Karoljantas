#ifndef Statystyka_HH
#define Statystyka_HH
#include <iostream>

using namespace std;
struct Statystka{
    int Poprawne;
    int Bledne;
    int Wszystkie;
};
void wyswietl(Statystka);
double Oblicz_pop(Statystka);
double Oblicz_niepop(Statystka);
#endif