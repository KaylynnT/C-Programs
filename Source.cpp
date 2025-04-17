/*  Lab1L1- Surface Area of a Sphere
	Kaylynn Trevillion
	COSC 1336.002
	8/29/2023
*/

#include <stdio.h>

int main() {

// Variables//
	double radius;
	double surfaceArea;
	double PI = 3.141592;
//Input//
	printf("Input the value of your radius: ");
	scanf(radius);
//Computing//
	surfaceArea = 4 * PI * radius * radius;
//Output//
	printf("Your radius is: " + radius +"\n");
	printf("Your surface area is :" + surfaceArea + "\n");

	return 0;

}