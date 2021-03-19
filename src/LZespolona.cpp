#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;  //wynik liczba z

  Wynik.re = Skl1.re + Skl2.re;    //cz re
  Wynik.im = Skl1.im + Skl2.im;    //cz im

  return Wynik;     //zwraca wynik
}
LZespolona operator - (LZespolona skl1, LZespolona skl2)   //przeciazenie -
{
  LZespolona wynik;    //jak wyglada wynik
  wynik.re = skl1.re - skl2.re;
   wynik.im = skl1.im - skl2.im;
   return wynik;  //zwraza wynik
}

LZespolona operator * (LZespolona skl1, LZespolona skl2)    //przeciazenie *
{
   LZespolona wynik;    //jak wyglada wynik
wynik.re=skl1.re*skl2.re-skl1.im*skl2.im;
wynik.im=skl1.re*skl2.im+skl1.im*skl2.re;
return wynik;     //zwraca wynik
}
LZespolona Sprzezenie(LZespolona argument)   //sprzezenie
{
LZespolona wynik;
wynik.re=argument.re;
wynik.im=-1*argument.im;
return wynik;
}
double Modul2(LZespolona argument)
{
  double wynik;   //wynik double
  wynik=sqrt(pow(argument.re,2)+pow(argument.im,2));     //modul  wzor
  return wynik*wynik;   //zwraca modul ^2
}
LZespolona operator / (LZespolona skl1, double skl2)      //przecizenie dzielenia l zesp/lre
{
  LZespolona wynik;
  wynik.re=skl1.re/skl2;
  wynik.im=skl1.im/skl2;
  return wynik;
}
LZespolona operator / (LZespolona skl1, LZespolona skl2)     //przecizenie dzielenia l zesp /l sesp
{
  LZespolona wynik;
  wynik=skl1*Sprzezenie(skl2)/Modul2(skl2);
  return wynik;
}

void Wyswietl(LZespolona argument)     //wyswietl
{
  cout<<"("<<argument.re<<showpos<<argument.im<<noshowpos<<"i)"<<endl;//wyswietla i dobiera znak ze wzgledu na cz im (showpos)
 
}

void wczytaj(LZespolona& argument )    //wczytaj
{
  char znak;
  cin>>znak>>argument.re>>argument.im>>znak>>znak;

}

ostream &operator << (ostream & wyj, const LZespolona & argument)   //przecizenie lewostronne
{
  wyj<<"("<<argument.re<<showpos<<argument.im<<noshowpos<<"i)";  //wyswietl to samo
  return wyj;
}

