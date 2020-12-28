#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Masina
{
public:
	string marca;
	string model;

	friend istream& operator >> (istream& is, Masina& m)
	{
		cout << "Dati marca: ";
		getline(is, m.marca);
		cout << "Dati modelul: ";
		getline(is, m.model);
		return is;
	}

	friend ifstream& operator >> (ifstream& ifs, Masina& m)
	{
		getline(ifs, m.marca);
		getline(ifs, m.model);
		return ifs;
	}

	friend ostream& operator << (ostream& os, const Masina& m)
	{
		os << "Marca este: " << m.marca << endl;
		os << "Modelul este: " << m.model << endl;
		return os;
	}

	friend ofstream& operator << (ofstream& ofs, const Masina& m)
	{
		ofs << m.marca << endl;
		ofs << m.model << endl;
		return ofs;
	}
};

int main()
{
	Masina m;
	cin >> m;

	ofstream ofs;
	ofs.open("masini.txt");
	ofs << m;
	ofs.close();

	ifstream ifs;
	ifs.open("masini.txt");
	Masina k;
	ifs >> k;
	ifs.close();

	cout << k;

	return 0;
}
