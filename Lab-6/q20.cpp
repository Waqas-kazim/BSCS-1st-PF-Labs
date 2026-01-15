#include<iostream>
using namespace std;
// 13. Modify the two-number calculator problem and solve it using functions for add, sub etc. Return the results from these 
// functions and display them in main. 
double product(double a, double b){
    return a*b;
}
double divide(double a, double b){
    return a/b;
}
double add(double a, double b){
    return a+b;
}
double subtraction(double a, double b){
    return a-b;
}
main(){
    double a, b, result;
    char op;
    cout << "enter a: " ;
    cin >> a;
    cout << "enter b: " ;
    cin >> b;
    cout << "enter operator (+, -, *, /): " ;
    cin >> op;
    if(op == '+'){
        result = add(a, b);
    }else if(op == '-'){
        result = subtraction(a, b);
    }else if(op == '*'){
        result = product(a, b);
    }else if(op == '/'){
        result = divide(a, b);
    }else{
        cout << "Wrong operator";
        return 0;
    }
    cout << "Result is: " << result;
}