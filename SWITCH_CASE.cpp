#include <iostream>
using namespace std;
int main(){

    char yon = 'y';

    while(yon == 'y'){

            char optr;
            cout<<"enter from(+-x/)";
            cin>>optr;

            int num1;
            cout<<"enter your first number";
            cin>>num1;

            int num2;
            cout<<"enter your second number";
            cin>>num2;

        switch(optr){
    
            case '+':
                cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
                break;

            case '-':
                cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
                break;

            case 'x':
                cout<<"The product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
                break;

            case '/':
                cout<<"The quotient of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
                break;

            default:
                if(optr == '*'){
                    cout<<"The product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
                }
                else{
                    cout<<"the operator entered is not an valid operator, please enter a valid operator";
                    break;
                }
        }
        cout<<"do you want to continue(y/n)";
        cin>>yon;
 }
}
