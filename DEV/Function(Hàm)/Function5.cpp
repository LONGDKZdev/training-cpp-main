#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int valueA;
int valueB;

int Value(int valueA, int valueB=83)
{
    return valueA - valueB;
}

int main()
{
    int valueOut = Value(100);
    cout <<"valueOut ="<<valueOut<<endl;
    return 0;
    
}