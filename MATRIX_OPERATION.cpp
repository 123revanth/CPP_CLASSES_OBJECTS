#include <iostream>
using namespace std;
int main(){

    int rowsandcols;
    cout<<"enter the number of rows and cols for both the matrixes";
    cin>>rowsandcols;

    int arr[rowsandcols][rowsandcols];
    int arr2[rowsandcols][rowsandcols];
    int ans[rowsandcols][rowsandcols];

    cout<<"enter the content of the first matrix"<<endl;

    for(int i = 0;i<rowsandcols;i++){
        for(int j = 0;j<rowsandcols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"enter the content of the seond matrix"<<endl;

    for(int i = 0;i<rowsandcols;i++){
        for(int j = 0;j<rowsandcols;j++){
            cin>>arr2[i][j];
        }
    }

    char optr;
    cout<<"enter the operation you want to do with the matrix";
    cin>>optr;

    switch (optr)
    {
    case '+':
        for(int i = 0;i<rowsandcols;i++){
            for(int j = 0;j<rowsandcols;j++){
                 int sum = arr[i][j] + arr2[i][j];
                 ans[i][j] = sum;
                 sum = sum - sum;
           }
        }
        break;

    case '-':
        for(int i = 0;i<rowsandcols;i++){
            for(int j = 0;j<rowsandcols;j++){
                 int difference = arr[i][j] - arr2[i][j];
                 ans[i][j] = difference;
                 difference = difference - difference;
           }
        }
        break;

    case '*':
        for(int i = 0;i<rowsandcols;i++){
            for(int j = 0;j<rowsandcols;j++){
                 int product = arr[i][j] * arr2[i][j];
                 ans[i][j] = product;
                 product = product - product;
           }
        }
        break;

    case '/':
        for(int i = 0;i<rowsandcols;i++){
            for(int j = 0;j<rowsandcols;j++){
                 int quotient = arr[i][j] / arr2[i][j];
                 ans[i][j] = quotient;
                 quotient = quotient - quotient;
           }
        }
        break;
    
    default:
        cout<<"the entered operator is invalid and connot be performed"<<endl;
        break;
    }

    for(int i = 0;i<rowsandcols;i++){
        for(int j = 0;j<rowsandcols;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
