#pragma once
#include <iostream>
#include "function.cpp"
//Dạ em inlcude .cpp trong .h vì em dùng VSCode và không include .cpp thì nó báo lỗi ạ.

int input(int &n);

int first(int n);

//Test case 1.1
//Input 1.1: 43
//Input 2.1: 12345
//Output: So luong cac chu so trong n la: 5

//Test case 1.2
//Input 1.2: 43
//Input 2.2: 12397404
//Output: So luong cac chu so trong n la: 8

//Test case 1.3
//Input 1.3: 43
//Input 2.3: 10
//Output: So luong cac chu so trong n la: 2

int second(int n);

//Test case 2.1
//Input 1.1: 47
//Input 2.1: 12397404
//Tong cac chu so chan co trong n la: 10

//Test case 2.2
//Input 1.1: 47
//Input 2.1: 12345
//Tong cac chu so chan co trong n la: 6

//Test case 2.3
//Input 1.3: 47
//Input 2.3: 0000123
//Tong cac chu so chan co trong n la: 2

int third(int n);

//Test case 3.1
//Input 1.1: 51
//Input 2.1: 12345
//Output: Chu so lon nhat co trong n la: 5

//Test case 3.2
//Input 1.1: 51
//Input 2.1: 123399
//Output: Chu so lon nhat co trong n la: 9

//Test case 3.3
//Input 1.1: 51
//Input 2.1: 0122300
//Output: Chu so lon nhat co trong n la: 3

bool fourth(int n);

//Test case 4.1
//Input 1.1: 55
//Input 2.1: 759155
//Output: YES

//Test case 4.2
//Input 1.1: 55
//Input 2.1: 25837283
//Output: NO

//Test case 4.3
//Input 1.1: 55
//Input 2.1: 10001
//Output: NO

bool fifth(int n);

//Test case 5.1
//Input 1.1: 59
//Input 2.1: 9765531
//Output: YES

//Test case 5.2
//Input 1.1: 59
//Input 2.1: 97655319
//Output: NO

//Test case 5.3
//Input 1.1: 59
//Input 2.1: 10001
//Output: NO

float power(float x, int n);
float sixth(float x, int n);

//Test case 6.1
//Input 1.1: 63
//Input 2.1: 2 3
//Output: 6.00

//Test case 6.2
//Input 1.1: 63
//Input 2.1: 4 3
//Output: 52.00

//Test case 6.3
//Input 1.1: 63
//Input 2.1: 2.25
//Output: 8.58


long sumstring(int n);
float seventh(float x, int n);

//Test case 7.1
//Input 1.1: 67
//Input 2.1: 2 3
//Output: -2.00

//Test case 7.2
//Input 1.1: 67
//Input 2.1: 2.25 3 
//Output: -2.46

//Test case 7.3
//Input 1.1: 67
//Input 2.1: -3 2
//Output: 6.00

bool eighth(int n);
//Test case 8.1
//Input 1.1: 71
//Input 2.1: 8
//Output: YES

//Test case 8.2
//Input 1.1: 71
//Input 2.1: 12 
//Output: NO

//Test case 8.3
//Input 1.1: 71
//Input 2.1: 69 
//Output: NO

bool isLeapYear(int year);
void check(int day, int month, int year);
int countLeapYear(int year);
long monthcheck(int month, int year);
int ninth(int day, int month, int year);

//Test case 9.1
//Input 1.1: 75
//Input 2.1: 10 1 1970
//Output: 10

//Test case 9.2
//Input 1.1: 75
//Input 2.1: 10 1 1971  
//Output: 375

//Test case 9.3
//Input 1.1: 75
//Input 2.1: 12 3 2000  
//Output: 11030

bool isPrime(int n);
void tenth(int n);

//Test case 10.1
//Input 1.1: 79
//Input 2.1: 14
//Output: 2 3 5 7 11 13

//Test case 10.2
//Input 1.1: 79
//Input 2.1: 69
//Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67

//Test case 10.3
//Input 1.1: 79
//Input 2.1: 10 
//Output: 2 3 5 7 

int solveQuadratic(double a, double b, double c, double &x1, double &x2);

//Test case 11.1
//Input 1.1: 100
//Input 2.1: 1 -4 4
//Output: Phuong trinh co nghiem kep x1 = x2 = 2.00

//Test case 11.3
//Input 1.1: 100
//Input 2.1: 1 3 5
//Output: Phuong trinh vo nghiem

//Test case 11.3
//Input 1.1: 100
//Input 2.1: 5 6 -15
//Output: Phuong trinh co hai nghiem phan biet x1 = 1.23                                     
//                                             x2 = -7.83

void tomorrow(int day1, int month1, int year1, int &day2, int &month2, int &year2);

//Test case 12.1
//Input 1.1: 101
//Input 2.1: 9 12 2003
//Output: 10 12 2003

//Test case 11.2
//Input 1.1: 101
//Input 2.1: 10 1 1971  
//Output: 11 1 1971

//Test case 11.3
//Input 1.1: 79
//Input 2.1: 29 2 2000 
//Output: 1 3 2000
