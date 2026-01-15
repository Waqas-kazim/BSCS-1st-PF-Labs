#include<iostream>
using namespace std;
main(){
    int arr1[3][3]={};
    int arr2[3][3]={};
    int sum[3][3]={};
    int product[3][3]={};
    int sumOfFirstRow = 0;
    int sumOfSecondRow = 0;
    int sumOfThirdRow = 0;
    cout << "============matrix 1==================="<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){

            for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                    if(arr1[i][j]!=0)
                        cout << arr1[i][j] << "\t";
                    else
                        cout << "?" << "\t";
                }
                cout << endl;
            }

            cout << "enter value for location arr1[";
            cout << i << "][" << j << "] = ";
            cin >> arr1[i][j] ;
        }
    }
    cout << "============matrix 2==================="<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << "enter value for location arr2[";
            cout << i << "][" << j << "] = ";
            cin >> arr2[i][j] ;
        }
    }
    // Addition
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // first row
    for(int j = 0; j<3; j++){
        sumOfFirstRow+=sum[0][j];
    }
    
    // second row sum
    for(int j = 0; j<3; j++){
        sumOfSecondRow+=sum[1][j];
    }
    
    // third row sum
    for(int j = 0; j<3; j++){
        sumOfThirdRow+=sum[2][j];
    }
    // product
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            product[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
        cout << "============ result ==================="<<endl;
        cout << "============ matrix 1 ==================="<<endl;
        
        for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                        cout << arr1[i][j] << "\t";
                    }
                    cout << endl;
                }
                cout << "============ matrix 2 ==================="<<endl;
                for(int i = 0; i<3; i++){
                        for(int j = 0; j<3; j++){
                                cout << arr2[i][j] << "\t";
                            }
                            cout << endl;
                        }
                        
                        
                        
cout << "============ sum ==================="<<endl;
// show sum
for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout << sum[i][j] << "\t";
    }
    cout << endl;
}
cout << "============ product ==================="<<endl;

// show product
for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout << product[i][j] << "\t";
    }
    cout << endl;
}
cout << "============ sum of first row  ==================="<<endl;
cout << sumOfFirstRow<<endl;
cout << "============ sum of first row  ==================="<<endl;
cout << sumOfSecondRow<<endl;

cout << "============ sum of first row  ==================="<<endl;
cout << sumOfThirdRow;
}