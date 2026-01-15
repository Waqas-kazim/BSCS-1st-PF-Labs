#include<iostream>
using namespace std;
// 11. Write a function which take the radius of circle and return the area of circle
double areaOfCirlce(double radius){
    return 3.14*radius*radius;
}
main(){
    double radius, area;
    cout << "enter radius of circle: " ;
    cin >> radius;
    area = areaOfCirlce(radius);
    cout << "Area is: " << area;

    
}