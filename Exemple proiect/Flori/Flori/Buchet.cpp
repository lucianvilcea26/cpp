#include <iostream>
#include "Buchet.h"
using namespace std;

namespace Florarie
{
	Buchet::Buchet()
	{
		numarFlori = 0;
		flori = new Floare * [0];
	}
	void afiseaza()
	{

	}
	void Buchet::adaugaFloare(Floare* f)
	{
		int numarFloriNou = numarFlori + 1;
		Floare** temp = new Floare * [numarFloriNou];
		for (int i = 0; i < numarFlori; i++)
		{			
			*(temp + i) = *(flori + i);
		}
		*(temp + numarFlori) = f;
		delete[] flori;
		flori = temp;
		numarFlori = numarFloriNou;
	}

	ostream& operator << (ostream& os, const Buchet& b)
	{
		os << "Buchetul contine:" << endl;
		for (int i = 0; i < b.numarFlori; i++)
		{
			os << b.flori[i];
		}
		return os;
	}

	float Buchet::calculeazaPret()
	{
		float pretBuchet = 0;
		for (int i = 0; i < numarFlori; i++)
		{
			pretBuchet = pretBuchet + flori[i]->pret;
		}
		return pretBuchet;
	}
}