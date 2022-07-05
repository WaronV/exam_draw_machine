#include "rek_litera.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(drzew_d *&wezel, string dane, int tab[], int &k){

k++;

if(wezel==NULL){
wezel= new drzew_d;
wezel->napis=dane;
wezel->lew=NULL;
wezel->praw=NULL;
}

else
    if(tab[k]==0){
    wypelnij(wezel->lew,dane,tab, k);}
else
    if(tab[k]==1){
    wypelnij(wezel->praw,dane,tab, k);}

}

//-------------------------------------------------------------------------------------------------------------------

void losoj_droge_d(int *&taba, int N){
    srand(time(0));
    taba=new int[N];
    for(int i=0; i<N; i++){
    taba[i]=0+(2-0)*rand()/RAND_MAX;
    }
}

//-------------------------------------------------------------------------------------------------------------------


void stworz_d(drzew_d *&korzen, int n, int l, int m, string tekst_zad){
    int* tab;
    tab = new int[m];
    string dane;
    ifstream plik1;

    plik1.open(tekst_zad.c_str());

    if(!plik1.good()){ cout<<"error!2"<<endl; }

    for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){ plik1>>tab[j];}

     plik1>>dane;
     l=(-1);

    wypelnij(korzen, dane, tab, l);

    }
}

//-------------------------------------------------------------------------------------------------------------------
void pisz_zadanie_1d(ofstream &plik11, int *&taba, int N, drzew_d *wl){

    plik11.open("wynik1.txt");
    drzew_d *kl;
    kl=wl;
 cout<<"zad1d: Znajdz najwieksza oraz najmniejsza liczbe ";
    plik11<<"zad1d: Znajdz najwieksza oraz najmniejsza liczbe ";

    for(int i=0; i<N+1; i++){

            if(i==2){
            cout<<"przekatnej a nastepnie zmien wszystkie litery w tej samej ";
            plik11<<"przekatnej a nastepnie zmien wszystkie litery w tej samej ";}

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"na te z odszukanej liczby.";
    plik11<<"na te z odszukanej liczby.";

    plik11.close();

}

void pisz_zadanie_3d(ofstream &plik11, int *&taba, int N, drzew_d *wl){

    plik11.open("wynik3.txt");
    drzew_d *kl;
    kl=wl;
cout<<"zad3d: Jesli tablica zawiera ";
    plik11<<"zad3d: Jesli tablica zawiera ";



    for(int i=0; i<N+1; i++){
            if(i==2){
    cout<<"niz liczba podana przez uzytkownika to nalezy preprowadzic translacje ";
    plik11<<"niz liczba podana przez uzytkownika to nalezy preprowadzic translacje ";}

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"rog tablicy.";
    plik11<<"rog tablicy.";
    plik11.close();

}

void pisz_zadanie_2d(ofstream &plik11, int *&taba, int N, drzew_d *wl){

    plik11.open("wynik2.txt");
    drzew_d *kl;
    kl=wl;
    cout<<"zad2d: Oblicz ";
    plik11<<"zad2d: Oblicz ";



    for(int i=0; i<N+1; i++){

            if(i==2){
    cout<<"tablicy i wypelnij nia ";
    plik11<<"tablicy i wypelnij nia ";}

     if(i==3){
    cout<<"oraz o tyle przesun cyklicznie obwod tabeli ";
    plik11<<"oraz o tyle przesun cyklicznie obwod tabeli ";}



            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"z ruchem wskazuwek zegara.";
    plik11<<"z ruchem wskazuwek zegara.";

    plik11.close();

}


//--------------------------------------------------------------------------------------------------------------------
void zadd(int n,int m, string tekst_zad, int kk){

int *taba;
ofstream plik11;
int l=0;
drzew_d *korzen=NULL;

stworz_d(korzen, n, l, m, tekst_zad);
losoj_droge_d(taba,m);
if(kk==1){pisz_zadanie_1d(plik11, taba, m, korzen);}
if(kk==2){pisz_zadanie_2d(plik11, taba, m, korzen);}
if(kk==3){pisz_zadanie_3d(plik11, taba, m, korzen);}

 }

//---------------------------------------------------------------------------------------------------------------


void rek_litera(char &g, char &f){

    int n, m, kk;
    string tekst_zad;

srand(time(0));

g='1'+('4'-'1')*rand()/RAND_MAX;

while(1){
    f='1'+('4'-'1')*rand()/RAND_MAX;
    if(f!=g)break;
}

if(g=='1' || f=='1'){n=7; m=2; kk=1; tekst_zad="tekst1d.txt"; zadd(n, m, tekst_zad, kk);}
if(g=='2' || f=='2'){n=15; m=3; kk=2; tekst_zad="tekst2d.txt"; zadd(n, m, tekst_zad, kk);}
if(g=='3' || f=='3'){n=15; m=3; kk=3; tekst_zad="tekst3d.txt"; zadd(n, m, tekst_zad, kk);}

}
//----------------------------------------------------
