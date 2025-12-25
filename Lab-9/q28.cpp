#include<iostream>
#include<cstring>
using namespace std;
// 28. A palindrome string is a string that spell forward and backward same. Examples include "radar", "level", "madam", "pop", "noon", and "refer". Write a function which takes two strings as argument and check whether they are palindrome or not.

bool isPalindrome(char str[]);

int main(){
    char name[50];
    cout << "Enter a word: ";
    cin.getline(name, 50);
    
    if(isPalindrome(name)){
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }
    
    return 0;
}

bool isPalindrome(char str[]){
    int length = strlen(str);
    
    for(int i = 0; i < length / 2; i++){
        if(str[i] != str[length - 1 - i]){
            return false;
        }
    }
    return true;
}