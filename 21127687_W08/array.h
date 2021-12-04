#pragma once
#include <iostream>
//Dạ em dùng VSCode nên phải include .cpp nó mới chạy được ạ.
#include "array.cpp"

void inputmatrixint(int a[MAX][MAX], int &n, int &m);
void inputmatrixfloat(float b[MAX][MAX], int &n, int &m);

//Test case 1
//Input: 1
//Output:              Exercise 315
//Input 1.1: 3
//Input 1.2: 3
//Input 1.3: 1 2 3 4 5 6 7 8 9
//Output 1.3: Gia tri lon nhat trong ma tran so thuc la: 9
//Input 2.1: 2
//Input 2.2: 5
//Input 2.3: 2 -5 1 3 6 -9 31 34 2 0
//Output 2.3: Gia tri lon nha trong ma tran so thuc la: 34
//Input 3.1: 4
//Input 3.2: 4
//Input 3.3: -1 2 -3 4 -5 6 -7 8 -9 10 -11 12 -13 14 -15 16
//Output 3.3: Gia tri lon nhat trong ma tran so thuc la: 16
float E315(float b[MAX][MAX], int n, int m);

//Test case 2
//Input: 2
//Output:              Exercise 316
//Input 1.1: 3
//Input 1.2: 3
//Input 1.3: 1 2 3 4 5 6 7 8 9
//Output 1.3: Ma tran ton tai so nguyen co gia tri chan nho hon 2015
//Input 2.1: 2
//Input 2.2: 5
//Input 2.3: 0 1 3 5 7 9 11 13 15 17
//Output 2.3: Ma tran ton tai so nguyen co gia tri chan nho hon 2015
//Input 3.1: 2
//Input 3.2: 2
//Input 3.3: 2015 1 5 3
//Output 3.3: Ma tran khong thoa yeu cau de bai!
bool E316(int a[MAX][MAX], int n, int m);

//Test case 3
//Input: 3
//Output:              Exercise 317
//Input 1.1: 3
//Input 1.2: 3
//Input 1.3: 1 2 3 4 5 6 7 8 9
//Output 1.3: Co 4 so nguyen to trong ma tran
//Input 2.1: 2
//Input 2.2: 5
//Input 2.3: 0 1 3 5 7 9 11 13 15 17
//Output 2.3: Co 6 so nguyen to trong ma tran
//Input 3.1: 2
//Input 3.2: 2
//Input 3.3: 2015 1 5 3
//Output 3.3: Co 2 so nguyen to trong ma tran
bool isPrime(int n);
void E317(int a[MAX][MAX], int n, int m);