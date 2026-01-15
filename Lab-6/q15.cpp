#include<iostream>
using namespace std;
// 15. Write a function with the name of fact, which calculate factorial of a value that is sent as an argument 
int factoraial(int a){
    int factorial=1;
    for(int i = 1;i<=a;i++){
        factorial*=i;
    }
    return factorial;
}

main(){
    int num ;
    cout << "enter a number: " << endl;
    cin >> num;
    int result = factoraial(num);
    cout << "factorial is: " << result;
    
}