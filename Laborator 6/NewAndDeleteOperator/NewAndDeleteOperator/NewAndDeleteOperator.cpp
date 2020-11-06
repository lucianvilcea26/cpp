
#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
public:
    Student()
    {
        cout << "Constructor is called";
    }
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
    static void* operator new(size_t size)
    {
        cout << "Overloading new operator with size: " << size << endl;        
        void* p;
        p= malloc(size);
        return p;
    }

    static void operator delete(void* p)
    {
        cout << "Overloading delete operator " << endl;
        free(p);
    }
};

int main()
{
    Student* p = new Student("Stefan", 24);
    p->display();
    delete p;
    return 0;
}