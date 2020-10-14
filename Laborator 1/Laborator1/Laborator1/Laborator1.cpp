#include <iostream>
#include <cstring>
using namespace std;

int g = 20;

void local_and_global_variables()
{
    int a, b;
    a = 10;
    b = 30;

    cout << a << endl;
    cout << b << endl;
    cout << g << endl;
}

void local_vs_global_same_name()
{
    int g;
    g = 40;

    cout << g << endl;
}

void increment_suffix()
{
    int a = 10;
    cout << a++ << endl;
    cout << a << endl;
}

void increment_prefix()
{
    int a = 10;
    cout << ++a << endl;
    cout << a << endl;
}

void control_structure(int a)
{
    if (a % 2 == 0)
    {
        if (a % 3 == 0)
        {
            cout << "Numar par divizibil cu 3" << endl;
        }
        else
        {
            cout << "Numar par nedivizibil cu 3" << endl;
        }
    }
    else
    {
        cout << "Numar impar" << endl;
    }
}

void control_structure_short_form(int a)
{
    a % 2 == 0 ? a % 3 == 0 ? cout << "Numar par divizibil cu 3" << endl : cout << "Numar par nedivizibil cu 3" << endl : cout << "Numar impar" << endl;
}

void repeat_while()
{
    int a = 0;
    while (a < 20)
    {
        a++;
        cout << a << " ";
    }
    cout << endl;
}

void repeat_do_while()
{
    int a = 0;
    do
    {
        a++;
        cout << a << " ";
    } while (a < 20);
    cout << endl;
}

void repeat_for()
{
    for (int a = 1; a <= 4; a++)
    {
        cout << a << " ";
    }
    cout << endl;
}

void iterate_array()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        n[i] = i * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

void pointers()
{
    int var = 20;
    int* p;

    p = &var;
    cout << "Valoarea lui var: " << var << endl;
    cout << "Valoarea lui p: " << p << endl;
    cout << "Adresa lui var: " << &var << endl;
    cout << "Valoarea variabilei a carei adresa este retinuta de p: " << *p << endl << endl;

    var = 40;
    cout << "Valoarea lui var: " << var << endl;
    cout << "Valoarea lui p: " << p << endl;
    cout << "Adresa lui var: " << &var << endl;
    cout << "Valoarea variabilei a carei adresa este retinuta de p: " << *p << endl << endl;

    *p = 60;
    cout << "Valoarea lui var: " << var << endl;
    cout << "Valoarea lui p: " << p << endl;
    cout << "Adresa lui var: " << &var << endl;
    cout << "Valoarea variabilei a carei adresa este retinuta de p: " << *p << endl;
}


typedef struct {
    char title[50];
    char author[50];
    int id;
} Book;

void structures()
{
    Book b[10];
    for (int i = 0; i < 10; i++)
    {
        strcpy_s(b[i].author, "Gigel");
        strcpy_s(b[i].title, "Some title");
        b[i].id = i;

        cout << "Autor: " << b[i].author << endl;
        cout << "Titlu: " << b[i].title << endl;
        cout << "Id: " << b[i].id << endl<<endl;
    }
}

int main()
{
    cout << endl << "----------VARIABILE LOCALE SI GLOBALE-----------------" << endl;
    local_and_global_variables();

    cout << endl << "----VARIABILE LOCALE SI GLOBALE CU ACELASI NUME-------" << endl;
    local_vs_global_same_name();

    cout << endl << "----------INCREMENTARE CU OPERATOR SUFIXAT------------" << endl;
    increment_suffix();


    cout << endl << "----------INCREMENTARE CU OPERATOR PREFIXAT-----------" << endl;
    increment_prefix();


    cout << endl << "----------STRUCTURA DE CONTROL: CAZ PAR DIVIZIBIL CU 3-----------" << endl;
    control_structure(6);

    cout << endl << "----------STRUCTURA DE CONTROL: CAZ PAR NEDIVIZIBIL CU 3-----------" << endl;
    control_structure(8);

    cout << endl << "----------STRUCTURA DE CONTROL: CAZ IMPAR-----------" << endl;
    control_structure(9);

    cout << endl << "----------STRUCTURA DE CONTROL PRESCURTATA: CAZ PAR DIVIZIBIL CU 3-----------" << endl;
    control_structure_short_form(6);

    cout << endl << "----------STRUCTURA DE CONTROL PRESCURTATA: CAZ PAR NEDIVIZIBIL CU 3-----------" << endl;
    control_structure_short_form(8);

    cout << endl << "----------STRUCTURA DE CONTROL PRESCURTATA: CAZ IMPAR-----------" << endl;
    control_structure_short_form(9);

    cout << endl << "----------STRUCTURA REPETITIVA WHILE-----------" << endl;
    repeat_while();

    cout << endl << "----------STRUCTURA REPETITIVA DO-WHILE-----------" << endl;
    repeat_do_while();

    cout << endl << "----------STRUCTURA REPETITIVA FOR-----------" << endl;
    repeat_for();

    cout << endl << "----------ITERAREA PRINTR-UN VECTOR-----------" << endl;
    iterate_array();

    cout << endl << "----------POINTERI-----------" << endl;
    pointers();

    cout << endl << "----------STRUCTURI-----------" << endl;
    structures();
    return 0;
}
