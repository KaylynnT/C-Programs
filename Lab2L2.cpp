/*Kaylynn Trevillion
  COSC 1336 002
  9/14/2023
* Purpose: To find the area and perimeter of a right triangle (Lab2L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	double a, b;
	
	//Prompt with “Please enter a value for a: “
	printf("Please enter a value for a: ");
	//Read a.
	scanf("%lf", &a);
	//Prompt with “Please enter a value for b : “
	printf("Please enter a value for b: ");
	//Read b.
	scanf("%lf", &b);
	//Calculate c = sqrt(a * a + b * b)
	double c = sqrt(a * a + b * b);
	//Calculate area = 0.5 * a * b
	double area = 0.5 * a * b;
	//Calculate perimeter = a + b + c
	double perimeter = a + b + c;
	//Output “The length of your sides are a and b, so 
	//the length of your hypotenuse is c.”
	printf("The length of your sides are %.4f and %.4f,", a, b);
	printf("so the length of your hypotenuse is %.4f.\n", c);
	//Output “The area of your triangle is area.”
	printf("The area of your triangle is %.4f.\n", area);
	//Output “The perimeter of your triangle is perimeter.”
	printf("The perimeter of your triangle is %.4f.\n", perimeter);


}