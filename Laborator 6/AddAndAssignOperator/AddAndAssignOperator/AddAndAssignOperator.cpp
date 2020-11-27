#include <iostream>
using namespace std;

class Numbers
{
public:
	int a;
	Numbers(int a)
	{
		this->a = a;
	}
	Numbers& operator +=(const Numbers& w)
	{
		this->a = this->a + w.a;
		return *this;
	}

	Numbers& operator -=(const Numbers& y)
	{
		this->a = this->a - y.a;
		return *this;
	}
};

int main()
{
	Numbers x(4), y(7);
	cout << x.a << endl;
	cout << y.a << endl<<endl;	
	x -= y;
	cout << x.a << endl;
	cout << y.a << endl;
	return 0;
}

