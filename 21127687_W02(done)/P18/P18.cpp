#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long a, b;
    cout << "Nhap hai so a, b: ";
    cin >> a >> b;
    while ((a > 1000000000) || (b > 100000000) || (a == 0) || (b == 0))
    {
        cout << "Nhap lai hai so a, b: ";
        cin >> a >> b;
    }
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    getch();
    return 0;
}

//Test case 1
//Input:3 5
//Output: 5 3

//Test case 2
//Input:4 6
//Output:6 4

//Test case 3
//Input:69 420
//Output: 420 69