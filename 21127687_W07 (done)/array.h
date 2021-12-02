#pragma once
#include <iostream>
//Dạ em inlcude .cpp trong .h vì em dùng VSCode và không include .cpp thì nó báo lỗi ạ. 
#include "array.cpp"

void input(int a[], int &n);
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
bool isPrime(int n);
void P04(int a[], int n);

//Test case 10
//Input 1: 0
//Output 1: Ban da thoat khoi menu!
//          Have a nice day!
