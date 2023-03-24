#include <iostream>
using namespace std;

int main()
{

    int u;
    int l, m, n;

    cout << "Number of lines - ";
    cin >> u;
    for (l = 0; l <= u; l++)
    {

        for (n = u - l; n <= u; n++)
            cout << " ";
        for (m = u - l; m > 0; m--)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    system("pause");

    return 0;
}