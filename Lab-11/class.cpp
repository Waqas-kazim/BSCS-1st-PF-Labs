#include<iostream>
using namespace std;
class Calc
{
    private:
    int a;
    int b;
    public:
    void get(){
        cout << "enter a: " ;
        cin >> a;
        cout << "enter b: " ;
        cin >> b;
    }
    void add(){
        cout <<"addition: " << a+b<< endl;
    }
    void subtract(){
        cout <<"subtraction: " << a-b<< endl;
    }
    void multiply(){
        cout <<"multiplication: " << a*b<< endl;
    }
    void divide(){
        cout <<"division: " <<  a/b<< endl;
    }
};
main(){
    Calc obj;
    obj.get();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();
}