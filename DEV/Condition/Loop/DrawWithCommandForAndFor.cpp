#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int value1;
    cout <<"Enter value limit of table (limit from 1 to 9) :";
    cin >>value1;
    if(value1 >= 1 && value1 <= 9 )
    {
        for(int valueA=1 ; valueA <=value1 ;valueA++)
        {
            for(int valueB=1 ; valueB <= value1;valueB++)
            {
                cout <<valueA<<valueB<<" ";
            }
        cout <<endl;
        }
    }
    else
    {
        cout <<"ERROR!!!"<<endl;
    }

////////////////////////////////////////////
    cout << setfill('_');
    cout << setw(15)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* Draw N *******"<< endl;
    cout << setfill('_');
    cout << setw(15)<< "_" << endl;
    cout << setfill (' ');
////////////////////////////////////////////

    cout <<"Enter value limit of table (limit from 1 to 9) :";
    cin >>value1;
    if(value1 >= 1 && value1 <= 9 )
    {
        for(int valueA=1 ; valueA <=value1 ;valueA++)
        {
            for(int valueB=1 ; valueB <= value1 ;valueB++)
            {
                if ( valueB==1 || valueB == value1 || valueA == valueB )
                    cout << valueA << valueB <<" ";
                else
                    cout <<"  "<<" ";
            }
        cout <<endl;
        }
    }
    else
    {
        cout <<"ERROR!!!"<<endl;
    }

////////////////////////////////////////////
    cout << setfill('_');
    cout << setw(15)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* Draw O *******"<< endl;
    cout << setfill('_');
    cout << setw(15)<< "_" << endl;
    cout << setfill (' ');
////////////////////////////////////////////

    cout <<"Enter value limit of table (limit from 1 to 9) :";
    cin >>value1;
    if(value1 >= 1 && value1 <= 9 )
    {
        for(int valueA=1 ; valueA <=value1 ;valueA++)
        {
            for(int valueB=1 ; valueB <= value1 ;valueB++)
            {
                if ( valueB==1 || valueB == value1 || valueA == 1 || valueA ==value1)
                    cout << valueA << valueB <<"  ";
                else
                    cout <<"  "<<"  ";
            }
        cout <<endl;
        }
    }
    else
    {
        cout <<"ERROR!!!"<<endl;
    }


////////////////////////////////////////////
    cout << setfill('_');
    cout << setw(30)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* Draw triangle *******"<< endl;
    cout << setfill('_');
    cout << setw(30)<< "_" << endl;
    cout << setfill (' ');
////////////////////////////////////////////

    cout <<"Enter value limit of table (limit from 1 to 9) :";
    cin >>value1;
    if(value1 >= 1 && value1 <= 9 )
    {
        for(int valueA=1 ; valueA <=value1 ;valueA++)
        {
            for(int valueB=1 ; valueB <= valueA ;valueB++)
            {
                    cout << valueA << valueB <<"  ";
            }
        cout <<endl;
        }
    }
    else
    {
        cout <<"ERROR!!!"<<endl;
    }
    


    ////////////////////////////////////////////
    cout << setfill('_');
    cout << setw(30)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* Draw X *******"<< endl;
    cout << setfill('_');
    cout << setw(30)<< "_" << endl;
    cout << setfill (' ');
////////////////////////////////////////////

    cout <<"Enter value limit of table (limit from 1 to 9) :";
    cin >>value1;
    if(value1 >= 1 && value1 <= 9 )
    {
        for(int valueA=1;valueA <=value1 ;valueA++)
        {
            for(int valueB= value1 ; valueB <= value1 ; valueB--)
            {
                if(valueB >0)
                    cout << valueA << valueB <<"  ";
            }
        cout <<endl;
        }
    }
    else
    {
        cout <<"ERROR!!!"<<endl;
    }
    
system("Pause");
}