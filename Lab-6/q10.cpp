#include<iostream>
using namespace std;
// 10. Write a function, which takes an integer value as argument and print asterisks in a line according to the argument. Use this 
// function in main with constant and variable 
int printAsterisks(int n){
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
}
main(){
    printAsterisks(7);
    int num = 4;
    printAsterisks(num);
}