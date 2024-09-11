#include <iostream>
#include <iomanip>
using namespace std;
////////////////////
// Function space //
////////////////////


int Sum(int valueA, int valueB)
{
    return valueA + valueB;
}
/////// Function procedure (Hàm thủ tục)///////
void Communication(string gender)
{
if (gender == "Female")
    cout << "Hello , I am Female !"<<endl;
else if(gender == "Male")
    cout << "Hello , I am Male !"<<endl;
}
////////////////////////////////////////////////
void valueOut(string value)
{
if (value == "Value1")
    cout << "Value1=100"<<endl;
else if(value == "Value2")
    cout << "value2=1000"<<endl;
}
/////// Function procedure (Hàm thủ tục)///////

int main()
{
    int valueOut1 = Sum(4,7);
    int valueOut2 = Sum(8,5);
    cout << "valueOut1 ="<<  valueOut1<<endl;
    cout << "valueOut2 ="<<  valueOut2<<endl;

    Communication("Male");
    Communication("Female");

    valueOut("value1");
    valueOut("value2");
    

    system("Pause");
}

