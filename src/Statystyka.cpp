#include "Statystyka.hh"

void wyswietl(Statystka stat)   //wyswietl
{
    cout<<"Poprawne odpowiedzi to: "<<stat.Poprawne<< endl;
cout<<"Bledne odpowiedzi to: "<<stat.Bledne<< endl;
cout<<"Procet poprawnych to: "<<stat.Poprawne*100.0/stat.Wszystkie<< endl;

}
double Oblicz_pop(Statystka stat)
{
    return stat.Poprawne*100.0/stat.Wszystkie;
}
double Oblicz_niepop(Statystka stat)
{
    return stat.Bledne*100.0/stat.Wszystkie;
}