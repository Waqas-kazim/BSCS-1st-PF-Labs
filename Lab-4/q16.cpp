#include<iostream>
using namespace std;
// 16.	Modify above program in a way that user enter any integer and display the table of this number up to level 10
main(){
    int n;
    cout<<"Enter any integer: ";
    cin>>n;
    int i=1;
    while(i<=10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }

}