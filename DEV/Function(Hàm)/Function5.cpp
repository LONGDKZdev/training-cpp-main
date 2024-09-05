#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int valueA;
int valueB;

int Value(int valueA, int valueB=1)
{
    return valueA + valueB;
}

int main()
{
    int valueOut = Value(9);
    cout <<"valueOut ="<<valueOut<<endl;


}