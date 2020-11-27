#include <iostream>
using namespace std; 

namespace Zoo {
	class Cusca
	{
	private:
		Animal** animale;
		int numarAnimale;
	public:
		Cusca();
		~Cusca();
		Animal* operator[](int index);
		void AdaugaAnimal(Animal* a);
		friend ostream& operator << (ostream& os, Cusca& c);
	};
}