#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter length of array = ";
    cin>>n;
    int array[n];
    for(int i =0;i < n;i++ ){
    cin>>array[i];
    }
    int max = array[0];

    for(int i = 0; i < n; i++){
        if(array[i] > max){
        max = array[i];
        }
    }
    cout<<"Max value in array = "<<max<<endl;
    system("Pause");
}