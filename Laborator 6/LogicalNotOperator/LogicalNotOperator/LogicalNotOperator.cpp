// LogicalNotOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class SelfChanging
{
public:
	int x, y;
	SelfChanging(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	SelfChanging& operator!()
	{
		this->x = this->x * (-1);
		this->y = this->y * (-1);
		return *this;
	}
};

class Returnable
{
public:
	int x, y;
	Returnable() {}
	Returnable(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Returnable operator!()
	{
		Returnable temp = *this;
		temp.x = this->x * (-1);
		temp.y = this->y * (-1);
		return temp;
	}
};

class Decision
{
public :
	int x;
	Decision(int x)
	{
		this->x = x;
	}

	bool operator !()
	{
		if (this->x == 0)
			return false;
		else
			return true;
	}
};

int main()
{
	cout << "------ Negation returned in the same object ------" << endl << endl;
	SelfChanging s(4, -9);
	cout << "S: (" << s.x << ", " << s.y << ")" << endl;
	!s;
	cout << "S: (" << s.x << ", " << s.y << ")" << endl;

	cout << "------ Negation returned in another object ------" << endl << endl;
	Returnable p(4, -9), q;
	cout << "P: (" << p.x << ", " << p.y <<")"<< endl;
	q = !p;
	cout << "P: (" << p.x << ", " << p.y << ")" << endl;
	cout << "Q: (" << q.x << ", " << q.y << ")" << endl;

	Decision y(4);
	if (!y == true)
		cout << "x nu este 0";
	else
		cout << "x este 0";
}
