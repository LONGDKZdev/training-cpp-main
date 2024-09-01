#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

////////////////////////////
/////////// LOOP ///////////
////////////////////////////
    double value1 =0;
    while(value1 <=10)
    {
        cout << "valueOut = "<< value1 << endl;
        value1 =value1 +0.5;
    }

///////////////////////////////////////////
//////    Enter value from 1 to 1000 //////
///////////////////////////////////////////
    double valueA;
    cout <<" Enter value from 1 to 1000 : ";
    cin >> valueA;

    while (valueA < 1 || valueA >1000)
    {
        cout << "Error!, please enter again :";
        cin >> valueA;
    }
    cout << "Correct!"<<endl;



system("Pause");
}