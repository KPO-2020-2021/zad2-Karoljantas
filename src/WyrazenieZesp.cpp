#include "WyrazenieZesp.hh"

void Wyswietl(WyrazenieZesp  WyrZ)   //wyswietl
{
    Wyswietl(WyrZ.Arg1);    //1l zesp
    switch (WyrZ.Op)
    {case Op_Dodaj:     //operator
    cout<<"+";
    break;
    case Op_Odejmij:
    cout<<"-";
    break;
case Op_Mnoz:
    cout<<"*";
    break;
    case Op_Dziel:
    cout<<"/";
    break;
    
    }
       Wyswietl(WyrZ.Arg2);   //2 l zesp
}
LZespolona Oblicz(WyrazenieZesp  WyrZ)    //oblicz
{LZespolona wynikZ; 
    switch (WyrZ.Op)     //w zaleznosci od dzialania
    {
    case Op_Dodaj:
    wynikZ=WyrZ.Arg1+WyrZ.Arg2;
       break;
       case Op_Odejmij:
    wynikZ=WyrZ.Arg1-WyrZ.Arg2;
       break;
       case Op_Mnoz:
    wynikZ=WyrZ.Arg1*WyrZ.Arg2;
       break;
       case Op_Dziel:
    wynikZ=WyrZ.Arg1/WyrZ.Arg2;
       break;
    }return wynikZ;
}
void wczytaj(WyrazenieZesp& WyrZ)   //wczytaj
{
     wczytaj(WyrZ.Arg1 );    //l zesp 1
     char znak;
     cin>>znak;
     switch (znak)
     {
     case '+':              //znak
     WyrZ.Op=Op_Dodaj;
     break;
      case '-':
     WyrZ.Op=Op_Odejmij;
     break;
      case '*':
     WyrZ.Op=Op_Mnoz;
     break;
      case '/':
     WyrZ.Op=Op_Dziel;
     break;
     }wczytaj(WyrZ.Arg2);    //2 l zesp
}
ostream &operator << (ostream & wyj, const WyrazenieZesp & WyrZ)    //wypisz analogicznie
{
    wyj<<WyrZ.Arg1;
    switch (WyrZ.Op)
    {case Op_Dodaj:
    cout<<"+";
    break;
    case Op_Odejmij:
    cout<<"-";
    break;
case Op_Mnoz:
    cout<<"*";
    break;
    case Op_Dziel:
    cout<<"/";
    break;
    }
    wyj<<WyrZ.Arg2;
    return wyj;
}