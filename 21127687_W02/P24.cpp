#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double percent, quota, money;
    cout << "Nhap vao phan tram khuyen mai: ";
    cin >> percent;
    cout << "Nhap vao so tien hoan tra toi da: ";
    cin >> quota;
    while ((money < 0) || (quota < 0) || (money > 1000000000) || (quota > 1000000000))
    {
        cout << "Nhap lai phan tram khuyen mai: ";
        cin >> percent;
        cout << " Nhap lai so tien hoan tra toi da: ";
        cin >> quota;
    }
    money = 1.0 * (quota / (percent / 100));
    printf("%0.2lf", money);
    getch();
    return(0);
}