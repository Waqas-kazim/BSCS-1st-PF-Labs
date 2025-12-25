#include<iostream>
using namespace std;
// 1.	Declare three pointers to integers. Dynamically allocate memory to them. Assign some value and Display their addition 
main(){
    int *p1 = new int(10);
    int *p2 = new int(20);
    int *p3 = new int(30);
    cout <<"values: "<< *p1<< " " << *p2<< " " << *p3<<endl;
    cout << "sum: " << *p1+*p2+*p3;
    delete p1;
    delete p2;
    delete p3;
    
}