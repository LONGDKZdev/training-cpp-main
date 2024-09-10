#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    //khai báo
    // int A[6]; 
    // int A6[] = { 0,2,4,6,8,10 }; //khởi tạo
    // cout << A6[4] <<endl;
    int A[10];
    int A11[]={0,1,2,3,4,5,6,7,8,9,10};
    int valueA;

    string B[5];
    string B5[]= { "one", "two", "three", "four", "five"};

    cout << "Enter the value from 0 to 10 =";
    cin >> valueA;
        if (valueA > 0 && valueA < 9){
    cout << A11[valueA] <<endl;
    }
    else{
    cout << "ERROR!\n";
    }
    

    system("Pause");
}