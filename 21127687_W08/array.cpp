#include <iostream>
#include <math.h>
#include <conio.h>
#include "array.h"
#define MAX 100
using namespace std;

void inputint(int a[MAX][MAX], int &n, int &m)
{
    cout << "Nhap so dong: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    while ((n <= 0) || (n > MAX) || (m <= 0) || (m > MAX))
    {
        cout << "Nhap so dong: ";
        cin >> n;
        cout << "Nhap so cot: ";
        cin >> m;     
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}
void inputfloat(float b[MAX][MAX], int &n, int &m)
{
    cout << "Nhap so dong: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    while ((n <= 0) || (n > MAX) || (m <= 0) || (m > MAX))
    {
        cout << "Nhap so dong: ";
        cin >> n;
        cout << "Nhap so cot: ";
        cin >> m;     
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
}


float E315(float b[MAX][MAX], int n, int m)
{
    float max = b[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] >= max)
            {
                max = b[i][j];
            }
        }
    }
    return max;
}


bool E316(int a[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((a[i][j] % 2 == 0) && (a[i][j] < 2015))
            {
                return true; 
                break;
            }
        }
    }
    return false;
}

bool isPrime(int n)
{
    if (n == 1)
    return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
void E317(int a[MAX][MAX], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (isPrime(a[i][j]))
            {
                count++;
            }
        }
    }
    cout << "Co " << count << " so nguyen to trong ma tran";
}
