#pragma once
#include <iostream>
#include "array.cpp"

void input(int a[], int &n);
void input2nd(int b[], int &m);
void output(int a[], int n);

//Bai P01
//Test case 1
//Input 1.1: 1
//Input 1.2: 5
//Output 1.2:           P01:
//Input 1.3: 2 6 3 8 5
//Output 1.3: 8 3
//Input 2.3: 1 2 3 4 5
//Output 2.3: 4 1
//Input 3.3: 0 0 0 0 1
//Output 3.3: 0 1
int maxEven(int a[], int n);
int minOdd(int a[], int n);
void P01(int a[], int n);

//Bai P02
//Test case 2
//Input 1.1: 2
//Output 1.1:           P02: 
//Input 1.2: 5
//Input 1.3: 2 6 3 8 5
//Output 1.3: 5.33
//Input 2.3: 1 2 3 4 5
//Output 2.3: 3.00
//Input 3.3: 1 3 5 7 9
//Output 3.3: Mang khong co so chan!
void P02(int a[], int n);
bool isPrime(int n);

//Bai P04
//Test case 3
//Input 1.1: 3
//Output 1.1:           P04:
//Input 1.2: 5
//Input 1.3: 2 6 1 8 7
//Output 1.3: 2 7
//Input 2.2: 3
//Input 2.3: 4 9 12
//Output 2.3: Mang khong co so nguyen to!
//Input 3.3: 1 2 3 4 5
//Output 3.3: 2 3 5
void P04(int a[], int n);
void swap(int &a, int &b);

//Bai P05
//Test case 4
//Input 1.1: 4
//Output 1.1:           P05:
//Input 1.2: 5
//Input 1.3: 2 6 1 4 7
//Output 1.3: 2 4 1 6 7
//Input 2.2: 5
//Input 2.3: 1 3 6 2 4
//Output 2.3: 1 3 2 4 6  
//Input 3.3: 1 2 3 4 5
//Output 3.3: 1 2 3 4 5
void P05(int a[], int n);

//Bai P06
//Test case 5
//Input 1.1: 5
//Output 1.1:           P06:
//Input 1.2: 5
//Input 1.3: 2 6 1 4 7
//Output 1.3: Khong tang khong giam
//Input 2.2: 5
//Input 2.3: 1 2 3 4 5
//Output 2.3: Mang tang  
//Input 3.3: 5 4 3 2 1
//Output 3.3: Mang giam
bool mangtang(int a[], int n);
bool manggiam(int a[], int n);
void P06(int a[], int n);

//Bai P09
//Test case 6
//Input 1.1: 6
//Output 1.1:           P09:
//Input 1.2: 8
//Input 1.3: 3 5 12 5 45 87 678 5
//Output 1.3: 6
//Input 2.2: 5
//Input 2.3: 0 0 1 0 1
//Output 2.3: 5
//Input 3.3: 1 2 3 4 5
//Output 3.3: 5
int arraycount(int a[], int n);
void P09(int a[], int n);

//Bai P12
//Test case 7
//Input 1.1: 7
//Output 1.1:           P12:
//Input 1.2: 7
//Input 1.3: 5 12 5 45 87 678 5
//Output 1.3: 87
//Input 2.2: 5
//Input 2.3: 1 2 3 4 5
//Output 2.3: 4
//Input 3.3: 4 2 0 6 9
//Output 3.3: 6
void P12(int a[], int n);

//Bai P15
//Test case 8
//Input 1.1: 8
//Output 1.1:           P15:
//Input 1.2: 7
//Input 1.3: 3 5 12 67 45 87 678
//Output 1.3: 678 87 45 67 12 5 3
//Input 2.2: 5
//Input 2.3: 1 2 3 4 5
//Output 2.3: 5 4 3 2 1
//Input 3.3: 4 2 0 6 9
//Output 3.3: 9 6 0 2 4
void P15(int a[], int n);

//Bai P25
//Test case 9
//Input 1.1: 9
//Output 1.1:           P25:
//Input 1.2: 7
//Input 1.3: 3 5 12 67 80 87 678
//Input 1.4: 6
//Input 1.5: 5 23 34 45 56 67
//Output 1.2: 3 5 5 12 23 34 45 56 67 67 80 87 678
//Input 1.2: 3
//Input 1.3: 1 2 3
//Input 1.4: 5
//Input 1.5: 1 2 4 5 6
//Output 1.2: 1 1 2 2 3 4 5 6
//Input 1.2: 7
//Input 1.3: 3 4 5 6 7 8 69
//Input 1.4: 6
//Input 1.5: 5 23 34 45 56 67
//Output 1.2: 3 4 5 5 6 7 8 23 34 45 56 67 69 
void mergearray(int a[], int n, int b[], int m, int c[]);
void P25(int a[], int n, int b[], int m, int c[]);

//Bai P26
//Test case 10
//Input 1.1: 10
//Output 1.1:           P26:
//Input 1.2: 7
//Input 1.3: 3 5 12 67 80 45 678
//Input 1.4: 6
//Input 1.5: 5 23 12 45 56 67
//Output 1.2: 5 12 67 45
//Input 1.2: 3
//Input 1.3: 3 2 1
//Input 1.4: 5
//Input 1.5: 1 2 3 4 5
//Output 1.2: 3 2 1
//Input 1.2: 7
//Input 1.3: 3 5 12 67 67 45 678
//Input 1.4: 6
//Input 1.5: 5 23 12 45 12 67
//Output 1.2: 5 12 67 45
int reapeatCount(int a[], int n, int x);
void P26(int a[], int n, int b[], int m, int c[]);

//Test case 11
//Input 1: 0
//Output 1: Ban da thoat khoi menu!
//          Have a nice day!
