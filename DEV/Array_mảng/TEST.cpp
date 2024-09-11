#include <iostream>
using namespace std;

int main()
{
    int value1;
    int valueA[5] = {10, 20, 30, 40, 50};
    int valueSize = sizeof(valueA) / sizeof(int);
    cout <<"Size of array A ="<<valueSize<<endl;
    for (int value=0;value <5 ; value++){
    cout<<" value in array ="<<valueA[value]<<endl;
    }
system("Pause");
}