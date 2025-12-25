#include<iostream>
using namespace std;
int add(int, int, int=1, int=2, int=3);
int sub(int, int, int=1, int=2, int=3);
int mul(int, int, int=1, int=2, int=3);

int main(){
    int a=3, b=3, c=3, d=3, e=3;
    cout <<"addition: " <<  add(a, b, c) << endl;
    cout << "subtraction: " << sub(a, b, c, d, e) << endl;
    cout <<"multiplication: " <<  mul(a, b, c, d, e) << endl;
    return 0;
}
int add(int a, int b, int c, int d, int e){
    return a+b+c+d+e;
}
int sub(int a, int b, int c, int d, int e){
    return a-b-c-d-e;
}
int mul(int a, int b, int c, int d, int e){
    return a*b*c*d*e;
}