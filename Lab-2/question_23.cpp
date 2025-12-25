#include<iostream>
using namespace std;
main(){
    int year;
    cout << "Enter and year: " ;
    cin>> year;
    if(year%4==0){
        cout << "This is leap year";
    }else{
        cout << "not a leap";
    }
}