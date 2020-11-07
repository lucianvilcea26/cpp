#include <iostream>
using namespace std;

class Numbers {
private:
	int a, b;
public:
	friend void Sum(const Numbers& n);
	friend ostream& operator << (ostream& os, const Numbers& n);
	friend istream& operator >> (istream& is, Numbers& n);

	Numbers operator +(const Numbers& n)
	{
		Numbers result;
		result.a = this->a + n.a;
		result.b = this->b + n.b;
		return result;
	}

	Numbers operator -(const Numbers& n)
	{
		Numbers result;
		result.a = this->a - n.a;
		result.b = this->b - n.b;
		return result;
	}
	Numbers operator *(const Numbers& n)
	{
		Numbers result;
		result.a = this->a * n.a;
		result.b = this->b * n.b;
		return result;
	}
	Numbers operator /(const Numbers& n)
	{
		Numbers result;
		result.a = this->a / n.a;
		result.b = this->b / n.b;
		return result;
	}

	Numbers& operator++()
	{
		this->a++;
		this->b++;
		return *this;
	}

	Numbers operator++(int)
	{
		Numbers oldState = *this;
		++* this;
		return oldState;
	}

	Numbers& operator--()
	{
		this->a--;
		this->b--;
		return *this;
	}

	Numbers operator--(int)
	{
		Numbers oldState = *this;
		--* this;
		return oldState;
	}
};

ostream& operator << (ostream& os, const Numbers& n)
{
	os << "Valoarea lui a: " << n.a << "; Valoarea lui b: " << n.b << endl;
	return os;
}

istream& operator >> (istream& is, Numbers& n)
{
	cout << "Dati valoarea lui a: ";
	is >> n.a;
	cout << "Dati valoarea lui b: ";
	is >> n.b;
	cout << endl;
	return is;
}

void Sum(const Numbers& n)
{
	cout << "Suma este: " << n.a + n.b << endl;
}

int main()
{
	Numbers n, m;
	cin >> n >> m;
	cout << "n: " << n;
	cout << "m: " << m << endl;

	cout << "Suma: " << n + m;
	cout << "Diferenta: " << n - m;
	cout << "Produsul: " << n * m;
	cout << "Raportul: " << n / m << endl;

	cout << "Incrementare postfix n: " << n++;
	cout << "Dupa incrementare: " << n << endl;

	cout << "Incrementare prefix n: " << ++n;
	cout << "Dupa incrementare: " << n << endl;

	cout << "Decrementare postfix m: " << m--;
	cout << "Dupa decrementare: " << m << endl;

	cout << "Decrementare prefix m: " << --m;
	cout << "Dupa decrementare: " << m << endl;
}
