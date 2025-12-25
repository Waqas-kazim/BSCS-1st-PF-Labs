#include<iostream>
using namespace std;
main()
{
    string category;
    int price;
    cout << "enter category: ";
    cin >> category;
    cout << "enter price: ";
    cin >> price;
    if(category== "electronics" && price>500)
    cout << "High value electronic Item";
}