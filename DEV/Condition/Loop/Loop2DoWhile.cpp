#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int value1 =1;
    int value2 =1;
    int value3 =1;
    int value4 =1;

    int valueOut1 =0;
    int valueOut2 =0;
    int valueOut3 =1;
    double valueOut4 =1;
    do
    {
        valueOut1 += value1;
        value1++;
    }
    while(value1 <=10);
    cout << "Sum from 1 to 10 ="<<valueOut1<<endl;
    do
    {
        valueOut2 -= value2;
        value2++;
    }
    while(value2 <=10);
    cout << "Difference from 1 to 10 ="<<valueOut2<<endl;
    do
    {
        valueOut3 *= value3;
        value3++;
    }
    while(value3 <=10);
    cout << "Product from 1 to 10 =" << valueOut3 << endl;

    do
    {
        valueOut4 /= value4;
        value4++;
    }
    while(value4 <=10);
    cout << "Quotient from 1 to 10 =" << valueOut4 << endl;

    system("Pause");
}