#include <iostream>
using namespace std;

int main()
{

    int u;
    int l, m, n;

    cout << "Number of lines - ";
    cin >> u;
    for (l = 1; l <= u; l++)
    {

        for (n = u - l; n > 0; n--)
            cout << " ";
        for (m = 1; m <= l; m++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}