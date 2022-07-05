#ifndef brak_rek_H
#define brak_rek_H
#include <iostream>

using namespace std;

struct drzew_a{
string napis;
drzew_a *lew;
drzew_a *praw;
};

void brak_rek(char &g, char &f);
void zada(int n, int m,string tekst_zad, int kk);
void wypelnij(drzew_a *&wezel, string dane, int tab[], int &k);
void losoj_droge_a(int *&taba,int N);
void stworz_a(drzew_a *&korzen, int n, int l, int m, string tekst_zad);
void pisz_zadanie_1a(ofstream *&plik11,int *taba,int N,drzew_a *wl);
void pisz_zadanie_2a(ofstream *&plik11,int *taba,int N,drzew_a *wl);
void pisz_zadanie_3a(ofstream *&plik11,int *taba,int N,drzew_a *wl);


#endif // zadanie1_H
