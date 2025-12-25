#include<iostream>
using namespace std;
// 10.	Input the marks of ten students and display their average.
main(){
    float sum= 0.0, avg, marks;
    for(int i = 1; i <= 10; i++){
        cout << "Enter marks of student: "<< i << " : " << endl;
        cin>>marks;
        sum+=marks;

    }
    avg = sum/10.0;
    cout << "average is: " << avg;
    

}