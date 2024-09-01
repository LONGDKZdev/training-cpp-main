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
//////    Enter value from 1 to 100 //////
///////////////////////////////////////////
    double valueA;
    cout <<" Enter value from 1 to 100 : ";
    cin >> valueA;

    while (valueA < 1 || valueA >100)
    {
        cout << "Error!, please enter again :";
        cin >> valueA;
    }
    cout << "Correct!"<<endl;

// while true (luôn đúng ----> chạy mãi nếu không dùng If() + break;(thoát vòng lặp))

    int valueB =0;
    while (true)
{
    cout << "valueOut ="<< valueB << endl;
    valueB++;
    if(valueB >100)
    break;
}




system("Pause");
}