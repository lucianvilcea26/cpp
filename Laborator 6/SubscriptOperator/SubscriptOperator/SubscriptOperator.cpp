#include <iostream>
using namespace std;

class Numbers {
private:
    int* ptr;
    int size;
public:
    Numbers(int* p, int s)
    {
        size = s;
        ptr = NULL;
        if (s != 0) {
            ptr = new int[s];
            for (int i = 0; i < s; i++)
                ptr[i] = p[i];
        }
    }

    ~Numbers()
    {
        delete[] ptr;
    }

    int& operator[](int index)
    {
        if (index >= size) {
            cout << "Index out of bounds";
            exit(0);
        }
        return ptr[index];
    }

    void print() 
    {
        for (int i = 0; i < size; i++)
            cout << ptr[i] << " ";
        cout << endl;
    }
};

int main()
{
    int a[] = { 1, 2, 3, 4 };
    Numbers x(a, 4);
    x[2] = 6;
    x.print();
    x[8] = 6;
    return 0;
}