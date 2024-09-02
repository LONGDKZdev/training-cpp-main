#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double valueOut1 =1;
    double valueOut2 =0;
    int valueA=1;
    cout << "Enter the Value = ";
    cin>> valueA;
    
    for(int valueB=1; valueB <=valueA ; valueB++)
    
    {
        valueOut1 *= valueB;
        valueOut2 += valueOut1;
    }
    cout<< "Sum of "<< valueA << "! =" <<valueOut2 <<endl;
system("Pause");
}