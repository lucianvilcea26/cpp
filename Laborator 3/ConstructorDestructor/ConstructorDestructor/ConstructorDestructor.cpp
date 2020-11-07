#include<iostream>
#include<math.h>
using namespace std;

class Triunghi
{

private:
	float latura1, latura2, latura3;
public:
	static int counter;
	Triunghi(float l1, float l2, float l3) : latura1(l1), latura2(l2), latura3(l3)
	{
		this->counter++;
	}

	~Triunghi()
	{
		this->counter--;
	}

	float GetPerimetru()
	{
		return this->latura1 + this->latura2 + this->latura3;
	}

	void setLatura1(float l1)
	{
		this->latura1 = l1;
	}

	float getLatura1()
	{
		return this->latura1;
	}

	void setLatura2(float l2)
	{
		this->latura2 = l2;
	}

	float getLatura2()
	{
		return this->latura2;
	}

	void setLatura3(float l3)
	{
		this->latura3 = l3;
	}

	float getLatura3()
	{
		return this->latura3;
	}

	//s - semiperimetru
	//radical(s * (s - latura1) * (s - latura2) * (s - latura3))
	float GetAria()
	{
		float s = this->GetPerimetru() / 2;
		return sqrt(s * (s - this->latura1) * (s - this->latura2) * (s - this->latura3));
	}
};

int Triunghi::counter = 0;

int main()
{
	cout << "Triunghi alocat dinamic" << endl;
	cout << "-------------------------------" << endl;
	//triunghi alocat dinamic
	Triunghi* t = new Triunghi(3, 4, 5);

	cout << "Perimetrul: " << t->GetPerimetru() << endl;
	cout << "Aria: " << t->GetAria() << endl;
	cout << "Instante: " << t->counter << endl<<endl;

	cout << "Triunghi alocat static" << endl;
	cout << "-------------------------------" << endl;

	//ATENTIE, valori invalide pentru laturile unui triunghi!
	//Laturile sunt modificate cu ajutorul functiilor setter, mai jos
	Triunghi t2(1, 3, 5);	

	t2.setLatura1(3);
	t2.setLatura2(5);
	cout << "Perimetrul: " << t2.GetPerimetru() << endl;
	cout << "Aria: " << t2.GetAria() << endl;
	cout << "Instante: " << t2.counter << endl<<endl;

	cout << "Dealocarea triunghiului alocat dinamic" << endl;
	cout << "-------------------------------" << endl;
	delete t;
	cout << "Instante: " << t2.counter << endl << endl;

	return 0;
}