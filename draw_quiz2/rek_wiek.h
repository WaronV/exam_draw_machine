#ifndef rek_wiek_H
#define rek_wiek_H
#include <iostream>

using namespace std;
struct drzew_b{
string napis;
drzew_b *lew;
drzew_b *praw;
};


void rek_wiek(char &g, char &f);
void zadb(int n, int m,string tekst_zad, int kk);
void wypelnij(drzew_b *&wezel, string dane, int tab[], int &k);
void losoj_droge_b(int *&taba,int N);
void stworz_b(drzew_b *&korzen, int n, int l, int m, string tekst_zad);
void pisz_zadanie_1b(ofstream *&plik11,int *taba,int N,drzew_b *wl);
void pisz_zadanie_2b(ofstream *&plik11,int *taba,int N,drzew_b *wl);
void pisz_zadanie_3b(ofstream *&plik11,int *taba,int N,drzew_b *wl);

#endif // rek_wiek_H
