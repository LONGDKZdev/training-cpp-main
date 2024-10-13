#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double value;
    cout << "Enter value =";
    cin >> value;                        
    string valueOut = ((value >=8) ? "gioi" : ( value <8 && value >=6.5)? "kha" : (value <6.5 && value >=5)? "trung binh" : "yeu");
    cout << valueOut << endl;
    system("Pause");



}