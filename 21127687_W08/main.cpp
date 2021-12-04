#include <iostream>
#include <math.h>
#include <conio.h>
#include "array.h"
#define MAX 100
using namespace std;

int main()
{
    int n, m;
    int exercise;
    float b[MAX][MAX];
    int a[MAX][MAX];
    cout << "Nhap bai can kiem tra (1 - 3): ";
    cin >> exercise;
    switch (exercise)
    {
        case 1:
        {
            cout << "             Exercise 315" << endl;
            inputfloat(b, n, m);
            int result = E315(b, n, m);
            cout << "Gia tri lon nhat trong ma tran so thuc la: " << result;
            break;
        }
        case 2: 
        {
            cout << "              Exercise 316" << endl;
            inputint(a, n, m);
            if (E316(a, n, m) == true)
            {
                cout << "Ma tran ton tai so nguyen co gia tri chan nho hon 2015";
            }
            else cout << "Ma tran khong thoa yeu cau de bai!";
            break;
        }
        case 3: 
        {
            cout << "               Exercise 317" << endl;
            inputint(a, n, m);
            E317(a, n, m);
            break;
        }
        case 0:
        {
            cout << "Ban da thoat khoi menu!" << endl;
            cout << "Have a nice day!";
        }
        default:
        {
            cout << "So bai da nhap khong hop le!" << endl;
            cout << "Vui long khoi dong lai menu!";
        }
    }
    cout << endl;
    system("pause");
    return(0);
}