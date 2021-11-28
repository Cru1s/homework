#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long a, b, c;
    cout << "Nhap 3 so a, b, c: ";
    cin >> a >> b >> c;
    while ((a > 1000000000) || (b > 1000000000) || (c > 1000000000) || (a == 0) || (b == 0) || ( c == 0))
    {
        cout << "Nhap lai 3 so a, b, c: ";
        cin >> a >> b >> c;
    }
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("%d %d %d",a,b,c);
    getch();
    return(0);


}