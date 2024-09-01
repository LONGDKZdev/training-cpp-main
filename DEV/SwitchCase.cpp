#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int value;
    cout << "Enter the Value =";
    cin >> value;
    int valueOut = value % 2;
    switch (valueOut)
    {
    // case1://
    // case3://  gộp nhiều điều kiện    
    // case5://
    case 0:
    cout << value << " la so chan"<<endl;
    break;

    default:
    cout << value << " la so le"<<endl;
    break;
    }
    system ("Pause");

}