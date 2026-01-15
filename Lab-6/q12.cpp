#include<iostream>
using namespace std;
// 12. Write a function, which takes 5 arguments and print their average. Use this function in main. 
double calculateAverage(int a, int b, int c, int d, int e){
    double average = (a+b+c+d+e)/5.0;
    return average;
}

main(){
    int a=10, b=20, c=30, d=40, e=50;
    double avg = calculateAverage(a, b, c, d, e);
    cout << "The average is: " << avg << endl;
    
}