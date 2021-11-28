#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double km, hour, minute, second, pace, speed;
    cout << "Vui long nhap so lieu nam trong khoang 0 < x <= 10^9!";
    cout << "Nhap so lieu theo thu tu km - hour - minute - second: ";
    cin >> km >> hour >> minute >> second;
    minute = (hour * 60 + minute + second / 60) * 1.0;
    hour = minute / 60;
    pace = minute / km;
    speed = km / hour;
    printf("%0.2lf %0.2lf",pace, speed);
    getch();
    return(0);
}