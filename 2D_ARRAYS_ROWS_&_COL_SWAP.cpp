#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"enter the size of columns and rows";
    cin>>size;

    int arr[size][size];

    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"This is the array that you have entered"<<endl;

    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0;i<size/2;i++){
        for(int j = 0;j<size;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    cout<<"this is the edited array"<<endl;

    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
