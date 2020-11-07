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
	BaseClass* baseClass;
	Level1(BaseClass* baseClass)
	{
		this->baseClass = baseClass;
	}
	BaseClass* operator -> ()
	{
		return baseClass;
	}
};

class Level2 {
public:
	Level1* level1;
	Level2(Level1* level1)
	{
		this->level1 = level1;
	}
	Level1& operator ->()
	{
		return *level1;
	}
};

class Level3 {
public:
	Level2* level2;
	Level3(Level2* level2)
	{
		this->level2 = level2;
	}
	Level2& operator ->()
	{
		return *level2;
	}
};

int main()
{
	BaseClass w(3);
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
	cout << "From level 3 class: " << z->a << endl;
}