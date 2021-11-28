#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long money;
    int du, a, b, c, d, e, f, g, h, i, z;
    cout << "Nhap so tien: ";
    cin >> money;
    while ((money > 1000000000)) || (money == 0)
    {
        cout << "Nhap lai so tien: ";
        cin >> money;
    }
    z = money / 500000;
    du = money % 500000;
    a = du / 200000;
    du = du % 200000;
    b = du / 100000;
    du = du % 100000;
    c = du / 50000;
    du = du % 50000;
    d = du / 20000;
    du = du % 20000;
    e = du / 10000;
    du = du % 10000;
    f = du / 5000;
    du = du % 5000;
    g = du / 2000;
    du = du % 2000;
    h = du / 1000;
    du = du % 1000;
    i = du / 500;
    du = du % 500;
    printf("500000: %d\n", z);
    printf("200000: %d\n", a);
    printf("100000: %d\n", b);
    printf("50000 : %d\n", c);
    printf("20000 : %d\n", d);
    printf("10000 : %d\n", e);
    printf("5000  : %d\n", f);
    printf("2000  : %d\n", g);
    printf("1000  : %d\n", h);
    printf("500   : %d\n", i);
    getch();
    return 0;
    

}