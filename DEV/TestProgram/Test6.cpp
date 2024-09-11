#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main()
{
    cout << "VO HUY LONG EDITOR" << endl;

    cout << "***** MAX AND MIN *****"<< endl;

    cout <<  "ValueOut=" << INT_MAX << endl;
    cout <<  "ValueOut=" << INT_MIN << endl;

    cout <<  "ValueOut=" << SHRT_MAX << endl;
    cout <<  "ValueOut=" << SHRT_MIN << endl;

    cout << SHRT_MIN << "----->" << SHRT_MAX <<endl ;
    system("Pause");

    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* calculate 1 *******"<< endl;
    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');

//Kiểm tra trường hợp int và double//

    int value01 = 10.4;
    double value02 = 9.7;

    int valueOut01;
    double valueOut02;

    valueOut01= value01 +value02;
    valueOut02= value01 -value02;


    cout << "value01=10.4"<<endl;
    cout << "value02=9.7"<<endl;

    cout <<"valueOut01 (type double but used with type int) =" << valueOut01 << endl;
    cout << "valueOut02 (type double and use with type double) =" << valueOut02 << endl;

    system("Pause");

    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* calculate 2 *******"<< endl;
    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');

// (+)(-)(*)(/) //

    float value001;
    value001 =327.23;
    cout << "valueOut001=" << value001 << endl;

    int value002;
    value002 = value001;
    cout << "valueOut002=" << value002 <<  endl;


    cout << "value001 + value002 = " << value001 + value002 <<endl;

    cout << "value001 - value002 = " << value001 - value002 <<endl;

    cout << "value001 * value002 = " << value001 * value002 <<endl;

    cout << "value001 / value002 = " << value001 / value002 <<endl;

    system("Pause");

    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* calculate 3 *******"<< endl;
    cout << setfill('_');
    cout << setw(55)<< "_" << endl;
    cout << setfill (' ');


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

    cout << "value1 % value2 = " << value1 % value2 <<endl;



    system("Pause");
}
