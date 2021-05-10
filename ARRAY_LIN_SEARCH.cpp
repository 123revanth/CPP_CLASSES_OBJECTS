#include <iostream>
using namespace std;

int linSearch(int inp,int key,int arr[]){

    bool tof = 0;

    for(int i = 0;i<inp;i++){
        if(key == arr[i]) {
            tof = 1;
        }
        else{
            continue;
        }
    }
    if(tof == 1)return 1;
    else return 0;
}
int main(){

    int inp;
    cout<<"enter the size of your array:";
    cin>>inp;

    int arr[inp];

    cout<<"enter the content of the array:";

    for(int i = 0;i<inp;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the number that you want to search:";
    cin>>key;

    cout<<linSearch(inp,key,arr);

    return 0;
}
