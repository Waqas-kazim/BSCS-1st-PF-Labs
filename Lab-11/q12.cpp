#include<iostream>
using namespace std;
// 12.	Create a class Computer with properties: Brand Name, Speed, Memory Size. Create input and output functions. Create and object and a pointer assign object address to the pointer. Call class functions using pointers.
class Computer {
    string brandName;
    float speed; // in GHz
    int memorySize; // in GB
public:
    void input() {
        cout << "Enter Brand Name: ";
        cin >> brandName;
        cout << "Enter Speed (in GHz): ";
        cin >> speed;
        cout << "Enter Memory Size (in GB): ";
        cin >> memorySize;
    }
    void output() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Speed: " << speed << " GHz" << endl;
        cout << "Memory Size: " << memorySize << " GB" << endl;
    }
};

main(){
    Computer comp;
    Computer* ptr = &comp;
    ptr->input();
    ptr->output();
    return 0;
    
}