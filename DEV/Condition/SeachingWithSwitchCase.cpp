#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int choice;
    cout << "1. Search by name "<<endl;
    cout << "2. Search by author "<<endl;
    cout << "3. Search by publishing house "<<endl;
    cout << "4. Search by title "<<endl;
    cout << "choice the number :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "1. Search by name "<<endl;
        break;
    case 2:
        cout << "2. Search by author "<<endl;
        break;
    case 3:
        cout << "3. Search by publishing house "<<endl;
        break;
    case 4:
        cout << "4. Search by title "<<endl;
        break;
    }
system("Pause");
}