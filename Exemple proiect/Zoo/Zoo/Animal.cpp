#include "Animal.h"
using namespace std;

namespace Zoo {
	istream& operator>>(istream& is, Animal* a)
	{
		cout << "Dati specia: ";
		is >> a->specie;
		cout << "Dati numele: ";
		is >> a->nume;
		cout << "Dati varsta: ";
		is >> a->varsta;
		cout << "Dati greutatea: ";
		is >> a->greutate;
		cout << "Este sanatos:";
		is >> a->esteSanatos;
		cout << endl;
		return is;
	}

	ostream& operator << (ostream& os, const Animal* a)
	{
		os << "Numele animalului: " << a->nume << endl;
		os << "Specia animalului: " << a->specie << endl;
		os << "Varsta animalului: " << a->varsta << endl;
		os << "Greutatea animalului: " << a->greutate << endl;
		os << "Este sanatos: ";

		if (a->esteSanatos)
			os << "da";
		else
			os << "nu";
		os << endl;

		return os;
	}
}