// 10.	Write program to write student records (name, age, and marks) to a file and read them back.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream fout("q10.txt");
    if(fout.is_open()){
        int n;
        cout << "Enter number of students: ";
        cin >> n;
        for(int i = 0; i < n; i++){
            string name;
            int age;
            float marks;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter marks: ";
            cin >> marks;
            fout << name << " " << age << " " << marks << endl;
        }
        fout.close();
    }else{
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    ifstream fin("q10.txt");
    if(fin.is_open()){
        string name;
        int age;
        float marks;
        cout << "Student Records from file:" << endl;
        while(fin >> name >> age >> marks){
            cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
        }
        fin.close();
        return 0;
    }else{
        cout << "Unable to open file for reading" << endl;
        return 1;
    }
}