#include <iostream>
using namespace std;
int main()
{
    int u, c = 0, p;
    cout << "Enter A Number = ";
    cin >> u;
    while (u > 0)
    {
        p = u % 10;
        c = c + p;
        u = u / 10;
    }
    cout << "Sum of Digits are = " << c << endl;
    system("pause");
    return 0;
}