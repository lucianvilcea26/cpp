#include <iostream>
using namespace std; 

namespace Florarie
{
	class Floare
	{
	public:
		int id;
		static int counter;
		string nume;
		string culoare;
		float pret;
		Floare();
		friend istream& operator >> (istream& is, Floare* floare);
		friend ostream& operator << (ostream& os, const Floare* floare);
	};
}