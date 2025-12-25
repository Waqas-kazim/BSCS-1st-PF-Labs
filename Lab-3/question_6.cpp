#include<iostream>
using namespace std;
main()
{
    int a, b;
    cout << "Enter number A: " ;
    cin >> a;
    cout << "Enter number B: " ;
    cin >> b;
    if(a>b){
        cout << a << " is greater than " << b ;
    }else if(a<b){
        cout << a << " is less than " << b;
    }else{
        cout << a << " is equal to " << b;
    }
    
}