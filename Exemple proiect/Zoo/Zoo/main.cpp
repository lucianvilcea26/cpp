#include <iostream>
#include "Animal.h"
#include "Cusca.h"
using namespace std;
using namespace Zoo;

int main()
{
    Animal* a = new Animal();
    cin >> a;
	Animal* b = new Animal();
	cin >> b;
    Cusca c;
	c.AdaugaAnimal(a);
	c.AdaugaAnimal(b);
	cout << c;
}
