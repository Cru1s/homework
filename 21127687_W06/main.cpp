//Ho va ten: Phan Huy Duc Tai
//MSSV: 21127687
//Lop 21CLC07

#include <iostream>
#include <conio.h>
#include <math.h>
#include "function.h"
using namespace std;

int main()
{
    int name;
    cout << "Nhap so bai tap can kiem tra (43, 47, 51, 55, 59, 63, 67, 71, 75, 79, 100, 101): ";
    cin >> name;
    switch (name)
    {
        case 43:
        {
            int n;
            input(n);
            int result = first(n);
            printf("So luong cac chu so trong n la: %d", result);
            getch();
            break;
        }
        case 47:
        {
            int n;
            input(n);
            int result = second(n);
            printf("Tong cac chu so chan co trong n la: %d", result);
            getch(); 
            break;
        }
        case 51:
        {
            int n;
            input(n);
            int result = third(n);
            printf("Chu so lon nhat co trong n la: %d", result);
            getch();
            break;
        }
        case 55:
        {
            int n;
            input(n);
            if (fourth(n))
            {
                printf("YES");
            }
            else printf("NO");
            getch();
            break;
        }
        case 59:
        {
            int n;
            input(n);
            if (fifth(n))
            {
                printf("YES");
            }
            else printf("NO");
            getch();
            break;
        }
        case 63:
        {
            int n;
            float x;
            cout << "Nhap so thuc x: ";
            cin >> x;
            while ((x < -1000000000) || (x > 1000000000))
            {
                cout <<"Nhap so thuc x: ";
                cin >> x;
            }
            cout << "Nhap so nguyen duong n: ";
            cin >> n;
            while ((n <= 0) || (n > 1000000000))
            {
               cout << "Nhap so nguyen duong n: ";
               cin >> n;
            }
            float result = sixth(x, n);
            printf("Tong day so S(x,n) la: %0.2f", result);
            getch();
            break;
        }
        case 67:
        {
            int n;
            float x;
            cout << "Nhap so thuc x: ";
            cin >> x;
            while ((x < -1000000000) || (x > 1000000000))
            {
                cout <<"Nhap so thuc x: ";
                cin >> x;
            }
            cout << "Nhap so nguyen duong n: ";
            cin >> n;
            float result = seventh(x, n);
            printf("Tong day so S(x,n) la: %0.2f", result);
            getch();
            break;
        }
        case 71:
        {
            int n;
            input(n);
            if (eighth(n))
            {
                printf("YES");
            }
            else printf("NO");
            getch();
            break;
        }
        case 75:
        {
            int day, month, year;
            cout << "Nhap ngay: ";
            cin >> day;
            cout << "Nhap thang: ";
            cin >> month;
            cout << "Nhap nam: ";
            cin >> year;
            check(day, month, year); 
            long result = ninth(day, month, year);
            printf("%ld", result);
            getch();   
            break;                                         
        }
        case 79:
        {
            int n;
            input(n);
            tenth(n);
            getch();
            break;
        }
        case 100: 
        {
            double a, b, c, x1, x2;
            cout << "Nhap he so a, b, c: ";
            cin >> a >> b >> c;
                while (a == 0)
                {
                    cout << "He so nhap khong hop le!" << endl;
                    cout << "Nhap lai he so a: ";
                    cin >> a;
                }
            if (solveQuadratic(a,b,c,x1,x2) == 0)
            {
                cout << "Phuong trinh vo nghiem";
            }
            else if (solveQuadratic(a,b,c,x1,x2) == 1)
            {
                printf("Phuong trinh co nghiem kep x1 = x2 = %0.2lf", x1);
            }
            else if (solveQuadratic(a,b,c,x1,x2) == 2)
            {
                printf("Phuong trinh co hai nghiem phan biet x1 = %0.2lf\n", x1);
                printf("                                     x2 = %0.2lf\n", x2);
            }
            getch();
            break;
        }
        case 101:
        {
            int day1, day2, month1, month2, year1, year2;
            cout << "Nhap ngay, thang, nam can tinh: ";
            cin >> day1 >> month1 >> year1;
            check(day1, month1, year1);
            tomorrow(day1, month1, year1, day2, month2, year2);
            getch();
            break;
        }
        default: 
        {
            cout << "So bai nhap khong hop le!" << endl;
            cout << "Vui long khoi dong lai chuong trinh!" << endl;
            getch();
            break;
        }
    }
    return(0);
}







