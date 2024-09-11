#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ///////////////////////////
    ////(n!=1*2*3*4*5*..*n)////  ***(II)***
    ///////////////////////////  
    int valueA=0;
    int valueOut=1;
    int valueB;cout<<"Enter the value :";
    cin>>valueB;

    while(valueA<valueB)
    {
        valueA++;
        // cout<<"valueA="<<valueA<<endl;
        valueOut=valueOut *valueA;
    }
cout <<valueA<<"!="<<valueOut<<endl;
system("Pause");
}