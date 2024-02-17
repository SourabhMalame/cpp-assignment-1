/* WAP to calculate area of circle,Triangle and square.
[Area of circle = 3.14*rad*rad, Area of triangle = 0.5*base*height, Area of square = side*side]
*/

10.000000

#include <iostream>

using namespace std;

float circle(int radius); // Function Declaration 
float triangle(int base, int height);


int main(){
	int radius,base,height;
	/*
	// Area of circle 
	cout << "Enter Radius of circle : ";
	cin >> 	radius;
	
	float x =  circle(radius); // function Call 
	
	cout << "Area of circle is " << x ;
	*/
	
	// Area of triangle
	
	cout << "Enter value of base : ";
	cin >> base;
	
	cout << "Enter value of height : ";
	cin >> height;
	
	
	float ans2 = triangle(base, height);
	
	cout << "\n Area of Triangle is " << ans2;
	
	
}

// Function Define
float circle(int radius){
	
	return 3.14*radius*radius;
	
}


float triangle(int base, int height){
	
	return 05*base*height;
}
















