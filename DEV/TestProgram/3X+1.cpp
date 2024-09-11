#include <iostream>
#include <cmath>

using namespace std;

void collatz(int valueIn){
    int valueOut;
    while(valueIn != 1)
    {
    cout<<"Value of n="<<valueIn<<" "<<endl;
    if(valueIn % 2 == 0)
    valueIn=valueIn/2;
    else
    valueIn=valueIn*3+1;
    }
    cout <<valueIn<<endl;
}
int main()
{
    int valueIn;
    cout<<"Enter the valueIn with positive number =";
    cin>>valueIn;
    if(valueIn > 1)
    collatz(valueIn);
    else
    {
        while(valueIn<1){
        cout <<"plese enter the valueIn with positive number again =";
        cin>>valueIn;
        if(valueIn > 1)
        collatz(valueIn);
        }

    }


system("Pause");
    return 0;
}