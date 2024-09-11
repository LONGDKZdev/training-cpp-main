#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int valueA;
    cout<<"Enter the value from 10 to 50 =";
    cin >>valueA;
    for (int valueA =10 ; valueA <=50 ; valueA++)
    {
    if(valueA % 3 ==0 )
        {
            cout << valueA << "is number Divisible By 3"<<endl;
        }
    }
    // else
    //     {
    //         cout << valueA << "is not number Divisible By 3"<<endl;
    //     }
    // }
system("Pause");
}