#include <iostream>
#include <iomanip>
using namespace std;




// Math  Literature  English
void Average(double scoreMath, double scoreLiterature, double English );
int main()
{

double scoreMath;
double scoreLiterature;
double scoreEnglish;

    cout << "Enter score Math =";cin >> scoreMath;
    cout << "Enter score Literature =";cin >> scoreLiterature;
    cout << "Enter score English =";cin >> scoreEnglish;

Average(scoreMath,scoreLiterature,scoreEnglish);
cout <<endl;


system("Pause");
}
void Average(double scoreMath , double scoreLiterature , double scoreEnglish )
{
    double Average=(scoreMath + scoreLiterature + scoreEnglish)/3;
    cout<<"ValueOut of average ="<<setprecision(8)<<Average;
}