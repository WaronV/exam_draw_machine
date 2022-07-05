#ifndef rek_xy_H
#define rek_xy_H
#include <iostream>

using namespace std;
struct drzew_c{
string napis;
drzew_c *lew;
drzew_c *praw;
};


void rek_xy(char &g, char &f);
void zadc(int n, int m,string tekst_zad, int kk);
void wypelnij(drzew_c *&wezel, string dane, int tab[], int &k);
void losoj_droge_c(int *&taba,int N);
void stworz_c(drzew_c *&korzen, int n, int l, int m, string tekst_zad);
void pisz_zadanie_1c(ofstream *&plik11,int *taba,int N,drzew_c *wl);
void pisz_zadanie_2c(ofstream *&plik11,int *taba,int N,drzew_c *wl);
void pisz_zadanie_3c(ofstream *&plik11,int *taba,int N,drzew_c *wl);

#endif // rek_xy_H
