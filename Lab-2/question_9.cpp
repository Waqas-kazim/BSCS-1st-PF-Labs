#include<iostream>
using namespace std;
main()
{
    int oriVal, revVal, temp, temp1;
    cout << "enter a value: " ;
    cin >> oriVal;
    temp = oriVal%10;
    temp1 = oriVal/10;
    revVal = temp*10;
    temp = temp1%10;
    temp1 = temp1/10;
    revVal = (revVal+temp)*10;
    temp = temp1%10;
    revVal = revVal+temp;
    cout << revVal;

    if(oriVal==revVal)
    cout << "The number is a palindrome";
}