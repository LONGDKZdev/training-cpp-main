
#include <iostream>
#include <iomanip>
using namespace std;

void valueOut(string value)
{
if (value == "Value1")
    cout << "Value1=100"<<endl;
else if(value == "Value2")
    cout << "value2=1000"<<endl;
}

int main()
{
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* exercise *******"<< endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');

    valueOut("Value1");
    valueOut("Value2");
system("Pause");
}
