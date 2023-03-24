#include <iostream>
using namespace std;
int main()
{
    int u, p = 0;
    cout << "Enter a Number = ";
    cin >> u;
    while (u > 0)
    {
        p = p * 10;
        p = p + u % 10;
        u = u / 10;
    }
    cout << "Reversed Number is = " << p << endl;
    system("pause");
    return 0;
}