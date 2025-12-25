#include<iostream>
using namespace std;
// 5.	Create a program that:
//        Takes a month number (1-12) from the user. Displays season and characteristics:
// Dec-Feb: "Winter"
// Mar-May: "Spring"
// Jun-Aug: "Summer"
// Sep-Nov: "Autumn"

main(){
    int num;
    cout << "Enter number of the month: " << endl;
    cin >> num;
    if(num==12||num==1||num==2){
        cout <<"Winter";
    }else if(num==3||num==4||num==5){
        cout<< "spring";
    }else if(num==6||num==7 ||num==8){
        cout << "spring";
    }else if(num==9 ||num==10||num==11){
        cout << "spring";
    }

}