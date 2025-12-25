#include<iostream>
using namespace std;
// 3.Declare five pointers to integers. Input their values and pass them to a function which will display largest among them. 
int largest(int *a, int *b, int *c, int *d, int *e){
    int max = *a;
    if(*b >max) max = *b;
    if(*c> max) max =*c;
    if(*d >max)max = *d;
    if(*e >max) max = *e;
    return max;
}
main(){
    int result;
    int *p1=new int(0);
    int *p2=new int(0);
    int *p3=new int(0);
    int *p4=new int(0);
    int *p5=new int(0);
    cout << "enter five numbers: " ;
    cin >> *p1>>*p2>>*p3>>*p4>>*p5;
    result = largest(p1,p2,p3,p4,p5);
    cout << "largest: " << result;
}