#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	cout << "Valoarea lui x: " << x << "; Adresa lui x: " << &x << endl;

	int* p = &x;
	cout << "Valoarea lui p: " << p << "; Adresa lui p: " << &p << endl;

	int** q = &p;
	cout << "Valoarea lui q: " << q << "; Adresa lui q: " << &q << endl;

	int*** r = &q;
	cout << "Valoarea lui r: " << r << "; Adresa lui r: " << &r << endl;

	**q = 9;

	cout << "Valoarea lui x: " << x << endl;
	cout << "Valoarea accesata prin p: " << *p << endl;
	cout << "Valoarea accesata prin lantul de pointeri q -> p: " << **q << endl;
	cout << "Valoarea accesata prin lantul de pointeri r -> q -> p: " << ***r << endl;
}