#include<iostream>
using namespace std;
// 12. Write a function which take the radius of circle as first argument and a char (a or c) as second argument. If second argument 
// is a then return the area of circle. If the second argument is c then return the circumference of circle 
double areaOfCirlce(double radius, char opt){
    if(opt == 'a'){
        return 3.14*radius*radius;
    }else if(opt == 'c'){
        return 2.0*3.14*radius;
    }else{
        return 0;
    }
}
main(){
    double radius, area;
    char option;
    cout << "enter radius of circle: " ;
    cin >> radius;
    cout << "enter a for area and c for circumference: " ;
    cin>> option;
    area = areaOfCirlce(radius, option);
    if(area){
        cout << "Result is: " << area;
    }else{
        cout << "Wrong input";
    }
    
}