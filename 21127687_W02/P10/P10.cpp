//MSSV: 21127687
//Ho ten: Phan Huy Đức Tài
//Lop: 21CLC07

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{ unsigned long previous, current, result;
 cout << "Nhap chi so dien: ";
 cin >> previous >> current;
 while ((previous > current) || (previous > 1000000000) || (current > 100000000) || (previous == 0) || (current == 0))
 {
     cout <<"Nhap lai chi so dien: ";
     cin >> previous >> current;
 }
 result = current - previous;
 cout << result;
 getch();
 return 0 ;
}

//Test case 1
//Input:1000 1211
//Output:211

//Test case 2
//Input:69 420
//Output:351

//Test case 3
//Input:1000 1001
//Output:1
