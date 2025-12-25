#include<iostream>
using namespace std;
// 15. Save the following string in an array and display it on screen exactly in the same manner:
int main(){
    const char text[] = R"(  The most likely way for the world to be destroyed, 
          Most experts agree, 'is by accident'. 
               That's where we come in; 
  "We're computer professionals. We cause accidents.")";
    cout <<text << endl;
    return 0;
}