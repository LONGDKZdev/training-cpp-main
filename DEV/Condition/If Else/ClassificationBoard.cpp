#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double score;
    cout << "scoreIn= ";
    cin >> score;
    
if(score <=10 && score >=8.5)
    cout << "Gioi"<<endl;
else if(score <8 && score >=6.5)
    cout <<"Kha"<<endl;
else if(score <6.5 && score >=5)
    cout <<"TrungBinh"<<endl;
else if(score <5 && score >=0)
    cout <<"Yeu"<<endl;


    system("Pause");
}