#include <iostream>
using namespace std;
int main()
{
    int u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, u12, u13, u14, u15, u16, u17, u18, u19, u20;
    int m;
    cout << "1x1=1 \n 2x2=2 \n 3x3=3 \n 4x4=4" << endl;

    cout << "Enter Matrix Dimension = ";

    cin >> m;
    if (m == 1)
    {
        cout << "Enter Matrix Element (1,1) = ";
        cin >> u1;
        cout << " Original Matrix is = | " << u1 << " |";
    }
    else if (m == 2)
    {
        cout << "Enter Matrix Element (1,1) = ";
        cin >> u1;
        cout << "(1,2) = ";
        cin >> u2;
        cout << "(2,1) = ";
        cin >> u3;
        cout << "(2,2) = ";
        cin >> u4;
        cout << " Original Matrix is = | " << u1 << " " << u2 << " |" << endl;
        cout << "                      | " << u3 << " " << u4 << " |" << endl;

        cout << "Transverse of Matrix :- " << endl;
        cout << "| " << u1 << " " << u3 << " |" << endl;
        cout << "| " << u2 << " " << u4 << " |" << endl;
    }
    else if (m == 3)
    {
        cout << "Enter Matrix Element (1,1) = ";
        cin >> u1;
        cout << "(1,2) = ";
        cin >> u2;
        cout << "(1,3) = ";
        cin >> u3;
        cout << "(2,1) = ";
        cin >> u4;
        cout << "(2,2) = ";
        cin >> u5;
        cout << "(2,3) = ";
        cin >> u6;
        cout << "(3,1) = ";
        cin >> u7;
        cout << "(3,2) = ";
        cin >> u8;
        cout << "(3,3) = ";
        cin >> u9;
        cout << " Original Matrix is = | " << u1 << " " << u2 << " " << u3 << " |" << endl;
        cout << "                      | " << u4 << " " << u5 << " " << u6 << " |" << endl;
        cout << "                      | " << u7 << " " << u8 << " " << u9 << " |" << endl;

        cout << "Transverse of Matrix :- " << endl;
        cout << "| " << u1 << " " << u4 << " " << u7 << " |" << endl;
        cout << "| " << u2 << " " << u5 << " " << u8 << " |" << endl;
        cout << "| " << u3 << " " << u6 << " " << u9 << " |" << endl;
    }
    else if (m == 4)
    {
        //    cout<<"Enter Matrix Element (1,1) = ";
        //    cin>>u1;
        //    cout<<"(1,2) = ";
        //    cin>>u2;
        //    cout<<"(1,3) = ";
        //    cin>>u3;
        //    cout<<"(2,1) = ";
        //    cin>>u4;
        //    cout<<"(2,2) = ";
        //    cin>>u5;
        //    cout<<"(2,3) = ";
        //    cin>>u6;
        //    cout<<"(3,1) = ";
        //    cin>>u7;
        //    cout<<"(3,2) = ";
        //    cin>>u8;
        //    cout<<"(3,3) = ";
        //    cin>>u9;
        //     cout<<" Original Matrix is = | "<<u1<<" "<<u2<<" "<<u3<<" |"<<endl;
        //     cout<<"                      | "<<u4<<" "<<u5<<" "<<u6<<" |"<<endl;
        //     cout<<"                      | "<<u7<<" "<<u8<<" "<<u9<<" |"<<endl;

        //     cout<<"Transverse of Matrix :- "<<endl;
        //    cout<<"| "<<u1<<" "<<u4<<" "<<u7<<" |"<<endl;
        //     cout<<"| "<<u2<<" "<<u5<<" "<<u8<<" |"<<endl;
        //     cout<<"| "<<u3<<" "<<u6<<" "<<u9<<" |"<<endl;
        cout << "Coming Soon :)";
    }
    cout << endl;
    system("pause");

    return 0;
}