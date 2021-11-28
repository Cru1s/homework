//Ho va Ten: Phan Huy Duc Tai
//MSSV 21127687
//Lop 21CLC07

#include <iostream>
#include <conio.h>
#include <math.h>
#include "array.h"
#define MAX 100
using namespace std;

int main()
{
    int n, name;
    int a[MAX];
    cout << "Nhap bai lam can kiem tra(1 - 3): ";
    cin >> name;
    switch (name)
{   
    case 1:
    {
        cout << "            P01: " << endl;
        input(a, n);
        P01(a, n);
        break;
    }
    case 2:
    {
        cout << "            P02: " << endl;
        input(a,n);
        P02(a, n);
        break;
    }
    case 3:
    {
        cout << "            P04: " << endl;
        input(a, n);
        P04(a, n);
        break;
    }
    case 0:
    {
        cout << "Ban da thoat khoi menu!" << endl;
        cout << "Have a nice day!" << endl;
        break;
    }
}
    getch();
    return(0);
}
