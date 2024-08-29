#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main()
{
    cout << "VO HUY LONG EDITOR" << endl;


    // cout <<  "ValueOut=" << INT_MAX << endl;
    // cout <<  "ValueOut=" << INT_MIN << endl;

    // cout <<  "ValueOut=" << SHRT_MAX << endl;
    // cout <<  "ValueOut=" << SHRT_MIN << endl;


// Type promotion
    // int value1 = 10;
    // double value2 = 9.7;

    // int valueOut1;
    // double valueOut2;

    // valueOut1= value1 +value2;
    // valueOut2= value1 +value2;

    // cout << setprecision (12);
    // cout << valueOut1 << endl;
    // cout << valueOut2 << endl;

    // cout << SHRT_MIN << "----->" << SHRT_MAX <<endl ;



    // float value1;
    // value1 =327.23;
    // cout << "valueOut1=" << value1 << endl;

    // int value2;
    // value2 = value1;
    // cout << "valueOut2=" << value2 <<  endl;

    // int value1;
    // value1 = 10;
    // int value2;
    // value2 =3;

    // cout << "value1 + value2 = " << value1 + value2 <<endl;

    // cout << "value1 - value2 = " << value1 - value2 <<endl;

    // cout << "value1 * value2 = " << value1 * value2 <<endl;

    // cout << "value1 / value2 = " << value1 / value2 <<endl;

    // cout << "value1 % value2 = " << value1 % value2 <<endl;

    int value1=12;
    int value2=34;
    int value3=42;
    int value4=18;
    int value5=30;
    int value6=46;


    value1+=8;
    value2-=8;
    value3*=8;
    value4/=8;
    value5%=8;
    value6=value6 + value1 - value2 * value3 / value4; 



    cout << "ValueOut=" << value1 << endl;
    
    cout << "ValueOut=" << value2 << endl;

    cout << "ValueOut=" << value3 << endl;
    
    cout << "ValueOut=" << value4 << endl;

    cout << "ValueOut=" << value5 << endl;

    cout << "ValueOut=" << value6 << endl;




    system("Pause");
}
