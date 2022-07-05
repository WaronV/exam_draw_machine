#include "rek_wiek.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(drzew_b *&wezel, string dane, int tab[], int &k){

k++;

if(wezel==NULL){
wezel= new drzew_b;
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

void losoj_droge_b(int *&taba, int N){
    srand(time(0));
    taba=new int[N];
    for(int i=0; i<N; i++){
    taba[i]=0+(2-0)*rand()/RAND_MAX;
    }
}

//-------------------------------------------------------------------------------------------------------------------


void stworz_b(drzew_b *&korzen, int n, int l, int m, string tekst_zad){
    int* tab;
    tab = new int[m];
    string dane;
    ifstream plik1;

    plik1.open(tekst_zad.c_str());

    if(!plik1.good()){ cout<<"error!3"<<endl; }

    for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){ plik1>>tab[j];}

     plik1>>dane;
     l=(-1);

    wypelnij(korzen, dane, tab, l);

    }
}

//-------------------------------------------------------------------------------------------------------------------
void pisz_zadanie_3b(ofstream &plik11, int *&taba, int N, drzew_b *wl){

    plik11.open("wynik3.txt");
    drzew_b *kl;
    kl=wl;
cout<<"zad3b: ";
    plik11<<"zad3b: ";



    for(int i=0; i<N+1; i++){
            if(i==2){
    cout<<"osobom w kolejnowsci przeksztalcic plec na ";
    plik11<<"osobom w kolejnowsci przeksztalcic plec na ";}

    if(i==3){
    cout<<"(jesli to mozliwe) i przepisac te osoby do nowej tablicy ";
    plik11<<"(jesli to mozliwe) i przepisac te osoby do nowej tablicy ";}


            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<".";
    plik11<<".";
    plik11.close();

}
void pisz_zadanie_1b(ofstream &plik11, int *&taba, int N, drzew_b *wl){

    plik11.open("wynik1.txt");
    drzew_b *kl;
    kl=wl;
  cout<<"zad1b: Znajdz ";
    plik11<<"zad1b: Znajdz ";
    for(int i=0; i<N+1; i++){

            if(i==2){
            cout<<" w ";
            plik11<<" w ";}

            if(i==3){
            cout<<" wylosowana z przedzialu <0,N>, a nastepnie wypelnic plcia wylosowanej osoby wszystkie pola ";
            plik11<<" wylosowana z przedzialu <0,N>, a nastepnie wypelnic plcia wylosowanej osoby wszystkie pola ";}


            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"dwiema przekatnymi.";
    plik11<<"dwiema przekatnymi.";
    plik11.close();

}

void pisz_zadanie_2b(ofstream &plik11, int *&taba, int N, drzew_b *wl){

    plik11.open("wynik2.txt");
    drzew_b *kl;
    kl=wl;
    cout<<"zad2b: Oblicz srednia arytmetyczna wieku wszytsich osob ";
    plik11<<"zad2b: Oblicz srednia arytmetyczna wieku wszytsich osob ";



    for(int i=0; i<N+1; i++){

            if(i==2){
            cout<<"i zamienic ta liczba wiek osob ktore sa ";
            plik11<<"i zamienic ta liczba wiek osob ktore sa ";}

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"sredniaj w danej kolumnie lub wierszu.";
    plik11<<"sredniaj w danej kolumnie lub wierszu.";
    plik11.close();

}


//--------------------------------------------------------------------------------------------------------------------
void zadb(int n,int m, string tekst_zad, int kk){

int *taba;
ofstream plik11;
int l=0;
drzew_b *korzen=NULL;

stworz_b(korzen, n, l, m, tekst_zad);
losoj_droge_b(taba,m);
if(kk==1){pisz_zadanie_1b(plik11, taba, m, korzen);}
if(kk==2){pisz_zadanie_2b(plik11, taba, m, korzen);}
if(kk==3){pisz_zadanie_3b(plik11, taba, m, korzen);}

 }

//---------------------------------------------------------------------------------------------------------------


void rek_wiek(char &g, char &f){

    int n, m, kk;
    string tekst_zad;

srand(time(0));

g='1'+('4'-'1')*rand()/RAND_MAX;

while(1){
    f='1'+('4'-'1')*rand()/RAND_MAX;
    if(f!=g)break;
}

if(g=='1' || f=='1'){n=15; m=3; kk=1; tekst_zad="tekst1b.txt"; zadb(n, m, tekst_zad, kk);}
if(g=='2' || f=='2'){n=7; m=2; kk=2; tekst_zad="tekst2b.txt"; zadb(n, m, tekst_zad, kk);}
if(g=='3' || f=='3'){n=15; m=3; kk=3; tekst_zad="tekst3b.txt"; zadb(n, m, tekst_zad, kk);}

}
//----------------------------------------------------
