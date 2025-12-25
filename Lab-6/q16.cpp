#include<iostream>
using namespace std;
// 16. Modify question 2 in such way that addition and multiplication is returned and display in main function 

float add(float a, float b, float c, float d, float e){
    return a + b + c + d + e;
}
float multiply(float a, float b, float c, float d, float e){
    return a * b * c * d * e;
}
main(){
    float a=1, b=2, c=3, d=4, e=5;
    cout<<"Addition of constants: "<<add(1.1, 2.2, 3.3, 4.4, 5.5)<<endl;
    cout<<"Multiplication of constants: "<<multiply(1.1, 2.2, 3.3, 4.4, 5.5)<<endl;
    cout<<"Addition of variables: "<<add(a, b, c, d, e)<<endl;
    cout<<"Multiplication of variables: "<<multiply(a, b, c, d, e)<<endl;
}