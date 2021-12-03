//Ho va Ten: Phan Huy Duc Tai
//MSSV 21127687
//Lop 21CLC07

#include <iostream>
#include <conio.h>
#include <math.h>
#include "array.h"
#define MAX 10000
using namespace std;

int main()
{
    int n, m, name;
    int a[MAX];
    int b[MAX];
    int c[2*MAX];
    cout << "Nhap bai lam can kiem tra(1 - 10): ";
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
        input(a,n);
        P02(a, n);
        break;
    }
    case 3:
    {
        cout << "            P02: " << endl;        
        input(a, n);
        P04(a, n);
        break;
    }
    case 4:
    {
        cout << "            P05: " << endl;
        input(a,n);
        P05(a, n);
        output(a, n);
        break;
    }
    case 5:
    {
        cout << "            P06: " << endl;
        input(a, n);
        P06(a, n);
        break;
    }
    case 6:
    {
        cout << "            P09: " << endl;
        input(a, n);
        P09(a, n);
        break;
    }
    case 7:
    {
        cout << "            P12: " << endl;
        input(a, n);
        P12(a, n);
        break;
    }
    case 8:
    {
        cout << "            P15: " << endl;
        input(a, n);
        P15(a, n);
        break;
    }
    case 9:
    {
        cout << "            P25: " << endl;
        input(a, n);
        input2nd(b, m);
        P25(a, n, b, m, c);
        break;
    }
    case 10:
    {
        cout << "            P26: " << endl;
        input(a, n);
        input2nd(b, m);
        P26(a, n, b, m, c);
        break;
    }
    case 0:
    {
        cout << "Ban da thoat khoi menu!" << endl;
        cout << "Have a nice day!" << endl;
        break;
    }
    default:
    {
        cout << "So da nhap khong hop le!"; 
        cout << "vui long khoi tao lai chuong trinh va nhap lai so thu tu bai tap (1 - 10)!";
    }
}
    printf(" \n");
    system("pause");
    return(0);
}
