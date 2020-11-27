#include <iostream>
using namespace std;

namespace Zoo {
	class Animal
	{
	private:
		string specie;
		string nume;
		int varsta;
		int greutate;
		bool esteSanatos;
	public:
		friend istream& operator >>(istream& is, Animal* a);
		friend ostream& operator <<(ostream& os, const Animal* a);
	};
}


