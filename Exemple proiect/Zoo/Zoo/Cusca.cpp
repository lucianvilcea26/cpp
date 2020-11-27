#include "Animal.h"
#include "Cusca.h"
#include <iostream>
using namespace std;

namespace Zoo {
	Cusca::Cusca()
	{
		numarAnimale = 0;
		animale = new Animal * [0];
	}

	Cusca::~Cusca()
	{
		delete[] animale;
	}

	void Cusca::AdaugaAnimal(Animal* a)
	{
		int numarAnimaleNou = numarAnimale + 1;
		Animal** temp = new Animal * [numarAnimaleNou];
		for (int i = 0; i < numarAnimale; i++)
		{
			*(temp + i) = *(animale + i);
		}
		*(temp + numarAnimale) = a;
		delete[] animale;
		animale = temp;
		numarAnimale = numarAnimaleNou;
	}


	Animal* Cusca::operator [] (int index)
	{
		if (index < 0 || index > numarAnimale - 1)
			exit(0);
		return animale[index];
	}

	ostream& operator << (ostream& os, Cusca& c)
	{
		for (int i = 0; i < c.numarAnimale; i++)
		{
			cout << c[i];
			cout << endl;
		}

		return os;
	}
}