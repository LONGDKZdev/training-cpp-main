#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int valueA;
int valueB;

int Value(int valueA, int valueB=834)
{
    return valueA - valueB;
}

int main()
{
    int valueOut = Value(1020);
    cout <<"valueOut ="<<valueOut<<endl;
    return 0;    
}