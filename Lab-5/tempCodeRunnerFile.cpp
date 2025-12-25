#include<iostream>
using namespace std;
// 3. Modify the two number calculator problem of previous lab using while loop in a way that user press e for exit: Solve the
//  two integer calculator problem for operators (*,-, +, /,% ) using both switch
main(){
    int a, b;
    char op;
    while(true){
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Enter operator (+, -, *, /, %) or e to exit: ";
        cin >> op;
        if(op == 'e'){
            break;
        }
        switch(op){
            case '+':
                cout << "Result: " << a + b << endl;
                break;
            case '-':
                cout << "Result: " << a - b << endl;
                break;
            case '*':
                cout << "Result: " << a * b << endl;
                break;
            case '/':
                if(b != 0){
                    cout << "Result: " << a / b << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case '%':
                if(b != 0){
                    cout << "Result: " << a % b << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
        }
    }
    
}