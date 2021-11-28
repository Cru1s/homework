#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double y1, y2;
    float pi, e, x;
    pi = 3.14;
    e = 2.71;
    cout << "Nhap x: ";
    cin >> x;
    while ((x > 1000000000) || (x < 0))
    {
        cout <<"Nhap lai x: ";
        cin >> x;
    }
    y1 = (4*(x*x + 10*x*sqrt(x) + 3*x + 1)) * 1.0;
    y2 = ((sin(pi*x*x) + sqrt(x*x + 1))/(pow(e,2*x)+cos((pi/4)*x))) * 1.0;
    printf("%.10f %.10f", y1, y2); 
    getch();
    return 0;

}

//Test case 1
//Input: 10 
//Output: 1788.9110794067 0.0000000217

//Test case 2
//Input: 5
//Output: 611.2136020660 0.0002405389

//Test case 3
//Input: 15
//Output: 3407.7900733948 0.0000000000