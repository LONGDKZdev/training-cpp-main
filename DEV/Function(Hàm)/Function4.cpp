#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void ValueConstant(int valueA)
{
    valueA =100;
    cout << "ValueA in ValueConstant ="<<valueA<<endl;
}


int main()
{
    int valueA=12;
    cout << "ValueA normal = "<<valueA<<endl;

ValueConstant(valueA);
cout << "valueA with ValueConstant ="<<valueA<<endl;

system("Pause");
}

