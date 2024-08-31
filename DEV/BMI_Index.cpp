#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight;
    double height;
    cout << "input weight value(kg) =";
    cin >> weight;
    cout << "input height value(m) =";
    cin >> height;

    double BMI;
    BMI=weight/(pow(height,2));
    cout << "BMI="<< setprecision(8)<< BMI <<endl;

if(BMI <16)
    cout << "Severe Thinness"<<endl;
else if (BMI >=16 && BMI <17)
    cout << "Moderate Thinness"<<endl;
else if (BMI >=17 && BMI <18.5)
    cout << "Mild Thinness"<<endl;
else if (BMI >=18.5 && BMI <25)
    cout << "Normal"<<endl;
else if (BMI >=25 && BMI <30)
    cout << "Overweight"<<endl;
else if (BMI >=30 && BMI <35)
    cout << "Obese Class I"<<endl;
else if (BMI >=35 && BMI <40)
    cout << "Obese Class II"<<endl;
else if (BMI >=40)
    cout << "Obese Class III"<<endl;

    system("Pause");
}