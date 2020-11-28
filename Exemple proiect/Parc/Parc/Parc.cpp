#include "Parc.h"

namespace ParcDistractii
{
	Parc::Parc()
	{
		this->carusele = new Carusel * [0];
		this->numarCarusele = 0;
	}

	void Parc::adaugaCarusel(Carusel* c)
	{
		int numarCaruseleNou = numarCarusele + 1;
		Carusel** temp = new Carusel * [numarCaruseleNou];
		for (int i = 0; i < numarCarusele; i++)
		{
			*(temp + i) = *(carusele + i);
		}
		*(temp + numarCarusele) = c;
		delete[] carusele;
		carusele = temp;
		numarCarusele = numarCaruseleNou;
	}

	ostream& operator << (ostream& os, const Parc& p)
	{
		for (int i = 0; i < p.numarCarusele; i++)
		{
			os << p.carusele[i];
		}

		return os;
	}
}