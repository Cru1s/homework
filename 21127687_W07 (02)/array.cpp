#include <iostream>
#include <conio.h>
#include <math.h>
#include "array.h"
#define MAX 100
using namespace std;

void input(int a[], int &n)
{
    cout << "Nhap so luong n phan tu mang: ";
    cin >> n;
    while ((n < 0) || (n > MAX))
    {
        cout << "Nhap so luong n phan tu mang: ";
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a[" << i << "] = ";
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}

int maxEven(int a[], int n)
{
    int i, d, maxPlace;
    for(i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            d = i;
            break; 
        }
    }
    if (i == n)
    return -1;
    maxPlace = d;
    for (int i = d + 1; i < n; i++)
    {
        if ((a[i] % 2 == 0) && (a[i] >= a[maxPlace]))
        {
            maxPlace = i;
        }
    }
    return a[maxPlace];
}
int minOdd(int a[], int n)
{
    int i, d, minPlace;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            d = i;
            break; 
        }
    }
    if (i == n)
    return -1;
    minPlace = d;
    for (int i = d + 1; i < n; i++)
    {
        if ((a[i] % 2 != 0) && (a[i] <= a[minPlace]))
        {
            minPlace = i;
        }
    }
    return a[minPlace];
}
void P01(int a[], int n)
{
    int result1 = maxEven(a, n);
    int result2 = minOdd(a, n);
    if (maxEven(a, n) == -1)
    cout << "Khong co so chan trong mang!";
    if (minOdd(a, n) == -1)
    cout << "Khong co so le trong mang!";
    if ((maxEven(a, n) != -1) && (minOdd(a, n) != -1))
    {
        cout << result1 << " " << result2;
    }
}

void P02(int a[], int n)
{
    int count = 0;
    int sum = 0;
    float average;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    average = ((float)sum/count);
    printf("%0.2f", average);
}

bool isPrime(int n)
{
    if (n == 1)
    return false;
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
void P04(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        cout << a[i] << " ";
    }
}

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
void P05(int a[], int n)
{
for (int i = 0; i < n - 1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if ((a[i] > a[j]) && (a[i] % 2 == 0) && (a[j] % 2 ==0))
        {
            swap(a[i], a[j]);
        }
    }
}
}

bool mangtang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                return false;
                break;
            }
        }
    }
    return true;
}
bool manggiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                return false;
                break;
            }
        }
    }
    return true;
}
void P06(int a[], int n)
{
    if (manggiam(a, n) && mangtang(a,n) == false)
    {
        cout << "Mang giam";
    }
    else if (mangtang(a, n) && (manggiam(a,n) == false))
    {
        cout << "Mang tang";
    }
    else
    {
        cout << "Khong tang khong giam";
    }
}



