// 9.	Write a program to replace a specific word in a file with another word.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string targetWord, replacementWord;
    cout << "Enter the word to be replaced: ";
    cin >> targetWord;
    cout << "Enter the replacement word: ";
    cin >> replacementWord;

    ifstream fin("q9.txt");
    if(!fin.is_open()){
        cout << "Unable to open file for reading" << endl;
        return 1;
    }

    string fileContent;
    string word;
    while(fin >> word){
        if(word == targetWord){
            fileContent += replacementWord + " ";
        }else{
            fileContent += word + " ";
        }
    }
    fin.close();

    ofstream fout("q9.txt");
    if(!fout.is_open()){
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    fout << fileContent;
    fout.close();

    cout << "Word replacement completed." << endl;
    return 0;
}