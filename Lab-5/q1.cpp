#include<iostream>
using namespace std;
// 1. Input the marks of ten students and display their average. Use do-while
main(){
    float marks, sum = 0.0, avg;
    int i = 1;
    do{
        cout << "Enter marks of student no. " << i << " : ";
        cin >> marks;
        sum+=marks;
        i++;
    }while(i <= 10);
    avg = sum/10;
    cout << "The average value is: " << avg << endl;
}