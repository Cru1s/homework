#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    return 1;
    else 
    {
        int p = 1;
        for (int i = 1; i <= n; i++)
        {
            p = p * i;
        }
    return p;
    }
}

int main()
{
    int n;
    double result = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (( n <= 0)|| (n > 1000000000))
    {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }
    for(int i = 1; i <= n; i++)
    {
        result = pow(factorial(i) + result, 1.0/(i + 1));
    }
    printf("%.2lf", result);
    getch();
    return(0);
}