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
        cout << "Foctorial of " << f << " is = " << a << endl;
    }
    return 0;
}