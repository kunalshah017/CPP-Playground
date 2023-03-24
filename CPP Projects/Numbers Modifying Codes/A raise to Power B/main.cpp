#include <iostream>
using namespace std;
int main()
{
    int ub, up, c, a = 1;
    cout << "Enter the Base Number = ";
    cin >> ub;
    cout << "Enter the Power Number = ";
    cin >> up;
    for (c = 1; c <= up; c++)
    {
        a = a * ub;
    }
    cout << "Solution is = " << a << endl;

    system("pause");
    return 0;
}