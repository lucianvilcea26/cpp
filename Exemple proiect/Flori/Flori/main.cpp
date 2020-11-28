#include <iostream>
#include "Buchet.h"
using namespace std;
using namespace Florarie;

int main()
{
	Floare* f = new Floare();
	Floare* g = new Floare();
	Floare* h = new Floare();
	cin >> f >> g >> h;
	Buchet b;
	b.adaugaFloare(f);
	b.adaugaFloare(g);
	b.adaugaFloare(h);
	cout << b.calculeazaPret();
}