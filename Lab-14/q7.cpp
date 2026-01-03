// 7.	Write a program to copy the contents of one file to another.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("q7_source.txt");
    ofstream fout("q7_destination.txt");
    if(fin.is_open() && fout.is_open()){
        char ch;
        while (fin.get(ch)){
            fout.put(ch);
        }
        cout << "File copied successfully." << endl;
        fin.close();
        fout.close();
        return 0;
    }else{
        cout << "Unable to open file" << endl;
        return 1;
    }

}