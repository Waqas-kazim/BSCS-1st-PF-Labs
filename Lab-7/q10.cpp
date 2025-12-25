#include<iostream>
using namespace std;
// 10. Write a template function which take the radius of circle and return the area of circle 
template <typename T>
T areaCalc(T radius){
    return 3.14 * radius *radius;
}
main(){
    int radius;
    float area;
    cout << "enter radius: " << endl;
    cin >> radius;
    area = areaCalc(radius);
    cout << "area is: " << area << endl;
    
    
}