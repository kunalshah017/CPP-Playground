#include <iostream>
using namespace std;

class Bsort
{

public:
    int a[10], b, c;

    void sort();
    void print();
    void swap()
    {
        int temp;
        temp = a[b];
        a[b] = a[b + 1];
        a[b + 1] = temp;
    }
};

void Bsort ::sort()
{

    for (c = 0; c < 10; c++)
    {
        for (b = 0; b < 10 - c; b++)
        {
            if (a[b] > a[b + 1])
            {
                swap();
            }
        }
    }
}

void Bsort ::print()
{
    for (b = 0; b < 10; b++)
    {
        cout << a[b] << endl;
    }
}
int main()
{
    int b;
    cout << "Enter the Array = " << endl;
    Bsort obj;
    for (b = 0; b < 10; b++)
    {
        cin >> obj.a[b];
    }

    cout << "Sorted Array = " << endl;
    obj.sort();
    obj.print();

    cout << endl;
    system("pause");

    return 0;
}