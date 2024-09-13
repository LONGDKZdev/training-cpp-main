#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int valueA;
    cout<<"Enter the value from 0 to 1000 =";
    cin >>valueA;
    for (int valueA =0 ; valueA <=1000 ; valueA++)
    {
    if(valueA % 3 ==0 )
            cout << valueA << "is number Divisible By 3"<<endl;
    }
    return main();
    // else
    //     {
    //         cout << valueA << "is not number Divisible By 3"<<endl;
    //     }
    // }
system("Pause");
}