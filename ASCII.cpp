#include <iostream>
using namespace std;
int main(){
  char yon = 'y';
  while(yon == 'y'){
    
    char inp;
    cout<<"enter a character:";
    cin>>inp;

    int ascii = int(inp);

    if (ascii >=65 && ascii <= 91)
        cout<<ascii - 64<<endl;
    else{
        if(ascii >=97 && ascii <= 132) cout<<ascii - 96<<endl;
        else cout<<" BUDDAGA enter valid alphabet"<<endl;
    }

    cout<<"would you like to continue(y/n)";
    cin>>yon;
}

    return 0;
}
