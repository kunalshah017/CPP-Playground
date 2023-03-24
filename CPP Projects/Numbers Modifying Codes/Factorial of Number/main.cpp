#include <iostream>
using namespace std;
int main()
{
    int u, f, a = 1;
    cout << "Enter a number = ";
    cin >> u;
    for (f = 1; f <= u; f++)
    {
        a = a * f;
    }
    cout << "\nFoctorial of " << u << " is = " << a << endl;
    system("pause");
    return 0;
}