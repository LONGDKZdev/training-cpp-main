#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
//////////////////////////////////////////////////////////////
//////        >>>>>>>>>Quy tắc viết dầu (++, --)<<<<<   //////
////// at t, a- (viết phía sau biến) => Postfix	        //////
////// ++a, --a (viết trước biến)	=> Prefix	        //////
//////**************************************************//////
//////-----> Ưu tiên tính toán Postfix, Prefix *********//////
//////**************************************************//////
////// Step 1. Prefix	                                //////
////// Step 2. Các phép toán còn lại	                //////
////// Step 3. Gán giá trị cho biến ở bên trái dấu bằng	//////
////// Step 4. Tinh postfix                             //////
//////////////////////////////////////////////////////////////
    double value1;
    double value2;
    double value3;
    value1 = 5.7;
    value2 = 7.4;

    value3 = value1++ - ++value2 +25.12;
    cout <<"ValueOut = "<< value1<<endl;
    cout <<"ValueOut = "<< value2<<endl;
    cout <<"ValueOut = "<< value3<<endl;


    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
    cout<<"******* exercise *******"<< endl;
    cout << setfill('_');
    cout << setw(25)<< "_" << endl;
    cout << setfill (' ');
    //cin >> nDay >> nMonth >> nYear ;
    double valueR ;
    cout << "valueR = ";
    cin >> valueR ;

    const double PI =3.14159;
    double valueC;
    double valueS;

    valueC = 2*PI*valueR;
    valueS = PI*valueR*valueR;
    valueS = PI* pow (valueR,2);// with #include <cmath>
    cout << "value of C = "<< valueC << endl;
    cout << "value of S = "<< valueS << endl;


    system ("Pause");
}