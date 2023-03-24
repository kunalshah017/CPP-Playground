#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    system("cls");
    string name, age, hobby;
    cout << "\n\nHello There I am an AI that can do noting\n\n";

    cout << "So first of tell me your name : ";
    getline(cin, name);

    cout << "\nCan you tell me where do you live : ";
    getline(cin, age);

    cout << "\nAnd one last question what is your hobby : ";
    getline(cin, hobby);

    cout << "\n\n--------------------------------------LOADING--------------------------------------------------\n\n";

    cout << "\n\nsurprise your name is : " << name;

    cout << "\n\nAnd You live on : " << age;

    cout << "\n\nlazy persons like you can do --> " << hobby;

    cout << "\n\n\n    ";
    getch;
    return 0;
}