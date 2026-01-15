#include <iostream>
using namespace std;
// 16. Count how many vowels are in the above string
int main()
{
    int count = 0;
    const char text[] = R"(  The most likely way for the world to be destroyed, 
          Most experts agree, 'is by accident'. 
               That's where we come in; 
  "We're computer professionals. We cause accidents.")";
    for (int i = 0; text[i] != '\0'; i++) {
        char c =text[i];
        if (c=='a' ||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A' ||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }
    cout<<"Vowel count: " << count << endl;
    return 0;
}