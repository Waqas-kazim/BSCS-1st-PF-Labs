#include<iostream>
using namespace std;
main()
{
    int n;
    float tPrice;
    cout << "Enter number of items";
    cin >> n;
    cout << "Enter total price";
    cin >> tPrice;
    if(n>10 && tPrice>100){
        cout << "You qualify for free shipping!" ;
    }
}