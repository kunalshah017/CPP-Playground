#include <iostream>
using namespace std;

int main()
{

    int u;
    int l = u, m = l;

    cout << "Number of Lines - ";
    cin >> u;

    for (l = u; l >= 1; l--)
    {
        for (m = l; m >= 1; m--)
        {
            cout << "* ";
        }
        cout << endl;
    }
cout<<endl;
system("pause");
    return 0;
}
