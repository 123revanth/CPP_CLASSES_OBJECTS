#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main(){
    
    string input;
    cout<<"enter a word";
    getline(cin, input);
    
    for(int i =0;i<input.size();i++){
        if(input[i] >= 'a' && input[i] <= 'z')input[i] -= 32;
        else if(input[i] == ' ')cout<<" ";
        else input[i] += 32;
    }

    cout<<input;

    return 0;
}
