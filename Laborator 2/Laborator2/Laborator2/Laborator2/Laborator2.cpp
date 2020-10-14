#include <iostream>
#include <cstring>
using namespace std;

//definire macro-uri
#define LENGTH 50
#undef LENGTH
#define LENGTH 70
#define SQUARE(x) ((x) * (x))

//definire subprogram inainte de apel
void valueParameters(int a)
{
    cout << "Valoarea lui a din subprogram inainte de modificare: " << a << endl;
    a = 50;
    cout << "Valoarea lui a din subprogram dupa modificare: " << a << endl;
}

//definire subprogram inainte de apel
void referenceParameters(int& b)
{
    cout << "Valoarea lui b din subprogram inainte de modificare: " << b << endl;
    b = 50;
    cout << "Valoarea lui b din subprogram dupa modificare: " << b << endl;
}

//definire semnatura subprogram, cu definirea implementarii dupa apel
void pointerParameters(int* c);

//definire clasa Animal
class Animal {
    //membri publici
public:
    char nume[50];
    char specie[50];
    int varsta;
    bool isFemale;

    void afiseaza()
    {
        calculeazaGradMaturitate();
        cout << nume << " este " << (isFemale == true ? " o " : " un ") << specie;
        cout << " " << maturitate << " de " << varsta << " ani";
    }
    //membri privati
private:
    char maturitate[50];
    void calculeazaGradMaturitate()
    {
        if (varsta <= 3)
            strcpy_s(maturitate, "tanar");
        else
            if (varsta <= 6)
                strcpy_s(maturitate, "adult");
            else
                strcpy_s(maturitate, "senior");
    }
};

int main()
{
    cout << "Valoarea macro-ului LENGTH: " << LENGTH <<endl;
    int x = 7;
    cout << "x patrat, apel cu efect intuitiv: " << SQUARE(x) << ", dupa care x = " << x <<endl;
    cout << "x++ patrat, apel cu efect neintuitiv: " << SQUARE(x++)<< ", dupa care x = " << x << "(nu " << x-1 << ")"<< endl <<endl ;

    int a = 10;
    cout << "Valoarea lui a inainte de apel: " << a << endl;
    valueParameters(a);
    cout << "Valoarea lui a dupa apel: " << a << endl <<endl;

    int b = 10;
    cout << "Valoarea lui b inainte de apel: " << b << endl;
    referenceParameters(b);
    cout << "Valoarea lui b dupa apel: " << b << endl << endl;

    int c = 10;
    cout << "Valoarea lui c inainte de apel: " << c << endl;
    pointerParameters(&c);
    cout << "Valoarea lui c dupa apel: " << c << endl <<endl;

    Animal a1;
    strcpy_s(a1.nume, "Buhdeuce");
    strcpy_s(a1.specie, "papagal");
    a1.varsta = 5;
    a1.isFemale = false;

    a1.afiseaza();

    Animal a2;
    strcpy_s(a2.nume, "Puci");
    strcpy_s(a2.specie, "pisica");
    a2.varsta = 2;
    a2.isFemale = true;
}

//definire subprogram dupa apel
void pointerParameters(int* c)
{
    cout << "Valoarea lui c din subprogram inainte de modificare: " << *c << endl;
    *c = 50;
    cout << "Valoarea lui c din subprogram dupa modificare: " << *c << endl;
}