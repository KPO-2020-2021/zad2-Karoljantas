#include <iostream>
#include "BazaTestu.hh"
#include "Statystyka.hh"
using namespace std;




int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;    //wypisze komunikat
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;   //zmienne
  LZespolona wynik, wynik_obliczony;
   Statystka stat={0,0,0};    //statystyka
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe))   //przechodzi po wszystkihc pytaniach
  {
   cout<<"wyrazenie ktore oblicz to : "<<WyrZ_PytanieTestowe<<endl;
   wynik_obliczony=Oblicz(WyrZ_PytanieTestowe);
    for(int i=0; i<3; i++)
    {
      cout<<"wpisz wynik : "<<endl;      //wpisujemy wynik
      cin>>wynik;
      if(cin.good())
      {
        break;
      }
      cin.clear();     //czyscimy bit bledu
      cin.ignore(1024,'\n');   //czyscimy bufor pamieci
    }
    if(wynik_obliczony.re==wynik.re && wynik_obliczony.im == wynik.im)   //porownanie
    {
      cout<<"dobrze "<<endl;
      stat.Poprawne++;
    }
    else
    {
         cout<<"zle poprawny wynik to  "<< wynik_obliczony <<endl;
         stat.Bledne++;
    }
stat.Wszystkie++;   //zwiekszamy statystyka
  }
wyswietl(stat);   //wyswietlamy staty
  
  cout << endl;  //zostawia linie przerwy
  cout << " Koniec testu" << endl;    //koniec testu
  cout << endl;

}
