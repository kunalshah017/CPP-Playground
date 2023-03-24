#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;

    cout << "Enter a value = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum = " << sum << endl;
    system("pause");
    return 0;
}