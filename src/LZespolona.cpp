#include "LZespolona.hh"


const bool  LZespolona::operator ==  (  LZespolona  Skl2)const{
 
  if (abs( re - Skl2.re) <= MIN_DIFF && abs( im - Skl2.im) <= MIN_DIFF)
    return true;
  else
    return false;
  
}
/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  LZespolona::operator + (  LZespolona  Skl2)
{
  LZespolona  Wynik;   //wynik liczba z

  Wynik.re =  re + Skl2.re;   //cz re
  Wynik.im =  im + Skl2.im;    //cz im

  return Wynik;   //zwraca wynik
}
LZespolona LZespolona::operator - (  LZespolona skl2)   //przeciazenie -
{
  LZespolona wynik;    //jak wyglada wynik
  wynik.re =  re - skl2.re;
   wynik.im =  im - skl2.im;
   return wynik;  //zwraza wynik
}

LZespolona LZespolona::operator * (  LZespolona skl2)    //przeciozenie *
{
   LZespolona wynik;   
wynik.re= re*skl2.re- im*skl2.im;
wynik.im= re*skl2.im+ im*skl2.re;
return wynik;
}
LZespolona LZespolona::Sprzezenie()   //sprzezenie
{
LZespolona wynik;
wynik.re= re;
wynik.im=-1* im;
return wynik;
}
double LZespolona::Modul2()   //modul
{
  double wynik;   //wynik double
  wynik=sqrt(pow( re,2)+pow( im,2));    //modul  wzor
  return wynik*wynik;   //zwraca modul ^2
}
LZespolona LZespolona::operator / (  double skl2)    //przecizenie dzielenia l zesp/lre
{
  LZespolona wynik;
  if(skl2==0)
  throw runtime_error("Math error: Attempted to divide by Zero\n");
  wynik.re= re/skl2;
  wynik.im= im/skl2;
  return wynik;
}
LZespolona LZespolona::operator / (  LZespolona skl2)    //przecizenie dzielenia l zesp /l sesp
{
  LZespolona wynik;
  wynik=*this*skl2.Sprzezenie()/skl2.Modul2();
  return wynik;
}

void Wyswietl(LZespolona argument)    //wyswietl
{
  cout<<"("<<argument.re<<showpos<<argument.im<<noshowpos<<"i)"<<endl;//wyswietla i dobiera znak ze wzgledu na cz im (showpos)
 
}

void wczytaj(LZespolona& argument )  //wczytaj
{
  char znak; //znak
  cin>>znak>>argument.re>>argument.im>>znak>>znak; //wczytuje (a+bi)

}

ostream &operator << (ostream & wyj, const LZespolona & argument)   //przecizenie lewostronne
{
  wyj<<"("<<argument.re<<showpos<<argument.im<<noshowpos<<"i)";  //wyswietl to samo
  return wyj;
}

istream &operator >> (istream & wej,  LZespolona & argument)    //przecizenie prawe 
{
  char znak;   //znak
  wej>>znak;  //wczytuje znak
  if(znak!='(')
  {
    wej.setstate(ios::failbit);   //ustawienie bitu bledu
  }
   wej>>argument.re;  //wczytuje re
    wej>>argument.im;
      wej>>znak;  //wczytuje i
  if(znak!='i')
  {
    wej.setstate(ios::failbit);
  }
    wej>>znak;  //nawias)
  if(znak!=')')
  {
    wej.setstate(ios::failbit); //blad nawias)
  }
  return wej;
}


  LZespolona LZespolona :: operator +=(LZespolona skl1)   //przeciazenie +=
  {
  *this= *this+skl1;
  return *this;
  }
  LZespolona LZespolona :: operator /=(LZespolona skl1)    //przeciazenie /=
  {
  *this= *this/skl1;
  return *this;
  }

double LZespolona :: arg()   //argument Lzespolonej
{
double wynik;
if(re>0)
{
wynik=  atan2(im,re)*180/M_PI;

}
else if(re<0)
{
 wynik= (atan2(im,re)+M_PI)*180/M_PI;
}
else
{
  throw "arg a jest zero czyli wyjatek";
}return wynik;
}