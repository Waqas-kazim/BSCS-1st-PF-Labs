#include<iostream>
using namespace std;
main(){
    float marks;
    cout<<"Enter your marks in programming course: " ;
    cin >> marks;
    if(marks>=60){
        cout << "Your have passed the course";
    }else{
        cout << "Your are fail";
    }
}