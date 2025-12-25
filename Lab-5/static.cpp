#include<iostream>
using namespace std;
void abc();
main()
{
    abc();
    abc();
    abc();
}
void abc(){
    static int a = 1;
    a++;
    cout << a << endl;
}