#include <iostream>
#include "Carusel.h"

using namespace std;

namespace ParcDistractii
{
	istream& operator >> (istream& is, Carusel* c)
	{
		cout << "Dati numele: "; is >> c->nume;
		cout << "Dati capacitatea: "; is >> c->capacitate;
		cout << "Este functional: "; is >> c->esteFunctional;

		return is;
	}

	ostream& operator <<(ostream& os, const Carusel* c)
	{
		os << "Numele: " << c->nume << endl;
		os << "Capacitate: " << c->capacitate << endl;
		os << "Este functional: ";
		if (c->esteFunctional)
			os << "da" << endl;
		else
			os << "nu" << endl;
		return os;
	}
}