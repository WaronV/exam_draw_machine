#include "poczatek.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void pytaj(int &p, int &s, int &k){
    srand(time(0));
ofstream plik;
p=9, s=9, k=9;
plik.open("poczatek.txt");
string tab;

p=0+(2-0)*rand()/RAND_MAX;
s=0+(2-0)*rand()/RAND_MAX;

plik<<"Zadeklarowac tablice ";
cout<<"Zadeklarowac tablice ";

if (p==1) {
        plik<<" dynamiczna o rozmiarach podanych przez urzytkownika. ";
        cout<<" dynamiczna o rozmiarach podanych przez urzytkownika. ";}
else {plik<<" statyczna o rozmiarach NxN. ";
      cout<<" statyczna o rozmiarach NxN. ";}

if (s==1){ plik<< "O rekordach";
           cout<< "O rekordach";
k=0+(3-0)*rand()/RAND_MAX;
if (k==0) {plik<< " x(int), y(int). Wylosowanych z przedzialu <G,H> wczytanych przez urzytkownika. ";
           cout<< " x(int), y(int). Wylosowanych z przedzialu <G,H> wczytanych przez urzytkownika. ";}
if (k==1) {plik<< " litera alfabetu(char), liczba(int). Liczby musza byc wylosowane z przedzialu <G,H> wczytanch przez urzytkownika, litery natomiast nalezy wylosowac z calego alfabetu. ";
          cout<< " litera alfabetu(char), liczba(int). Liczby musza byc wylosowane z przedzialu <G,H> wczytanch przez urzytkownika, litery natomiast nalezy wylosowac z calego alfabetu. ";}
if (k==2) {plik<< " wiek(int), plec(char). Wiek nalezy wylosowac z przedzialu <1,100>. Plec nalezy wylosować 'M' lub 'K'. ";
           cout<< " wiek(int), plec(char). Wiek nalezy wylosowac z przedzialu <1,100>. Plec nalezy wylosować 'M' lub 'K'. ";}
}

if(s==0){plik<<" Wypelnic wszystkie komurki tablicy liczbami rzeczywistymi z przedzialu <G,H> wczytanymi przez urzytkownika.";
         cout<<" Wypelnic wszystkie komurki tablicy liczbami rzeczywistymi z przedzialu <G,H> wczytanymi przez urzytkownika.";}

plik.close();
}


