#include <iostream>
using namespace std;
int main()
{
    int l, b, pl = 0, pb = 0;
    cout << "Enter Length & Breadth of Square : ";
    cin >> l;
    b = l;

    cout << endl;
    while (pb < b)
    {
        while (pl < l)
        {

            cout << " * ";
            pl++;
        }
        pl = 0;
        cout << endl;
        pb++;
    }
    cout << endl;
    system("pause");

    return 0;
}