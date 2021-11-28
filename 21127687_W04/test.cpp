#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

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
    double answer = sn(2, 4);
    printf("%0.2lf", answer);
    getch();
    return(0);
}