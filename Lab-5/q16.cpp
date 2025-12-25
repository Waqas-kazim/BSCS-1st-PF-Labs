#include<iostream>
using namespace std;
// 16. Write a function, which prints a triangle of 10 asterisks. Use this function in main five times.
void triangle(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
main(){
    triangle();
    triangle();
    triangle();
    triangle();
    triangle();
}