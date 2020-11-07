#include <iostream>
using namespace std;

class Pasare {
public:
	bool canta;
	int inaltime;
	Pasare()
	{
		cout << "Constructor fara parametri" << endl;
		this->canta = false;
		this->inaltime = 0;
	}

	Pasare(bool c, int i)
	{
		cout << "Constructor cu parametri" << endl;
		this->canta = c;
		this->inaltime = i;
	}

	Pasare(const Pasare& p) : canta(p.canta)
	{
		cout << "Constructor de copiere" << endl;
		//this->canta = p.canta; - echivalent cu instructiunea de la linia 22
		this->inaltime = p.inaltime;
	}

	Pasare& operator = (const Pasare& p)
	{
		cout << "Operator de atribuire" << endl;
		this->canta = p.canta;
		this->inaltime = p.inaltime;
		return *this;
	}

	void display()
	{
		cout << "Pasarea canta: " << canta << "; Are inaltimea de: " << inaltime << " stocata la adresa " << &inaltime << endl;
	}
};

int main()
{
	Pasare p1;
	p1.canta = false;
	p1.inaltime = 15;

	Pasare p2(true, 20);
	Pasare p3 = p2;
	Pasare p4;
	p4 = p2;

	p2.inaltime = 53;

	p1.display();
	p2.display();
	p3.display();
	p4.display();

	return 0;
}