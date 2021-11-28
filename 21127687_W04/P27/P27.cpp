#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n, count;
    cout << "Nhap so n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap so n: ";
        cin >> n;
    }
    count = 0;
    for(int i = 1; i <= n; i++)
    {
        if ((n % i == 0) && (i % 2 == 0))
        count++;
    }
    printf("%d", count);
    getch();
    return(0);
}