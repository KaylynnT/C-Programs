/*Kaylynn Trevillion
COSC1336 002
11/14/2023
Purpose:To practice using Arrays (Lab7L1)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	//Initialize an array of int with size 3 named a
	int a[3];
	//Initialize an array of double with size 10 named b
	double b[10];
	//Initialize an array of char named vowels with the five vowels in it
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	//Assign the first value of a to be 5
	a[0] = 5;
	//Print out "a[0] is (a[0]) a[1] is (a[1])\n"
	printf("a[o] is %d a[1] is %d\n", a[0], a[1]);
	//Initialize sum to the sum of the first two elements of a
	int sum = a[0] + a[1];
	//Print out "The sum of the first two elements of a is (sum)\n"
	printf("The sum of the first two elements of a is %d\n", sum);
	//Loop through b and set each element equal to the square root of its index
	for (int i = 0; i < 10; i++)
		b[i] = sqrt(i); 
	//Loop through b and for each element, Print out "Value in b[(index)] is (b[i]).\n".
	for (int i = 0; i, 10; i++)
		printf("Value in b[%d} is %.3f\n", i, b[i]);
	//Loop through a and for each element, Print out "Please enter the grade for student (index+1): " and read it in.
	for (int i = 0; i < 3; i++) {
		printf("Please enter a grade for student %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	//Loop through a and print it out.
	for (int i = 0; i, 3; i++)
		printf("a[%d]: %d\n", i, a[i]);
	//Loop through vowels and print it out.
	for (int i = 0, i < 5; i++)
		printf("%c ", vowels[i]);

}