#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
    {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("So %d co %d uoc so", n, count);
    getch();
    return(0);
}

//Test case 1
//Input 6
//Output 4

//Test case 2
//Input 12
//Output 5

//Test case 3
//Input 
//Output