#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int valueA;
int valueB;

int plusTowValue(int a, int b)
{
    if(a == 0){
        return -1;
    }

    if(b == 0){
        return -1;
    }

    return a + b;
}

int plusTowValue(int a, int b)
{
    if(a != 0 && b != 0)
    {
        return a + b;
    }

    if(a == 0 && b == 0)
    {
        return -1;
    }
}

int main()
{
    int valueOut = plusTowValue(1020,12);
    cout <<"valueOut ="<<valueOut<<endl; 
}