#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double power(float x, int n)
{
    double s;
    double p = 1;
    for(int i = 1; i <= n; i++)
    {
        p = p*x*x;
        s = p * x;
    }
    return s;
}


double factorial(int n)
{
    int p = 1;
    n = 2 * n + 1;
        for(int i = 1; i <= n; i++)
        {
            p = p * i;
        }
    return p;
}


int main()
{
    int n;
    float x;
    double result = 1;
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap so nguyen khong am n: ";
    cin >> n;
    while ((n < 0) || (n > 1000000000) || (x < -1000000000) || (x > 1000000000))
    {
        cout << "Nhap lai so nguyen khong am n: ";
        cin >> n;
        cout << "Nhap lai so thuc x: ";
        cin >> x;
    }
    if (n == 0)
        result = result + x;
    else
    { for (int i = 1; i <= n; i++)
      {
        result = result + (float)power(x, i)/factorial(i);
      }
    result = result + x;
    }
    printf("%0.2lf", result);
    getch();
    return(0);
}