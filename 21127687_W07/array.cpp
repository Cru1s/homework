#include <iostream>
#include <conio.h>
#include <math.h>
#include "array.h"
#define MAX 10000
using namespace std;

void input(int a[], int &n)
{
    cout << "Nhap so luong n phan tu mang a[]: ";
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
void input2nd(int b[], int &m)
{
    cout << "Nhap so luong m phan tu mang b[]: ";
    cin >> m;
    while ((m <= 0) || (m > 1000000000))
    {
        cout << "Nhap so luong m phan tu mang: ";
        cin >> m;
    }
    for (int i = 0; i < m; i++)
    {
        cout << "Nhap phan tu b[" << i << "] = ";
        cin  >> b[i]; 
    } 
}

void output(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
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

int arraycount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
    }
    return count;
}
void P09(int a[], int n)
{
    int b[n];
    int x = 1;
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        int countSame = 0;
        for(int j = 0; j < x; j++)
        {
            if (a[i] == a[j])
                countSame++;
        }
        if (countSame == 0)
        {
            b[x] = a[i];
            x++;
        }
    }
    cout << arraycount(b,x);
}

void P12(int a[], int n)
{
    int max = a[0];
    int imax = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            imax = i;
        }
    }
    int max2 = a[0];
    for (int i = 0; i < imax; i++)
    {
        if (a[i]>= max2)
        {
            max2 = a[i];
        }
    }
    cout << max2;
}

void P15(int a[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        swap(a[i], a[n - i - 1]);
    }
    output(a, n); 
}

void mergearray(int a[], int n, int b[], int m, int c[])
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    int j = 0;
    for (int i = n; i < n + m; i++)
    {
        c[i] = b[j];
        j++;
    }
}
void P25(int a[], int n, int b[], int m, int c[])
{
    mergearray(a, n, b, m, c);
    for (int i = 0; i < n + m; i++)
    {
        for (int j = i + 1; j < n + m; j++)
        {
            if (c[i] >= c[j])
            {
                swap(c[i], c[j]);
            }
        }
    }
    output(c, n+m);
}

bool ifRepeat(int a[], int n, int x)
{
    for (int i = x; i >= 0; i--)
    {
        if (a[i] == a[x])
        {
            return true;
        }
    }
    return false;
}
int repeatCount(int a[], int n, int x)
{
    int count = 0;
    for (int i = x + 1; i < n; i++)
    {
        if (a[i] == a[x])
        {
            count++;
        }
    }
    return count;
}
void P26(int a[], int n, int b[], int m, int c[])
{
    mergearray(a, n, b, m, c);
    int h = n + m;
    for (int i = 0; i < n; i++)
    {
        if (ifRepeat(c, h, i) == true)
        {
            int count = repeatCount(c, h, i);
            if (count != 1)
            {
                cout << c[i] << " ";
            }
        }
    }
}











