#include <iostream>
#include <math.h>
using namespace std;

class Linear
{
private:
    double a, b;
public:
	Linear(double a, double b)
	{
		this->a = a;
		this->b = b;
	}

	double operator () (double x)
	{
		return a * x + b;
	}
};

class Quadratic
{
private:
	double a, b, c;
public:
	Quadratic(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	double operator () (double x)
	{
		return a * pow(x, 2) + b * x + c;
	}
};

int main()
{
	Linear linear(4, 3);
	cout << linear(2) << endl;

	Quadratic quad(3, 2, 1);
	cout << quad(2);

	return 0;
}
