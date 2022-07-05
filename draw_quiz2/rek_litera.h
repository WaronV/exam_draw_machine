#ifndef rek_litera_H
#define rek_litera_H
#include <iostream>

using namespace std;
struct drzew_d{
string napis;
drzew_d *lew;
drzew_d *praw;
};


void rek_litera(char &g, char &f);
void zadd(int n, int m,string tekst_zad, int kk);
void wypelnij(drzew_d *&wezel, string dane, int tab[], int &k);
void losoj_droge_d(int *&taba,int N);
void stworz_d(drzew_d *&korzen, int n, int l, int m, string tekst_zad);
void pisz_zadanie_1d(ofstream *&plik11,int *taba,int N,drzew_d *wl);
void pisz_zadanie_2d(ofstream *&plik11,int *taba,int N,drzew_d *wl);
void pisz_zadanie_3d(ofstream *&plik11,int *taba,int N,drzew_d *wl);

#endif // rek_litera_H
