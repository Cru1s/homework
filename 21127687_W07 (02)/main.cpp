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
    cout << "Nhap bai lam can kiem tra(1 - 10): ";
    cin >> name;
    switch (name)
{   
    case 1:
    {
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
        input(a, n);
        P04(a, n);
        break;
    }
    case 4:
    {
        input(a,n);
        P05(a, n);
        output(a, n);
        break;
    }
    case 5:
    {
        input(a, n);
        P06(a, n);
        break;
    }
    case 6:
    {
        input(a, n);
        break;
    }
}
    getch();
    return(0);
}
