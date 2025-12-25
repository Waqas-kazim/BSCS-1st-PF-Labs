#include<iostream>
using namespace std;
// 25. Implement following functions in menu driven way: void menu(); void input(int[]);void output(int[]);void 
// large(int[]); void small(int[]);void sortA(int[]);void sortD(int[]);void search(int[]);const int Size=10;int main(){ }

const int Size = 10;

void menu();
void input(int arr[]);
void output(int arr[]);
void large(int arr[]);
void small(int arr[]);
void sortA(int arr[]);
void sortD(int arr[]);
void search(int arr[]);

int main(){
    int arr[Size];
    bool initialized = false;
    int choice;
    
    do{
        menu();
        cin >> choice;
        
        switch(choice){
            case 1:
                input(arr);
                initialized = true;
                break;
            case 2:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                output(arr);
                break;
            case 3:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                large(arr);
                break;
            case 4:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                small(arr);
                break;
            case 5:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                sortA(arr);
                break;
            case 6:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                sortD(arr);
                break;
            case 7:
                if(!initialized){ cout << "Please input the array first.\n"; break; }
                search(arr);
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice!= 8);
    
    return 0;
}

void menu(){
    cout << "\n----- Menu ===---\n";
    cout << "1. Input Array\n";
    cout << "2. Output Array\n";
    cout << "3. Find Largest\n";
    cout << "4. Find Smallest\n";
    cout << "5. Sort Ascending\n";
    cout << "6. Sort Descending\n";
    cout << "7. Search Element\n";
    cout << "8. Exit\n";
    cout << "Enter choice: ";
}

void input(int arr[]){
    cout << "Enter " <<Size<< " elements:\n";
    for(int i =0; i<Size; i++){
        cout << "enter at index ["<<i<<"]";
        cin >> arr[i];
    }
}

void output(int arr[]){
    cout << "Array: ";
    for(int i= 0; i<Size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void large(int arr[]){
    int max=arr[0];
    for(int i = 1;i< Size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest element: " <<max << endl;
}

void small(int arr[]){
    int min =arr[0];
    for(int i= 1;i < Size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<< "Smallest element: "<< min<< endl;
}

void sortA(int arr[]){
    for(int i = 0; i < Size - 1; i++){
        for(int j = 0; j < Size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted in ascending order\n";
}

void sortD(int arr[]){
    for(int i = 0; i<Size - 1; i++){
        for(int j =0; j < Size - i - 1; j++){
            if(arr[j] <arr[j + 1]){
                int temp =arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"Array sorted in descending order\n";
}

void search(int arr[]){
    int num;
    cout<< "Enter element to search: ";
    cin >>num;
    
    bool found= false;
    for(int i = 0; i < Size; i++){
        if(arr[i]== num){
            cout <<"Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    
    if(!found){
        cout << "Element not found\n";
    }
}