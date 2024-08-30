#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int value1 =12;
    int value2 =15;

    //kí hiệu các phép so sánh //
    /////////////////////////////
    //////  ==  :bằng       /////
    //////  !=  :khác       /////
    //////  >   :lớn        /////
    //////  <   :bé         /////
    //////  >=  :lớn bằng   /////
    //////  <=  :bé bằng    /////
    /////////////////////////////

    cout << (value1 == value2) << endl;
    cout << (value1 != value2) << endl;
    cout << (value1 > value2) << endl; 
    cout << (value1 < value2) << endl;
    cout << (value1 >= value2) << endl;
    cout << (value1 <= value2) << endl;


    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* exercise *******"<< endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');

    int valueA ,valueA1 , valueA2 ,valueA3 , valueA4 ;

    valueA=valueA1=valueA2=valueA3=valueA4=6;
    
    valueA1+=3;
    cout << "valueOut=" << valueA1 << endl;
    valueA2-=5;
    cout << "valueOut=" << valueA2 << endl;
    valueA3*=2;
    cout << "valueOut=" << valueA3 << endl;
    valueA4%=5;
    cout << "valueOut=" << valueA4 << endl;


    int valueB=2;
    valueA-=(valueB +7);
    cout << "valueOut=" << valueA << endl; 




    system("Pause");
}