#include<iostream>
using namespace std;
// 10.	Create class for NTU students with private properties: RegNumber, Name, Semester, Degree, Department, and CGPA. Write functions to set and get properties of the class. Also write a display function. Create two objects and call functions.
class NTUStudent
{
    private:
    string RegNumber;
    string Name;
    int Semester;
    string Degree;
    string Department;
    float CGPA;
    public:
    void set(){
        cout<<"Enter Registration Number: ";
        cin>>RegNumber;
        cout<<"Enter Name:";
        cin >>Name;
        cout <<"Enter Semester: ";
        cin>> Semester;    
        cout <<"Enter Degree:";
        cin>>Degree;
        cout<<" Enter Department: ";
        cin>>Department;
        cout<< "Enter CGPA: ";
        cin>>CGPA;
    }
    void get(){
        cout<<"Registration Number: "<< RegNumber<<endl;
        cout<<"Name: "<< Name<<endl;
        cout<<"Semester: "<< Semester<<endl;    
        cout<<"Degree:"<<Degree<<endl;
        cout<<"Department: "<< Department<<endl;
        cout<<"CGPA: "<< CGPA<<endl;
    }
    void display(){
        cout<<"Student Details:"<<endl;
        get();
    }
};
main(){
    NTUStudent student1, student2;
    cout<<"Enter details for Student 1:"<<endl;
    student1.set();
    cout<<"Enter details for Student 2:"<<endl;
    student2.set();
    cout<<"Details of Student 1:"<<endl;
    student1.display();
    cout<<"Details of Student 2:"<<endl;
    student2.display();
    
}