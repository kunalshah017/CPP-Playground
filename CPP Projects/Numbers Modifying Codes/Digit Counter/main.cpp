#include <iostream>
using namespace std;
int main()
{
    int u, c = 0;
    cout << "Enter a Number = ";
    cin >> u;
    while (u > 0)
    {
        u = u / 10;
        c++;
    }
    cout << "Number of Digits are = " << c << endl;
    system("pause");

    return 0;
}