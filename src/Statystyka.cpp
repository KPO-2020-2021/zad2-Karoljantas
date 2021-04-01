#include "Statystyka.hh"

void wyswietl(Statystka stat)   //wyswietl
{
    cout<<"Poprawne odpowiedzi to: "<<stat.Poprawne<< endl;
cout<<"Bledne odpowiedzi to: "<<stat.Bledne<< endl;
cout<<"Procet poprawnych to: "<<stat.Poprawne*100.0/stat.Wszystkie<< endl;

}
double Statystka::Oblicz_pop( )    //oblicza poprawne
{
    return  Poprawne*100.0/ Wszystkie;
}
double Statystka::Oblicz_niepop( )     //oblicza n. poprawne
{
    return  Bledne*100.0/ Wszystkie;
}