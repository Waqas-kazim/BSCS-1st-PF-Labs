// 8.	Create a program to write a list of names and ages to a file, then read and display them.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream fout("q8.txt");
    if(fout.is_open()){
        int n;
        cout << "Enter number of entries: ";
        cin >> n;
        for(int i = 0;i<n; i++){
            string name;
            int age;
            cout << "Enter name: ";
            cin>> name;
            cout <<"Enter age: ";
            cin >> age;
            fout <<name << " " << age << endl;
        }
        fout.close();
    }else{
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    ifstream fin("q8.txt");
    if(fin.is_open()){
        string name;
        int age;
        cout <<"Names and Ages from file:"<< endl;
        while(fin >> name >> age){
            cout << "Name: " << name << ", Age: " << age << endl;
        }
        fin.close();
        return 0;
    }else{
        cout << "file not opened for reading" << endl;
        return 1;
    }
}