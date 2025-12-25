#include<iostream>
using namespace std;
// 13.	Calculate the Factorial 10!
main(){
    int n=10, fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;

}