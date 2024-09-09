#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int f(int valueA){
    if (valueA <= 2){
        return 1;
    }
    return f(valueA - 1) + f(valueA -2);
}

int main()
{
    int valueB ;
    cout << "Enter the value =";
    cin >> valueB;
    int valueOut =f(valueB);
    cout <<"ValueOut ="<<valueOut<<endl;
system("Pause");
}