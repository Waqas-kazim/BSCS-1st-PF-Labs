#include<iostream>
using namespace std;
// 17.	Ask user to enter a 5-digit number and display this number in reverse using while loop (hint repeat: cout<<a%10; a=a/10; five times.
main(){
    int a;
    cout<<"Enter a 5-digit number: ";
    cin>>a;
    
    for(int count=0;count<5;count++){
        cout<<a%10;
        a=a/10;
        
    }
}