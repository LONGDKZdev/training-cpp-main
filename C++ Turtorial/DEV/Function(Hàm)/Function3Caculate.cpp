#include <iostream>
#include <iomanip>
using namespace std;

////////////////////
// Function space //
////////////////////


char character;
void caculate(double valueA, double valueB);

int main()
{
    double valueA;
    double valueB;

    cout <<"Endter valueA =";
    cin >> valueA;
    cout <<"Endter valueB =";
    cin >> valueB;
    cout <<"Select calculation (+,-,*,/) :";
    cin >> character;

    caculate(valueA, valueB);


system ("Pause");
}
void caculate(double valueA, double valueB)
{
double sum = valueA + valueB;
double difference = valueA - valueB;
double product = valueA * valueB;
double quotient =valueA / valueB;

switch (character)
    {
    //1.sum(+)
    case ('+'):
        cout <<"valueA + valueB = " << sum <<endl;
    break;
    //2.difference(-)
    case ('-'):
        cout <<"valueA - valueB = " << difference <<endl;
    break;
    //3.product(*)
    case ('*'):
        cout <<"valueA * valueB = " << product <<endl;
    break;
    //4.quotient(/)
    case ('/'):
        if(valueA==0)
        cout <<"ERROR! cann't caculate"<<endl;
        else if(valueB==0)
        cout <<"ERROR! cann't caculate"<<endl;
        else 
        cout <<"valueA / valueB = "<<setprecision(8)<<quotient <<endl;
    break;
    //5.ERROR!
    default:
    cout<< "ERROR! CANN'T FOUND"<<endl;
    break;
    }
}