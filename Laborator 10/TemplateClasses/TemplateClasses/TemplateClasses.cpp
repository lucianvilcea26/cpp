#include <iostream>
#include <vector>
using namespace std;

class Elev
{
private:
	string nume;
	int varsta;
public:
	Elev()
	{
		nume = "nume default";
		varsta = 0;
	}
	Elev(string nume, int varsta) : nume(nume), varsta(varsta)
	{

	}

	string getNume()
	{
		return nume;
	}

	int getVarsta()
	{
		return varsta;
	}

	void setNume(string n)
	{
		nume = n;
	}

	void setVarsta(int v)
	{
		varsta = v;
	}

	friend ostream& operator << (ostream& os, const Elev& e)
	{
		os << e.nume << " are " << e.varsta << " ani" << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Elev& e)
	{
		cout << "Numele: "; is >> e.nume;
		cout << "Varsta: "; is >> e.varsta;
		return is;
	}

	bool operator == (Elev& e)
	{
		return this->nume == e.nume && this->varsta == e.varsta;
	}
};

class Masina
{
private:
	string marca;
	string model;
public:
	Masina()
	{
		marca = "marca default";
		model = "model default";
	}
	Masina(string marca, string model) : marca(marca), model(model)
	{

	}

	string getMarca()
	{
		return marca;
	}

	string getModel()
	{
		return model;
	}

	void setMarca(string m)
	{
		marca = m;
	}

	void setModel(string m)
	{
		model = m;
	}

	friend ostream& operator << (ostream& os, const Masina& m)
	{
		os << m.marca << " " << m.model << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Masina& m)
	{
		cout << "Marca: "; is >> m.marca;
		cout << "Model: "; is >> m.model;
		return is;
	}

	bool operator == (Masina& e)
	{
		return this->marca == e.marca && this->model == e.model;
	}
};

template <typename T> class Catalog
{
private:
	vector<T> list;
public:
	void add(T element)
	{
		list.push_back(element);
	}
	void remove(T element)
	{
		int counter = 0;
		for (auto i = list.begin(); i != list.end(); i++)
		{
			if (*i == element)
			{
				list.erase(list.begin() + counter);
				break;
			}
			counter++;
		}
	}

	friend ostream& operator << (ostream& os, const Catalog& c)
	{
		for (auto i = c.list.begin(); i != c.list.end(); i++)
		{
			os << *i;
		}
		return os;
	}
};

int main()
{
	Catalog<Elev> elevi;
	Catalog<Masina> masini;
	int optiune;
	do
	{
		cout << "1. Adauga elev" << endl;
		cout << "2. Sterge elev" << endl;
		cout << "3. Afisare elevi" << endl;
		cout << "4. Adauga masina" << endl;
		cout << "5. Sterge masina" << endl;
		cout << "6. Afisare masini" << endl;
		cout << "7. Iesi" << endl << endl;
		cout << "Optiune: ";
		cin >> optiune;

		switch (optiune)
		{
		case 1:
		{
			Elev e;
			cin >> e;
			elevi.add(e);
			cout << "Am adaugat elevul cu succes" << endl;
			break;
		}
		case 2:
		{
			Elev e;
			cin >> e;
			elevi.remove(e);
			cout << "Am sters elevul cu succes" << endl;
			break;
		}
		case 3:
		{
			cout << elevi;
			break;
		}
		case 4:
		{
			Masina m;
			cin >> m;
			masini.add(m);
			cout << "Am adaugat masina cu succes" << endl;
			break;
		}
		case 5:
		{
			Masina m;
			cin >> m;
			masini.remove(m);
			cout << "Am sters masina cu succes" << endl;
			break;
		}
		case 6:
		{
			cout << masini;
			break;
		}
		case 7:
		{
			cout << "La revedere!" << endl;
			break;
		}
		default:
		{
			cout << "Optiunea nu este valida, selectati alta optiune" << endl;
			break;
		}
		}
		cout << endl << "=================================" << endl;
	} while (optiune != 7);
}

