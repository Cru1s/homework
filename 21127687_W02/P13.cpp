#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double P, S, H;
    float a, b, c;
    cout << "Vui long nhap so trong khoang 0 < a,b,c <= 10^9!";
    cout << "Nhap do dai 3 canh tam giac: ";
    cin >> a >> b >> c;
    while ((a + b <= c) || (b + c <= a) || (a + c <= b) || (a < 0) || (b < 0) || (c < 0))
    {
        cout << " Nhap lai do dai 3 canh tam giac: ";
        cin >> a >> b >> c;
    } 
    P = (a + b + c); 
    H = P/2;
    S = sqrt(H*(H-a)*(H-b)*(H-c));
    printf("%.2f %.2f", P,S);
    getch(); 
    return 0;

}