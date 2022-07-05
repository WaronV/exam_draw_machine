#include "brak_rek.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
void wypelnij(drzew_a *&wezel, string dane, int tab[], int &k){

k++;

if(wezel==NULL){
wezel= new drzew_a;
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

void losoj_droge_a(int *&taba, int N){
    srand(time(0));
    taba=new int[N];
    for(int i=0; i<N; i++){
    taba[i]=0+(2-0)*rand()/RAND_MAX;
    }
}

//-------------------------------------------------------------------------------------------------------------------


void stworz_a(drzew_a *&korzen, int n, int l, int m, string tekst_zad){
    int *tab;
    tab = new int[m];
    string dane;
    ifstream plik1;

    plik1.open(tekst_zad.c_str());

    if(!plik1.good()){ cout<<"error!1"<<endl; }

    for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){ plik1>>tab[j];}

     plik1>>dane;
     l=(-1);

    wypelnij(korzen, dane, tab, l);

    }
}

//-------------------------------------------------------------------------------------------------------------------
void pisz_zadanie_3a(ofstream &plik11, int *&taba, int N, drzew_a *wl){

    plik11.open("wynik3.txt");
    drzew_a *kl;
    kl=wl;
    cout<<"zad3a: Jesli w tablicy znajduje ";
    plik11<<"zad3a: Jesli w tablicy najduje ";



    for(int i=0; i<N+1; i++){
            if(i==2){
    cout<<"liczb ujemnych niz dodatnich nalezy zamienic miejscami elementy z pod i nad ";
    plik11<<"liczb ujemnych niz dodatnich nalezy zamienic miejscami elementy z pod i nad ";}

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"przekatnej.";
    plik11<<"przekatnej.";
    plik11.close();

}
void pisz_zadanie_1a(ofstream &plik11, int *&taba, int N, drzew_a *wl){

    plik11.open("wynik1.txt");
    drzew_a *kl;
    int gh;
    kl=wl;
    cout<<"zad1a: Cklicznie ";
    plik11<<"zad1a: Cklicznie ";

    for(int i=0; i<N+1; i++){

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
    gh=0+(9-0)*rand()/RAND_MAX;

    cout<<"o "<<gh<<" miejsc.";
    plik11<<"o "<<gh<<" miejsc.";
    plik11.close();

}
void pisz_zadanie_2a(ofstream &plik22, int *taba, int N, drzew_a *wl){

    plik22.open("wynik2.txt");
    drzew_a *kl;
    kl=wl;
    cout<<"zad2a: Znajdz najwieksza i ";
    plik22<<"zad2a: Znajdz najwieksza i ";


    for(int i=0; i<N+1; i++){

                if(i==1){
    cout<<"wartosc ";
    plik22<<"wartosc ";}

            cout<<kl->napis<<" ";
            plik22<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }

    cout<<"przekatna oraz zamien miejscami.";
    plik22<<"przekatna oraz zamien miejscami.";
    plik22.close();
}

//--------------------------------------------------------------------------------------------------------------------
void zada(int n,int m, string tekst_zad, int kk){
int *taba;
ofstream plik11;
int l=0;
drzew_a *korzen=NULL;

stworz_a(korzen, n, l, m, tekst_zad);
losoj_droge_a(taba,m);
if(kk==1){pisz_zadanie_1a(plik11, taba, m, korzen);}
if(kk==2){pisz_zadanie_2a(plik11, taba, m, korzen);}
if(kk==3){pisz_zadanie_3a(plik11, taba, m, korzen);}

 }


void brak_rek(char &g, char &f){

    int n, m, kk;
    string tekst_zad;

srand(time(nullptr));

g='1'+('4'-'1')*rand()/RAND_MAX;

while(1){
    f='1'+('4'-'1')*rand()/RAND_MAX;
    if(f!=g)break;
}

if(g=='1' || f=='1'){n=15; m=3; kk=1; tekst_zad="tekst1a.txt"; zada(n, m, tekst_zad, kk);}
if(g=='2' || f=='2'){n=7; m=2; kk=2; tekst_zad="tekst2a.txt"; zada(n, m, tekst_zad, kk);}
if(g=='3' || f=='3'){n=7; m=2; kk=3; tekst_zad="tekst3a.txt"; zada(n, m, tekst_zad, kk);}

}
//----------------------------------------------------

