//Ho va ten: Phan Huy Duc Tai
//MSSV: 21127687
//Lop 21CLC07

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

bool prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        count++;
    }
    if (count > 0)
    return false;
    return true;
}

int factorial(int n)
{
    int p = 1;
    for(int i = 1; i <= n; i++)
    {
        p = p*i;
    }
    return p;
}

double sn(int x, int n)
{
    double s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + (double)(pow(-1, i)) *  pow(x, i)/factorial(i);
    }
    return s;
}

int main()
{
    int id = 21127687;
    int y = 0;
    for (int i = id; i > 0; i = i / 10)
    {
        int d = i % 10;
        y = y * 10 + d;
    }
    printf("%d - Phan Huy Duc Tai \"21CLC07\" {%d}", id, y);
    long a = (2 * id + y);
    int n = 0;
    for (int i = 1; i <= a; i++)
    {
        if ((a % i == 0) && (prime(i) == true))
        {
            n++;
        }
    }
    printf("\nSo uoc nguyen to n la: %d", n);
    int tongchan = 0;
    int tongle = 0;
    for(int i = id; i > 0; i = i / 10 )
    {
        int d = i % 10;
        if (d % 2 == 0)
        {
            tongchan = tongchan + d;
        }
        else 
        tongle = tongle + d;
    }
    int x = tongchan - tongle;
    printf("\nx = %d", x);
    double answer = sn(x, n);
    printf("\nKet qua bieu thuc Sn = %0.2lf", answer);
    getch();
    return(0);
}