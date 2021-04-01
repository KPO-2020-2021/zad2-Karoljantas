#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#define USE MATH DEFINES
#include <iostream>
#include <cmath>
#include <stdexcept>
#define MIN_DIFF 0.001

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */
using namespace std;  //uzycie przstrzeni nazw 

/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
  double arg();
  LZespolona operator +=(LZespolona skl1);
LZespolona operator /=(LZespolona skl1);
const bool  operator ==  (   LZespolona  Skl2)const;



LZespolona  operator + (   LZespolona  Skl2);  //przecizenie znaku +

LZespolona operator - (  LZespolona skl2);    //przecizenie znaku -

LZespolona operator * ( LZespolona skl2);     //przecizenie znaku *

LZespolona operator / ( LZespolona skl2);      //przecizenie znaku /

LZespolona operator / ( double skl2); //liczba przez liczbe 

LZespolona Sprzezenie();   //sprzezenie
double Modul2();    //bezwzgledna ^2
};






/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */




void wczytaj(LZespolona&);    //wczytaj l zesp

ostream &operator << (ostream & wyj, const LZespolona & argument);   //przeciazenie przesuniecia bitowego w lewo
istream &operator >> (istream & wej,  LZespolona & argument);    //przeciazenie przesuniecia bitowego w prawo
void Wyswietl(LZespolona);   //wyswietl
#endif


