#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long year;
    cout<< "Enter the year :";
    cin >> year;
if(((year%4==0) && (year%100!=0))||(year%400==0))
    cout << year <<" Is leap year"<<endl;
else
    cout << year << " Is not leap year"<<endl;
//***************************//
//Number of days in the month//
//***************************//
    int month;

    cout << "Enter the month :";
    cin >> month;
//
// if (month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
//     cout << "Number of days in the month is 31 day"<<endl;
// else if (month ==4 || month ==6 || month ==9 || month ==11) 
//     cout << "Number of days in the month is 30 day"<<endl;
// else if (month == 2)
//     if(((year%4==0) && (year%100!=0))||(year%400==0))
//         cout << "Number of days in the month is 29 day"<<endl;
//     else
//         cout << "Number of days in the month is 28 day"<<endl;


//////////////////OR USE SWITCH CASE//////////////////

switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout << "Number of days in the month is 31 day"<<endl;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    cout << "Number of days in the month is 30 day"<<endl;
    break;

    case 2:
    {
    if(((year%4==0) && (year%100!=0))||(year%400==0))
        cout << "Number of days in the month is 29 day"<<endl;
    else
        cout << "Number of days in the month is 28 day"<<endl;
    }
    break;

    default:
    cout << "ERROR!,cann't caculate!"<<endl;
    break;
    }
system("Pause");
system("cls");
}

