#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    float pi = 3.14;
    unsigned long edge, radius;
    double area, round, triangle;
    cout << "Nhap canh tam giac, ban kinh duong tron:  ";
    cin >> edge >> radius;
    while ((edge > 1000000000) || (radius > 1000000000) || (edge == 0) || (radius == 0))
    {
        cout << "Nhap lai canh tam giac, ban kinh duong tron: ";
        cin >> edge >> radius;
    }
    triangle = ((edge*edge)*sqrt(3))/4;
    round = radius * radius * pi;
    area = 1.0 * (3*triangle + round / 2);
    printf("%0.2lf", area);
    getch();
    return(0);

}