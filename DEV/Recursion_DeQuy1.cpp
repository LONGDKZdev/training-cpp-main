#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int giaithua(int valueA)
{
    if(valueA <= 1)
    return 1;
    else
    return valueA * giaithua(valueA-1);
}


int main()
{
    int valueIn;
    cout <<"Enter the value =";
    cin >> valueIn;
    int valueOut = giaithua(valueIn);
    cout << "valueOut ="<<valueOut<<"\n"; 
system("Pause");
}