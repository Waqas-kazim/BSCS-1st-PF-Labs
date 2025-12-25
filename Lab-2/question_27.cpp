#include<iostream>
using namespace std;
main(){
    int nWeeks;
    float totalSalary;
    char rank;
    cout << "Enter \'S\' for senior and \'J\' for junior";
    cin >> rank;
    cout << "Enter number of weeks";
    cin >> nWeeks;
    if(rank=='j'||rank=='J'){
        totalSalary = nWeeks*500;
    }else if(rank=='s'||rank=='S'){
        totalSalary = nWeeks*800;
    }else{
        cout << "Enter correct input";
    }
    cout << "Your total salary is: $" << totalSalary;
}