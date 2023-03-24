#include <iostream>
using namespace std;
int main()
{
    int l, b, pl = 0, pb = 0, n = 1;
    cout << "Enter Length of Square : ";
    cin >> l;

    cout << "Enter Breadth of Square : ";
    cin >> b;
    cout << endl;
    while (pb < b)
    {
        while (pl < l)
        {

            cout << " " << n << " ";
            pl++;
            n++;
        }

        pl = 0;

        cout << endl;
        pb++;
        n = pb + 1;
    }
    cout << endl;
    system("pause");

    return 0;
}