#include <iostream>
using namespace std;

class Cent
{
private:
    int value;
public:
    Cent(int cents = 0): value(cents)
    {
    }

    operator int() 
    { 
        return value; 
    }
};

class Dollar
{
private:
    int value;
public:
    Dollar(int value) : value(value)
    {
    }

    operator Cent() 
    { 
        return Cent(value * 100); 
    }
};

void printCents(Cent cents)
{
    cout << cents <<endl; // cast implicit de la Cent la int
}

int main()
{
    Dollar dollars(9);
    printCents(dollars); // cast implicit de la Dollar la Cent
    Cent cents = (Cent)dollars; // cast explicit de la Dollar la Cent
    printCents(cents);

    return 0;
}