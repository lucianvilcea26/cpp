#include <iostream> //<> pentru dependinte extere
#include "Floare.h" //"" pentru dependinte locale

using namespace std;
namespace Florarie
{
	Floare::Floare()
	{
		id = counter;
		counter++;
	}

	istream& operator >> (istream& is, Floare* floare)
	{
		cout << "Dati numele: "; is >> floare->nume;
		cout << "Dati culoarea: "; is >> floare->culoare;
		cout << "Dati pretul: "; is >> floare->pret;
		return is;
	}

	ostream& operator << (ostream& os, const Floare* floare)
	{
		os << "Numele florii: " << floare->nume << endl;
		os << "Culoarea florii: " << floare->culoare << endl;
		os << "Pretul florii: " << floare->pret << endl;
		return os;
	}
	int Floare::counter = 1;
}