#include <iostream>
using namespace std;

namespace ParcDistractii {
	class Carusel
	{
	public:
		string nume;
		int capacitate;
		bool esteFunctional;

		friend istream& operator >>(istream& is, Carusel* c);	
		friend ostream& operator <<(ostream& os, const Carusel* c);
	};	
}