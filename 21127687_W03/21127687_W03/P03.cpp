#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double total;
    float assignment, lab, final;
    int cheating;
    cout <<"Vui long nhap diem theo thu tu!" << endl;
    cout <<"Bai tap - Thuc hanh - Ly thuyet - Gian lan: ";
    cin >> assignment >> lab >> final >> cheating;
    while ((assignment < 0) || (lab < 0) || (final < 0) || ((cheating != 0) && (cheating != 1)) || (assignment > 10) || (lab > 10) || (final > 10))
    {
        cout <<"Vui long nhap lai diem theo thu tu!";
        cout <<"Bai tap - Thuc hanh - Ly thuyet - Gian lan: ";
        cin >> assignment >> lab >> final >> cheating;
    }
    total =1.0 * (assignment * 0.3 + lab * 0.3 + final * 0.4);
    if ((cheating == 0) && (total >= 5))
      {
          printf("%0.1lf PASSED", total);
      }
    else 
    {
        printf("0 FAILED");
    }
    getch();
    return(0);
}

