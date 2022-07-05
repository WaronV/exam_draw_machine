#include "kolokwium.h"
#include <iostream>
#include <fstream>
#include<string>

using namespace std;

void ukladaj(char g, char f){

string napis, wynik="wynik", txt=".txt";
string wynik_one=wynik+g+txt;
string wynik_two= wynik+f+txt;

ofstream plikk ("kolokwium.txt");
ifstream plik1 ("poczatek.txt");
ifstream plik2 (wynik_one.c_str());
ifstream plik3 (wynik_two.c_str());

getline(plik1, napis);
plikk<<napis<<endl;
getline(plik2, napis);
plikk<<napis<<endl;
getline(plik3, napis);
plikk<<napis<<endl;
plikk<<"Drukuj tablice wierszami."<<endl;
cout<<"Drukuj tablice wierszami."<<endl;



plikk.close();
plik1.close();
plik2.close();
plik3.close();
}
