#include <iostream>
#include "Floare.h"
using namespace std;

namespace Florarie
{
	class Buchet
	{
	public:
		Floare** flori;
		int numarFlori;
		Buchet();
		void adaugaFloare(Floare* f);
		friend ostream& operator << (ostream& os, const Buchet& b);
		float calculeazaPret();
	};
}