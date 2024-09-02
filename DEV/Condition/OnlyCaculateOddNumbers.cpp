#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    cout<< "Enter value even numbers =";

    int value1;
    int sum=0;
    cin >> value1;

    if(value1 % 2 == 0)
    {
        cout << "ERROR!!!\n"<<"Can't caculate Odd numbers"<<endl;
    }
    else
    {
        for(int value2 =1; value2 <= value1 ; value2+=2)
        {
            cout <<"value2="<< value2 <<endl;
            sum += value2;
        }
    cout << "Sum from 1 to value your enter ="<< sum <<endl;
    }

system("Pause");
}
