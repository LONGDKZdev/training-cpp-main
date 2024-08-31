#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
// FIND X AND Y //
//Tổng=14
//Hiệu=4

//Tổng 2=8
//Hiệu 2=5
{
    double Tong1;
    double Hieu1;

    //X + Y = Tong1
    //X - Y = Hieu1


    cout << "Tong1 =";
    cin >> Tong1;

    cout << "Hieu1 =";
    cin >> Hieu1;

    double X=(Tong1 +Hieu1)/2;
    double Y=Tong1 - X;
    cout << "value X ="<< X <<endl;
    cout << "value Y ="<< Y <<endl;
    system("Pause");
}
