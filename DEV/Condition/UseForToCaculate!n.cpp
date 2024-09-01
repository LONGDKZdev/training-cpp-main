#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ///////////////////////////
    ////(n!=1*2*3*4*5*..*n)////  ***(I)***
    ///////////////////////////

    double valueOut=1;
    int valueA=1;
    cout << "Enter the Value = ";
    cin>> valueA;
    cout<<valueA<<"!";
    
    
    for(int valueB=1; valueB <=valueA ; valueB++)
    
    {
        // cout<<"ValueB ="<<valueB<<endl;
        valueOut*=valueB;
        
    }
    cout<< "="<< valueOut <<endl;
system("Pause");
}