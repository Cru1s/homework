#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    long year;
    cout << "Nhap vao nam can tinh: ";
    cin >> year;
    while ((year <= 0) || (year > 1000000000))
    {
     cout << "Nhap lai nam can tinh: ";
     cin >> year;
    }
    if (year % 4 == 0)
    printf("Nam %ld la nam nhuan.", year);
    else 
    printf("Nam %ld khong phai la nam nhuan.", year);
    getch();
    return(0);
}

//Test case 1
//Input 2020
//Output Nam 2020 la nam nhuan

//Test case 2
//Input 2021
//Output Nam 2021 khong phai la nam nhuan