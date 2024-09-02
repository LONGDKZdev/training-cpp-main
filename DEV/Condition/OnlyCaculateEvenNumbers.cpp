#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    cout<< "Enter value even numbers =";

    int value1;
    int valueOut=0;
    cin >> value1;

    if(value1 % 2 == 0)
    {
        for(int value2 =1; value2 < value1 ; value2++)
        {
            // cout <<"value2="<< value2 <<endl;
            valueOut += value2;
        }
        
    cout << "Sum from 0 to value your enter ="<< valueOut <<endl;
    }
    else
    {
        cout << "ERROR!!!\n"<<"Can't caculate Odd numbers"<<endl;
    }
system("Pause");
}