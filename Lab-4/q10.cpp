#include<iostream>
using namespace std;
// 10.	Input the marks of ten students and display their average.
main(){
    float sum= 0.0, avg, marks;
    int i = 1;
    while( i <= 10){
        cout << "Enter marks of student: "<< i << " : " << endl;
        cin>>marks;
        sum+=marks;
        i++;

    }
    avg = sum/10.0;
    cout << "average is: " << avg;
    

}