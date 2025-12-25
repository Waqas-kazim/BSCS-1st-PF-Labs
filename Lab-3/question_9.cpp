#include<iostream>
using namespace std;
main()
{
    float weight, height, bmi;
    cout << "Enter weight : ";
    cin >> weight;
    cout << "Enter height : ";
    cin >> height;
    bmi = weight/(height*height);
    if(bmi>30)
        {
            cout << "Obese";
        }else if(bmi>=25 && bmi <30)
        {
            cout << "You are overweight";
        }else if(bmi>=8.5 && bmi <=24.9){
            cout << "You are Normal";
        }else if(bmi < 8.5){
            cout << "You are Underweight";
        }
    
}