#include "iostream"

using namespace std;

int main(){

	int number,power;

	cout<<"enter the number";
	cin>>number;

	cout<<"enter the power";
	cin>>power;

	int powerhelp = 1;

	for(int i = 0;i<power;i++){
		powerhelp = number *powerhelp;
	}

	cout<<powerhelp;

	return 0;
}
