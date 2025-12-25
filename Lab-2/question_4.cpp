#include<iostream>
using namespace std;
main()
{
    float totalAmount, discount;
    cout << "Enter total purchase amount: ";
    cin >> totalAmount;
    if(totalAmount>50){
        discount = totalAmount*10/100;
    }else{
        discount = 0;
    }
    cout << "discount amount is: " << discount;
}