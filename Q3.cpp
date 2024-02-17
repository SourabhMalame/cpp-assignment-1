// WAP to find the maximum number amongst three numbers

#include <iostream>
using namespace std;


int main(){
	
	
	int num1,num2,num3,max=0;
	
	cout << "Enter Any Number : ";
	cin >> num1;
	cout << "Enter Any Number : ";
	cin >> num2;
	cout << "Enter Any Number : ";
	cin >> num3;
	
	if(num1>num2){
		
		max=num1;
	} else if(num2>num3){
		max=num2;
	}else{
		max=num3;
	}
	
	
		
	
}




