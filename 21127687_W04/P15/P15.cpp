#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int sumn(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{
    int n;
    float result = 0;
    cout <<"Nhap so nguyen n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap lai so nguyen n: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        result = result + (float)1/(sumn(i));
    }
    printf("%0.2f", result);
    getch();
    return(0);
}