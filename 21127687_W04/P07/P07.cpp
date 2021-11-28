#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n:";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap lai so nguyen n: ";
        cin >>  n;
    }
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + (float)i/(i+1);
    }
    printf("%0.2f", s);
    getch();
    return(0);
}