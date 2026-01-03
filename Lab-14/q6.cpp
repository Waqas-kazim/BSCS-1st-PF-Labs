// 6.	Write a program to count the number of words in a text file. 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream fin("q6.txt");
    if(fin.is_open()){

        string word;
        int count = 0;
        while (fin >> word){
            count++;
        }
        cout << "The number of words is: " << count << endl;
        fin.close();
        return 0;
    }else{
        cout << "Unable to open file" << endl;
        return 1;
    }
}