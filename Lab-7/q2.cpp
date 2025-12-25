#include<iostream>
using namespace std;
int avg(int a, int b , int c, int d, int e=5){
    return (a+b+c+d+e)/5.0;
}
main(){
    int a = 2;
    int b = 4;
    int c = 8;
    int d = 8;
    float average = avg(a, b, c, d);
    cout << "average: " << average << endl;


}