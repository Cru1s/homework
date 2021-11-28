//Phan Huy Duc Tai
//21127687
//21CLC07

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double s = 0;
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    while ((n < 0) || (n > 1000000000))
    {
        cout <<"Nhap lai so n: ";
        cin >> n;
    } 
    for (int i = 1; i <= n; i++)
    {
        s = s + 1.0/i;
    }
    printf("%0.2lf", s);
    getch();
    return(0);
}

//Test case 1
//Input 5
//Output 2.28

//Test case 2
//Input 3
//Output 1.83

//Test case 3
//Input 69
//Output 