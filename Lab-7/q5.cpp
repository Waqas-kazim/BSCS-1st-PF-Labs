#include<iostream>
using namespace std;
// 5. Write a function with name input and output. These functions will be used for input and output three of their arguments. 
// Overload these functions for int, float and character data types
void input(int &a, int &b, int &c){
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
}
void input(float &a, float &b, float &c){
    cout << "Enter three floats: ";
    cin >> a >> b >> c;
}
void input(char &a, char &b, char &c){
    cout << "Enter three character: ";
    cin >> a >> b >> c;
}
void output(int a, int b, int c){
    cout << "You entered integers: " << a << ", " << b << ", " << c << endl;
}
void output(float a, float b, float c){
    cout << "You entered floats: " << a << ", " << b << ", " << c << endl;
}
void output(char a, char b, char c){
    cout << "You entered characters: " << a << ", " << b << ", " << c << endl;  
}
main(){
    int int1, int2, int3;
    float float1, float2, float3;
    char char1, char2, char3;

    input(int1, int2, int3);
    output(int1, int2, int3);

    input(float1, float2, float3);
    output(float1, float2, float3);

    input(char1, char2, char3);
    output(char1, char2, char3); 

}