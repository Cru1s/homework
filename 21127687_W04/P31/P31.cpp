#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n, count;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }
    count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        count++;
    }
    if (count > 2)
    printf("NO");
    else
    printf("YES");
    getch();
    return(0);
}