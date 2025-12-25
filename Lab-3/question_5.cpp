#include<iostream>
using namespace std;
main()
{
    int a, b;
    cout << "Enter integer A: " << endl;
    cin >> a;
    cout << "Enter integer B: " << endl;
    cin >> b;
    if(a%b==0){
        cout << "first number is multiple of second number" ;
    }else{
        cout << "Not a multiple.";
    }
}