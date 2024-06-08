/* Program to calculate Circle Area then print it on screen */

#include <iostream>
#include <cmath> 
using namespace std;


int main()

{

	float radius;

	cout << "Please enter the radius of the circle " << endl;
	cin >> radius;

	float PI = 3.14;
	float Area = PI * ( radius * radius);

	// or we can use  ==>  Area = M_PI * (radius * radius); 
	// M_PI is a macro that defines the value of (pi) in the <cmath>


	cout << "The area of the circle is : " << Area << endl;


	return 0;

	// created by @ilyes_Trabelsi
}
