#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    ///////print from 1 to 20 with step=2 ///////
    for (int value1 =1 ; value1 <=20 ; value1+=2 )
    {
        cout << "valueOut ="<< value1 <<endl;
    }
    ///////Sum from 1 to 10////////
    int valueOut =0;
    for (int value2=1; value2 <=10; value2+=1)
    {
        cout << "value2 ="<< value2 <<endl;
        valueOut +=value2 ;
    }
    cout << "valueOut =" << valueOut <<endl;
    system("Pause");
}