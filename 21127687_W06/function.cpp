#include <iostream>
#include <conio.h>
#include <math.h>
#include "function.h"
using namespace std;

int input(int& n)
{
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while ((n <= 0) || (n > 1000000000))
     {
         cout << "Nhap so nguyen duong n: ";
         cin >> n;
     }
    return n;
}

int first(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}


int second(int n)
{
    int sum = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        int d = i % 10;
        if (d % 2 == 0)
        {
            sum = sum + d;
        }
    }
    return sum;
}

int third(int n)
{
    int max = 0;
    for (int i = n; i > 0; i = i / 10)
    {
        int d = i % 10;
        if(d >= max)
        {
            max = d;
        }
    }
    return max;
}

bool fourth(int n)
{
    for(int i = n; i > 0; i = i / 10)
    {
        int d = i % 10;
        if (d % 2 == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

bool fifth(int n)
{
    for(int i = n; i > 0; i = i / 10)
    {
        int d = i % 10;
        int prev = ((i / 10) % 10);
        if (d > prev)
        {
            return false;
            break;
        }
    }
    return true;
}

float power(float x, int n)
{
    float p = 1.0;
    for(int i = 1; i <= n; i++)
    {
        p = p * x;
    }
    return p;
}
float sixth(float x, int n)
{
    float sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + (double)(power((-1),(i + 1))*power(x,i));
    }
    return sum;
}

long sumstring(int n)
{
    long s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}
float seventh(float x, int n)
{
    float sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + (double)(power(-1.0,i)*(power(x,i)/(sumstring(i))));
    }
    return sum;
}

bool eighth(int n)
{
    for(int i = n; i > 0; i = i / 2)
        {
            int d = i % 2;
            if (d != 0)
            {
                return false;
                break;
            }
        }
    return true;
}

bool isLeapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}
int countLeapYear(int year)
{
    int count = 0;
    for (int i = 1970; i <= year; i++)
    {
        if (isLeapYear(i))
        {
            count++;
        }
    }
    return count;
}
void check(int day, int month, int year)
{
    if (month == 2)
                {
                   if (isLeapYear(year))
                   {
                       while (day > 29)
                       {
                           cout << "Ngay nhap khong hop le!\n";
                           cout << "Nhap lai ngay: ";
                           cin >> day;
                       }
                   }
                   else 
                   {
                       while (day > 28)
                       {
                           cout << "Ngay nhap khong hop le!\n";
                           cout << "Nhap lai ngay: ";
                           cin >> day;
                       }
                   }
                }
    else if ((month == 4) || (month  == 6) || (month == 9) || (month == 11))
            {
                while (day > 30)
                {
                    cout << "Ngay nhap khong hop le!\n";
                    cout << "Nhap lai ngay: ";
                    cin >> day;
                }
            }
    else 
            {
                while (day > 31)
                {
                    cout << "Ngay nhap khong hop le!\n";
                    cout << "Nhap lai ngay: ";
                    cin >> day;
                }
            }
}
long monthcheck(int month, int year)
{
    long maxday;
    if (month == 2)
    {
        if(isLeapYear(year))
        {
            maxday = 29;
        }
        else maxday = 28;
    }
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8)  || (month == 10) || (month == 12))
    {
        maxday = 31;
    }
    if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        maxday = 30;
    }
    return maxday;
}
int ninth(int day, int month, int year)
{
    int ydistance = abs(year - 1970);
    int distance = ((ydistance) * 365) + day;
    int count = 0;
    for(int i = 1; i < month; i++)
    {
        count = count + monthcheck(i, year);     
    }
    return distance + count + countLeapYear(year);  
}

bool isPrime(int n)
{
    int count = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        count++;
    }
    if (count > 0)
    return false;
    return true;
}
void tenth(int n)
{
    int count = 0;
    for (int i = 2; i <= n;i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int solveQuadratic(double a, double b, double c, double &x1, double &x2)
{
    float delta = b*b - 4*a*c;
    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        x1 = x2 = (double)(-b/(2*a));
        return 1;
    }
    else
    {
        x1 = (double)(-b + sqrt(delta))/(2*a);
        x2 = (double)(-b - sqrt(delta)/(2*a));
        return 2;
    }
}

void tomorrow(int day1, int month1, int year1, int &day2, int &month2, int &year2)
{
    if (month1 == 12)
            {
                if (day1 == 31)
                {
                    day2 = 1;
                    month2 = 1;
                    year2 = year1 + 1;
                }
                else 
                {
                    day2 = day1 + 1;
                    month2 = month1;
                    year2 = year1;
                }
            }
    else if (month1 == 2)
    {
        if (isLeapYear(year1))
        {
            if (day1 == 29)
            {
                day2 = 1;
                month2 = month1 + 1;
                year2 = year1;
            }
            else
            {
                day2 = day1 + 1;
                month2 = month1;
                year2 = year1;
            }
        }
        else 
        {
            if (day1 == 28)
            {
                day2 = 1;
                month2 = month1 + 1;
                year2 = year1;
            }
            else
            {
                day2 = day1 + 1;
                month2 = month1;
                year2 = year1;
            }  
        }
    }
    else if ((month1 == 1) || (month1 == 3) || (month1 == 5) || (month1 == 7) || (month1 == 8)  || (month1 == 10))
    {
        if (day1 == 31)
            {
                day2 = 1;
                month2 = month1 + 1;
                year2 = year1;
            }
        else 
            {
                day2 = day1 + 1;
                month2 = month1;
                year2 = year1;
            }
    }
    else if ((month1 == 4) || (month1 == 6) || (month1 == 9) || (month1 == 11))
    {
        if (day1 == 30)
        {
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else 
        {
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    printf("%d %d %d\n", day2, month2, year2);
}