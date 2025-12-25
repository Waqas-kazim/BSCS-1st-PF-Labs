#include<iostream>
using namespace std;
main()
{
    int marks;
    string grade;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks<=100 && marks >=90){
        grade = "A+";
    }else if(marks<90 && marks >=80){
        grade = 'A';
    }else if(marks<80 && marks >=70){
        grade = 'B';
    }else if(marks<70 && marks >=60){
        grade = 'C';
    }else if(marks<60 && marks >=50){
        grade = 'D';
    }else if(marks<50 && marks >=0){
        grade = 'F';
    }else{
        cout << "you entered the wrong number";
    }
    cout << "your grade is: \"" << grade << "\"";
}