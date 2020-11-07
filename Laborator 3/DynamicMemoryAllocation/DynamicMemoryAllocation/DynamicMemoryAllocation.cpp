#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int lungime;
	cout << "Dati lungimea vectorului: ";
	cin >> lungime;

	//alocam dinamic un vector cu "lungime" elemente
	int *v = new int[lungime];
	
	//populam vectorul cu toate valorile de la 0 la "lungime"-1
	for (int i = 0; i < lungime; i++) {
		v[i] = i;
	}

	//afisam vectorul
	for (int i = 0; i < lungime; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//crestem lungimea cu o unitate
	int newLungime = lungime + 1;

	//alocam un vector intermediar cu noua lungime
	int* newV = new int[newLungime];

	//copiem toate elementele vechiului vector
	for (int i = 0; i < lungime; i++)
	{
		newV[i] = v[i];
	}

	//pentru ultima pozitie a vectorului, adaugam manual valoarea acesteia
	newV[newLungime - 1] = newLungime - 1;

	//dealocam memoria aferenta vectorului initial
	delete[] v;

	//modificam adresa retinuta de pointerul initial, la care se va regasi noul vector
	v = newV;
	lungime = newLungime;
	
	//afisam din nou vectorul
	for (int i = 0; i < lungime; i++)
	{
		cout << v[i] << " ";
	}

	//dealocam memoria aferenta vectorului
	delete[] v;

	return 0;
}