#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Command continue -->  bỏ qua 1 giá trị trong vòng lặp //
    // Sum from 1 to 30 but Ignore number 9 and 24  //


    int valueOut = 0;
    for (int value = 0; value <= 30; value++)
    {
        if (value == 2 || value == 14 || value == 23)
            continue;
        else
        {
            cout << "Value =" << value << endl;
            valueOut += value;
        }
    }
    cout << "ValueOut =" << valueOut << endl;

    system("Pause");
}
