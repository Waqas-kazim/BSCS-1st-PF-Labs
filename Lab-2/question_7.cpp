#include<iostream>
using namespace std;
main()
{
    string day;
    cout << "enter day of the week: " ;
    cin>> day;
    if(day=="Sunday" || day=="Saturday")
    {
        cout << "This is weekend";
    }

}