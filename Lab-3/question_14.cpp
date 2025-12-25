#include <iostream>
using namespace std;
main(){
    int fv, sv;
    float result;
    char op;
    cout << "enter two numbers" << endl;
    cin >> fv>> sv;
    cout << "enter the operation"<< endl;
    cin>>op;
    if(op=='+'){
        result =  fv + sv;
    }else if(op=='-'){
        result = fv - sv;
    }else if(op=='*'){
        result = fv * sv;
    }else if(op=='%'){
        result = fv % sv;
    }else if(op=='/'){
        result = fv / sv;
    }
    cout << "The result is: " << result;
}