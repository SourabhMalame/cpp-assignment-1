// WAP to input any number and display the reverse.

#include <iostream>

using namespace std;


int main(){
	
	
	int num,rem,rev=0;
	
	
	cout << "Enter Any Three Digit Number : ";
	cin>> num;//123
	
	
	rem=num%10;//3
	rev=rev*10+rem;//3
	num=num/10;//12
	
	rem=num%10;//2
	rev=rev*10+rem;//32
	num=num/10;//1
	
	rem=num%10;// 1
	rev=rev*10+rem;//321
	num=num/10;//0
	
	cout << "Rev of 123 is " << rev;
	
	
	
	
	
}

