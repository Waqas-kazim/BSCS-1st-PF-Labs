#include <iostream>
using namespace std;

// 11. Write a template function for swap. Use this function inside main for floats and characters
template <typename T>
void myswap(T &n, T &m){
    T temp = n;
    n = m;
    m = temp;
}

int main(){
    int a = 4;
    int b = 5;
    myswap(a, b);
    cout << "a = " << a << ", b = " << b << '\n';

    float x = 1.2f, y = 3.4f;
    myswap(x, y);
    cout << "x = " << x << ", y = " << y << '\n';

    char c1 = 'A', c2 = 'Z';
    myswap(c1, c2);
    cout << "c1 = " << c1 << ", c2 = " << c2 << '\n';

    return 0;
}