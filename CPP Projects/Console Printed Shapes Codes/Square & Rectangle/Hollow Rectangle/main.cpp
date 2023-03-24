#include <iostream>
using namespace std;
int main()
{
    int l, b, pl, pb;
    cout << "Enter Length : ";
    cin >> l;
    cout << "Enter Breadth : ";
    cin >> b;
    int eb = b - 1;
    int h = l - 2, ph;
    for (pb = 1; pb <= b; pb++)
    {
        for (pl = 1; pl <= l; pl++)
        {
            if (pl == 1 || pb == 1 || pl == l || pb == b)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}