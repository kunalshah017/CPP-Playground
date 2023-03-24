#include <iostream>
using namespace std;

int main()
{

    int u;
    int l = 1, m = 1;

    cout << "Number of Lines - ";
    cin >> u;
    system("cls");
    for (l = 1; l <= u; l++)
    {
        for (m = 1; m <= l; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout<<endl;
system("pause");
    return 0;
}
