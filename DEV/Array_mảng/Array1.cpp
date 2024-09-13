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
    int A[11]={0,1,2,3,4,5,6,7,8,9,10};
    sizeof(int);
    int valueA;
    string B[5]= { "one", "two", "three", "four", "five"};
    int valueSizeA = sizeof(A)/ sizeof(A[0]);
    int valueSizeB = sizeof(B)/ sizeof(B[0]);
    cout << "Size of the array A ="<< valueSizeA <<endl;
    cout << "Size of the array B ="<< valueSizeB <<endl;

    int M[]={0,10,20,30,40,50,60,70,80,90,100};
    cout<< "value from array M before change ="<<M[0]<<endl;
    M[0]=1000;
    cout<< "value from array M after change ="<<M[0]<<endl;

    //sizeof use to find number of elements in the array start from 1 to end


    // cout << "Enter the value from 0 to 10 =";
    // cin >> valueA;
    //     if (valueA > 0 && valueA < 9){
    // cout << A[valueA] <<endl;
    // }
    // else{
    // cout << "ERROR!\n";
    // }
    

    system("Pause");
}