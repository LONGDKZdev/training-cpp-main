#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        cout << setw(5) << left << "System" ;
    cout << setw(30) << left << "Value";
    cout << setw(20) << right << "attribute\n";//attribute:thuộc tính 

    cout << setfill('-');
    cout << setw(55)<< "-" << endl;
    cout << setfill (' ');


    cout << setw(5) << left << 1;
    cout << setw(30) << left << "Program A";
    cout << setw(20) << right << " Complete" << endl;

    cout << setw(5) << left << 2;
    cout << setw(30) << left << "Program B";
    cout << setw(20) << right << "Processing" << endl;

    cout << setw(5) << left << 3;
    cout << setw(30) << left << "Program C";
    cout << setw(20) << right << "ERROR! Cann't Process!" << endl;

    cout << setw(5) << left << 4;
    cout << setw(30) << left << "Program D";
    cout << setw(20) << right << "Processing" << endl;

    cout << setw(5) << left << 5;
    cout << setw(30) << left << "Program E";
    cout << setw(20) << right << "Complete" << endl;

    cout << setw(5) << left << 6;
    cout << setw(30) << left << "Program F";
    cout << setw(20) << right << "Processing" << endl;

    cout << setw(5) << left << 7 ;
    cout << setw(30) << left << "Program G";
    cout << setw(20) << right << "ERROR! Cann't Process!" << endl;
system("Pause");

}