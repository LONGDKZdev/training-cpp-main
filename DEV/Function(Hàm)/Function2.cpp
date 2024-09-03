#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void MatchWithEquation(double valueA, double valueB, double valueC);
double valueOut;
int main()
{

//1.caculate with ValueA= 1 ;ValueB= 2 ;valueC= 3
MatchWithEquation(1,2,3);

//2.caculate with ValueA= 1 ;ValueB= 4 ;valueC= 2
MatchWithEquation(1,2,1);

//3.caculate with ValueA= 4 ;ValueB= 4 ;valueC= 1
MatchWithEquation(1,2,-3);
//4.caculate advance : ValueA;ValueB;valueC from your keyboar
double valueA ,valueB, valueC;
cout<< "Enter valueA=";
cin >> valueA;

cout<< "Enter valueB=";
cin >> valueB;

cout<< "Enter valueC=";
cin >> valueC;
cout << valueA <<"x^2"<<"+"<<valueB<<"x"<<valueC<<endl;
MatchWithEquation(valueA, valueB, valueC);

    system("Pause");
}


void MatchWithEquation(double valueA, double valueB, double valueC)
{
double Delta= (pow (valueB,2) )- 4*valueA*valueC;
double x1, x2;
x1=((-valueB + sqrt(Delta)) /(2*valueA));
x2=((-valueB - sqrt(Delta)) /(2*valueA));
if (Delta >0)
{
    cout << valueA <<"x^2"<<"+"<<valueB<<"x"<<valueC<<endl;
    cout <<"The equation have two value:\n";
    cout <<"value1="<<setprecision(9) <<x1<<endl;
    cout <<"value2="<<setprecision(9) <<x2<<endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
}
else if(Delta == 0 )
{
    cout << valueA <<"x^2"<<"+"<<valueB<<"x"<<valueC<<endl;
    cout <<"The equation have double value:\n";
    cout <<"value1=value2="<< x1 <<endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
}
else 
{
    cout << valueA <<"x^2"<<"+"<<valueB<<"x"<<valueC<<endl;
    cout <<"The equation haven't value"<<endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
}

}