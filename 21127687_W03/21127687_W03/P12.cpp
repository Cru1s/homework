#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d, max, min;
    cout <<"Nhap 4 so nguyen a,b,c,d: ";
    cin >> a >> b >> c >> d;
    max = a;
    if (b >= a)
    {
        max = b;
    }
    if (c >= max)
    {
        max = c;
    }
    if (d >= max)
    {
        max = d;
    }
    min = a;
    if (b <= a)
    {
        min = b;
    }
    if (c <= min)
    {
        min = c;
    }
    if (d <= min)
    {
        min = d;
    }
    printf("%d %d", max, min);
    getch();
    return(0);
}

//Test case 1
//Input: 1 2 3 4
//Output: 4 1

//Test case 2
//Input: 2 5 7 12
//Output: 12 2

