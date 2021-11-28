#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double result = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        result = sqrt(i + result);
    }
    printf("%0.2lf", result);
    getch();
    return(0);
}