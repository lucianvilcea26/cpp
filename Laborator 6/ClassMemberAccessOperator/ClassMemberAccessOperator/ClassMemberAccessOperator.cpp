#include <iostream>
using namespace std;
class BaseClass
{
public: 
    int a;
	BaseClass(int a)
	{
		this->a = a;
	}
};

class Level1 {
public:
	BaseClass* parent;
	Level1(BaseClass* parent)
	{
		this->parent = parent;
	}
	BaseClass* operator -> ()
	{
		return parent;
	}
};

class Level2 {
public:
	Level1* parent;
	Level2(Level1* parent)
	{
		this->parent = parent;
	}
	Level1& operator ->()
	{
		return *parent;
	}
};

class Level3 {
public:
	Level2* parent;
	Level3(Level2* parent)
	{
		this->parent = parent;
	}
	Level2& operator ->()
	{
		return *parent;
	}
};
class Ceva
{
public:
	int x;
};

int main()
{
	/*BaseClass w(3);
	cout << "From base class: "<<w.a << endl;
	Level1 x(&w);
	cout << "From level 1 class: " << x->a << endl;
	Level2 y(&x);
	cout << "From level 2 class: " << y->a << endl;
	Level3 z(&y);
	cout << "From level 3 class: " << z->a << endl << endl;;

	w.a = 17;
	cout << "----- Change value of base class -----" << endl << endl;

	cout << "From base class: " << w.a << endl;
	cout << "From level 1 class: " << x->a << endl;
	cout << "From level 2 class: " << y->a << endl;
	cout << "From level 3 class: " << z->a << endl;*/

	Ceva a{};
	cout << a.x;
}