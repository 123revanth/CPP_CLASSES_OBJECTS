#include "iostream"
#include "array"
#include "iterator"
#include "algorithm"
#include "string"

using namespace std;

int main(){

    int a;
    cout<<"enter a number:";
    cin>>a;

    int b;
    cout<<"enter another number";
    cin>>b;

    a =a+b;
    b=a-b;
    a = a-b;

    cout<<a<<endl<<b;

    return 0;
}
