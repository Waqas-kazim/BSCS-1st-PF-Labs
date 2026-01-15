#include<iostream>
using namespace std;
// 10. Write a function 
// which calculate average of 5 integers and return average. Use add function to add integers. 
int add(int a, int b, int c, int d, int e){
    return a+b+c+d+e;
}
main(){
    int a, b, c, d, e, sum;
    double avg;
    cout << "enter a: " ;
    cin >> a;
    cout << "enter b: " ;
    cin >> b;
    cout << "enter c: " ;
    cin >> c;
    cout << "enter d: " ;
    cin >> d;
    cout << "enter e: " ;
    cin >> e;
    sum = add(a, b, c, d, e);
    avg = sum/5.0;
    cout << "Average is: " << avg;
}