#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n, s, p;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    while ((n<=0) || (n>1000000000))
    {
        cout << "nhap lai so nguyen n: ";
        cin >> n;
    }
    s = 0;
    p = 1;
    for(int i = 1; i <= n; i++)
    {
        p = p*i;
        s = s + p;
    }
    printf("%0.2d", s);
    getch();
    return(0);
}