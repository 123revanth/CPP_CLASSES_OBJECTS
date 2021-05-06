#include <iostream>
using namespace std;
int main(){

    int numofnum;
    cout<<"enter the size of array";
    cin>>numofnum;

    int arr[numofnum];

    for(int i = 0; i<numofnum ;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<numofnum;i++){
        for(int j = 0;j<numofnum-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

   int arr2[numofnum];

   for(int i = 0; i<numofnum;i++){
      for(int j = numofnum;j>0;j--){
          int temp2 = arr[i];
          arr[i] = arr2[i];
          arr2[i] = temp2;  
      }
   }

   cout<<"________________________________________________________________________________"<<endl;

   cout<<"accesending ordered array"<<endl;

   for(int i = 0;i<numofnum +1;i++){
       cout<<arr[i]<<endl;
   }
   
   cout<<"descening ordered array"<<endl;

   for(int i = 0;i<numofnum +1;i++){
       cout<<arr2[i]<<endl;
   }



    return 0;
}
