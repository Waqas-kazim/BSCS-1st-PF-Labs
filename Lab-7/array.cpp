#include<iostream>
using namespace std;
main(){
    int arr[10];
    for(int i=0;i<9;i++){
        cout << "Enter number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=9;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}