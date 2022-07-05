#include <iostream>
#include "brak_rek.h"
#include "rek_wiek.h"
#include "rek_xy.h"
#include "rek_litera.h"
#include "poczatek.h"
#include "kolokwium.h"
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    int p,s,k;
pytaj(p,s,k);
srand(time(0));
    char g,f;

if(s==1 && k==0)
rek_xy(g,f);
if(s==1 && k==2)
rek_wiek(g,f);
if(s==1 && k==1)
rek_litera(g,f);
if(s==0)
brak_rek(g,f);
ukladaj(g,f);

    return 0;
}
