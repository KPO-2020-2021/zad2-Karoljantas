#ifndef Statystyka_HH
#define Statystyka_HH
#include <iostream>

using namespace std;
struct Statystka{
    int Poprawne;
    int Bledne;
    int Wszystkie;
double Oblicz_pop();
double Oblicz_niepop();
};
void wyswietl(Statystka);

#endif