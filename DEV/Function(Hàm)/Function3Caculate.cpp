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
    case ('+'):
        cout <<"valueA + valueB = " << sum <<endl;
    break;
    case ('-'):
        cout <<"valueA - valueB = " << difference <<endl;
    break;
    case ('*'):
        cout <<"valueA * valueB = " << product <<endl;
    break;
    case ('/'):
        if(valueA==0)
        cout <<"Error! can't caculate"<<endl;
        else if(valueB==0)
        cout <<"Error! can't caculate"<<endl;
        else 
        cout <<"valueA / valueB = "<<setprecision(8)<<quotient <<endl;
    break;
    }
}