#include <iostream> //<> pentru dependinte externe 
#include "Parc.h" //"" pentru dependinte locale (din proiect)

using namespace ParcDistractii;

int main()
{
    Carusel* c = new Carusel();
    Carusel* d = new Carusel();
    cin >> c;
    cin >> d;
    

    Parc p;
    p.adaugaCarusel(c);
    p.adaugaCarusel(d);

    cout << p;
}
