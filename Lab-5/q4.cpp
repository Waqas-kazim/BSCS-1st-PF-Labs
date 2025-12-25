#include<iostream>
using namespace std;
main(){
    int x, y=0;
    cout << "Enter the number : " << endl;
    cin >> x;
    for(int i = x; i!=0; ){
        y = y * 10 + (i%10);
        i = i/10;
    }
    cout << "reverse of "<< x << " is " << y << endl;
}