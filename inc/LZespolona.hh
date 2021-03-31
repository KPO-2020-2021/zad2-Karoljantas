#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
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
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

void Wyswietl(LZespolona);   //wyswietl
bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);

ostream &operator << (ostream & wyj, const LZespolona & argument);   //przeciazenie przesuniecia bitowego w lewo
istream &operator >> (istream & wej,  LZespolona & argument);    //przeciazenie przesuniecia bitowego w prawo

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);  //przecizenie znaku +

LZespolona operator - (LZespolona skl1, LZespolona skl2);

LZespolona operator * (LZespolona skl1, LZespolona skl2);

LZespolona operator / (LZespolona skl1, LZespolona skl2);

LZespolona operator / (LZespolona skl1, double skl2); //liczba przez liczbe 

LZespolona Sprzezenie(LZespolona);   //sprzezenie

void wczytaj(LZespolona&);    //wczytaj l zesp

double Modul2(LZespolona);    //bezwzgledna ^2
#endif
