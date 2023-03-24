#include <iostream>
using namespace std;
int main()
{
    int u;
    cout << "Enter Height of Triangle : ";
    cin >> u;
    int h, k, n, c = 0, l;
    for (k = u; k >= 0; k--)
    {
        c++;
        for (h = 1; h <= k; h++)
        {
            cout << " ";
        }

        for (n = 0; n < c; n++)
        {

            cout << "*";
        }

        for (l = 0; l <= c - 2; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}