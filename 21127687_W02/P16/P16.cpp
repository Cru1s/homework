#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int sum, n;
    cout << "Nhap bien so xe: ";
    cin >> n;
    while ((n < 10000) || (n > 99999))
    {
        cout << "Nhap lai bien so xe: ";
        cin >> n;
    } 
    sum = 0;
    while (n > 0)
    {
        n = n % 10;
        sum = sum + n;
        n = n / 10;
    }
printf("%d", sum % 10);
getch();
return 0;

}