#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int valueA;
    valueA=7;

    cout << "result" <<(valueA > 0 && valueA < 10  ) ;


//*************************//
if(valueA > 0 && valueA < 10)
{
    cout << " Is True "<< endl;
}
else
    cout << " Is False "<<endl;
//*************************//


    cout << (valueA > 8 && valueA < 10  ) ;

//*************************//
    if(valueA > 8 || valueA < 10)
{
    cout << " Is True "<< endl;
}
else
    cout << " Is False "<<endl;
//*************************//


    cout << (valueA = 7 && valueA != 0 ) ;


//*************************//
    if(valueA = 7 && valueA != 0)
{
    cout << " Is True "<< endl;
}
else
    cout << " Is False "<<endl;
//*************************//



    cout << (valueA = 7 || valueA >= 8)  ;


//*************************//
    if(1)
{
    cout << " Is True "<< endl;
}
else
    cout << " Is False "<<endl;
//*************************//



    cout << !(valueA = 7 || valueA >= 8) ;


//*************************//
    if(!(valueA = 7 || valueA >= 8))
{
    cout << " Is True "<< endl;
}
else
    cout << " Is False "<<endl;
//*************************//



    system("Pause");
}