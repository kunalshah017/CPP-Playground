#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    system("cls");
    int i = 10;
    int t = 1;
    cout << "Rocket Launching Countdown - " << endl;
    cout << endl;
    for (i = 10; i >= 0; i--)
    {
        Sleep(1000); // This Line Delays the compiler , (Time) is in (ms)
        cout << i << endl;
    }

    cout << "\n\n\nLAUNCCHHHHHHHH !!!!! ";
    Sleep(2000);

    while (t == 1)
    {
        cout << "*******************************************************************************************";
    }
    getch();
    return 0;
}
