#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "Statystyka.hh"
TEST_CASE("Test LZespolona dzielenie przez skalar 1") {
    LZespolona x, y;
    double t = 2;
    
    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;
   
    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar 2") {
    LZespolona x, y;
    double t = 3;
    
    x.re = 2;
    x.im = 2;

    y.re = 0.6666;
    y.im = 0.6666;
   
    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar - zero") {
    LZespolona x;
    double t = 0;
    
    x.re = 2;
    x.im = 2;
 
   WARN_THROWS(x/t);
}

TEST_CASE("Test LZespolona dzielenie przez lz 1") {
    LZespolona x, y,t;
     t.re = 2;
     t.im = 2;

    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 0;
   
    CHECK(x/t == y);
}


TEST_CASE("Test LZespolona dzielenie przez lz - zero") {
    LZespolona x,t;
     t.re = 0;
     t.im = 0;
    
    x.re = 2;
    x.im = 2;
 
   WARN_THROWS(x/t);
}
TEST_CASE("Test LZespolona sprzezenie") {
    LZespolona x,y;
    x.re = 2;
    x.im = 0;
    
    y.re=2;
    y.im=0;
   
   
    CHECK(Sprzezenie(x)== y);
}


TEST_CASE("Test LZespolona dzielenie przez lz - zero") {
    LZespolona x,y;
    
    x.re = 2;
    x.im = 2;
     y.re=2;
    y.im=-2;
 
   CHECK(Sprzezenie(x)== y);
}




TEST_CASE("Test LZespolona modul") {
    LZespolona x;
    
    x.re = 2;
    x.im = 2;
     double y;
     y=8.0;
 
   CHECK(Modul2(x)== y);
}

TEST_CASE("Test LZespolona dodawanie") {
    WyrazenieZesp x={{2,1}, Op_Dodaj, {1,2}};
    LZespolona y;
    
   
     y.re=3;
    y.im=3;
 
   CHECK(Oblicz(x)== y);
}
TEST_CASE("Test LZespolona odejmowanie") {
    WyrazenieZesp x={{2,1}, Op_Odejmij, {1,2}};
    LZespolona y;
    
   
     y.re=1;
    y.im=-1;
 
   CHECK(Oblicz(x)== y);
}
TEST_CASE("Test LZespolona mnoz") {
    WyrazenieZesp x={{2,1}, Op_Mnoz, {1,2}};
    LZespolona y;
    
   
     y.re=0;
    y.im=5;
 
   CHECK(Oblicz(x)== y);
}
TEST_CASE("Test LZespolona dziel") {
    WyrazenieZesp x={{2,1}, Op_Dziel, {1,2}};
    LZespolona y;
    
   
     y.re=0.8;
    y.im=-0.6;
 
   CHECK(Oblicz(x)== y);
}

TEST_CASE("Test LZesspolona statystyka") {
    Statystka x={5,5,10};
    double y = 50.0;
    
   
 
   CHECK(Oblicz_pop(x)== y);
}
TEST_CASE("Test LZespolona statystyka") {
    Statystka x={5,5,10};
    double y = 50.0;
    
   
 
   CHECK(Oblicz_niepop(x)== y);
}

TEST_CASE("Test LZespolona wczytywanie") {
    LZespolona x;
 std::istringstream in("(1+1i)");
 in >> x;
 std::ostringstream out;
 out << x;
    
   
   CHECK("(1+1i)" == out.str() );
}

TEST_CASE("Test LZespolona wyswietlanie") {
    LZespolona x;
x.re = 2;
x.im = 2;
 std::ostringstream out;
 out << x;
 std::cout << out.str() << std::endl;
    
   CHECK("(2+2i)" == out.str() );
}

