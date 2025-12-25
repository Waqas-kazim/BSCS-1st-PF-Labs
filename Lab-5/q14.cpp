#include<iostream>
using namespace std;
//  14. Write a function which input a number and finds whether it is even OR odd
void evenOdd(int num){
    if(num%2==0){
        cout << "even ";
    }else{
        cout << "odd";
    }
}
main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    evenOdd(n);

}