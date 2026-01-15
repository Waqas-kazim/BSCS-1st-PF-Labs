#include<iostream>
#include<math.h>
using namespace std;
// 14. Use following math function in main constants and variables
main(){
    double x, y;
    int op;
    cout << "enter x: ";
    cin>> x;
    cout << "enter y: ";
    cin>> y;
cout << "enter operation (1-pow, 2-sqrt, 3-sin, 4-tan): ";
    cin >> op;
    switch(op){
        case 1:
            cout << "pow of x, y: " << pow(x, y) << endl;
            break;
        case 2:
            cout << "sqrt of x: " << sqrt(x) << endl;
            break;
        case 3:
            cout << "sin of x: " << sin(x) << endl;
            break;
        case 4:
            cout << "tan of x: " << tan(x) << endl;
            break;
        default:
            cout << "Invalid operation selected." << endl;
            break;
    }
}