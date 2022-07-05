#include "rek_xy.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(drzew_c *&wezel, string dane, int tab[], int &k){

k++;

if(wezel==NULL){
wezel= new drzew_c;
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

void losoj_droge_c(int *&taba, int N){
    srand(time(0));
    taba=new int[N];
    for(int i=0; i<N; i++){
    taba[i]=0+(2-0)*rand()/RAND_MAX;
    }
}

//-------------------------------------------------------------------------------------------------------------------


void stworz_c(drzew_c *&korzen, int n, int l, int m, string tekst_zad){
    int* tab;
    tab = new int[m];
    string dane;
    ifstream plik1;

    plik1.open(tekst_zad.c_str());

    if(!plik1.good()){ cout<<"error!4"<<endl; }

    for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){ plik1>>tab[j];}

     plik1>>dane;
     l=(-1);

    wypelnij(korzen, dane, tab, l);

    }
}

//-------------------------------------------------------------------------------------------------------------------

void pisz_zadanie_1c(ofstream &plik11, int *&taba, int N, drzew_c *wl){

    plik11.open("wynik1.txt");
    drzew_c *kl;
    kl=wl;
    cout<<"zad1c: Znajdz punkt najdalej od srodka ";
    plik11<<"zad1c: Znajdz punkt najdalej od srodka ";



    for(int i=0; i<N+1; i++){

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<"przekatna oraz zamien znaleziona wartoscia x i y po prawej i lewej stronie obydwu przekatnych.";
    plik11<<"przekatna oraz zamien znaleziona wartoscia x i y po prawej i lewej stronie obydwu przekatnych.";

    plik11.close();

}

 //----------------------------------------------------------------------------------------------------------------------

void pisz_zadanie_2c(ofstream &plik11, int *&taba, int N, drzew_c *wl){

    plik11.open("wynik2.txt");
    drzew_c *kl;
    kl=wl;
    cout<<"zad2c: Policz ";
    plik11<<"zad2c: Policz ";



    for(int i=0; i<N+1; i++){

            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
   cout<<"srednia owych wynikow nalerzy przenies na plik pt. (Pierwszy.Program.Wiktora.P.txt).";
    plik11<<"srednia owych wynikow nalerzy przenies na plik pt. (Pierwszy.Program.Wiktora.P.txt).";

    plik11.close();

}

//--------------------------------------------------------------------------------------------------------------------
void pisz_zadanie_3c(ofstream &plik11, int *&taba, int N, drzew_c *wl){

    plik11.open("wynik3.txt");
    drzew_c *kl;
    kl=wl;
    cout<<"zad3c: Wszystkie pola w ktorych najwieksza jest ";
    plik11<<"zad3c: Wszystkie pola w ktorych najwieksza jest ";



    for(int i=0; i<N+1; i++){
            if(i==2){
    cout<<"wyzerowac pola ";
    plik11<<"wyzerowac pola ";}
          if(i==3){
    cout<<"i nastepnie przepisac te pary liczb na nowa tablice ";
    plik11<<"i nastepnie przepisac te pary liczb na nowa tablice ";}


            cout<<kl->napis<<" ";
            plik11<<kl->napis<<" ";

        if(taba[i]==0){kl=kl->lew;}
        if(taba[i]==1){kl=kl->praw;}

    }
cout<<".";
    plik11<<".";
    plik11.close();

}

//--------------------------------------------------------------------------------------------------------------------
void zadc(int n,int m, string tekst_zad, int kk){

int *taba;
ofstream plik11;
int l=0;
drzew_c *korzen=NULL;

stworz_c(korzen, n, l, m, tekst_zad);
losoj_droge_c(taba,m);
if(kk==1){pisz_zadanie_1c(plik11, taba, m, korzen);}
if(kk==2){pisz_zadanie_2c(plik11, taba, m, korzen);}
if(kk==3){pisz_zadanie_3c(plik11, taba, m, korzen);}

 }

//---------------------------------------------------------------------------------------------------------------


void rek_xy(char &g, char &f){

    int n, m, kk;
    string tekst_zad;

srand(time(0));

g='1'+('4'-'1')*rand()/RAND_MAX;

while(1){
    f='1'+('4'-'1')*rand()/RAND_MAX;
    if(f!=g)break;
}

if(g=='1' || f=='1'){n=7; m=2; kk=1; tekst_zad="tekst1c.txt"; zadc(n, m, tekst_zad, kk);}
if(g=='2' || f=='2'){n=7; m=2; kk=2; tekst_zad="tekst2c.txt"; zadc(n, m, tekst_zad, kk);}
if(g=='3' || f=='3'){n=15; m=3; kk=3; tekst_zad="tekst3c.txt"; zadc(n, m, tekst_zad, kk);}

}
//----------------------------------------------------
