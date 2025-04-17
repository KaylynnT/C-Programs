/*Kaylynn Trevillion
COSC 1336 002
11/9/2023
Purpose: To work some repetition problems (Lab5L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	////Write a for loop to calculate  the total of all the numbers 
	//between 100 and 200 included (i.e., 100 + 101 + … + 199 + 200); 
	//output the total after the loop has ended.
	int sum = 0;
	for (int i = 100; i <= 200; i++)
		sum += i;
	printf("The total of numbers from 100 to 200 inclusive is %d. \n", sum);

	//Write a do-while loop that repeatedly prompts the user for an integer 
	//and scans values until a positive number is input.  

	do {
		printf("Please enter an integer (Positive integer ends the loop): "); 
		scanf("%d", &sum);
	} while (sum <= 0);

	//Write a sentinel loop for an employer who is interested in the average age of her employees. 
	//Prompt the user repeatedly and read a series of ages and terminate when a negative number is read.  
	//Since there are no employees with a negative age it makes an appropriate sentinel value.  
	//Print the average as a double value after the loop ends.
	sum = 0;
	int count = -1, age = 0;
	while (age >= 0) {
		sum += age;
		count++;
		printf("Please enter an age: ");
		scanf("%d", &age);
	}
	printf("The average age is %.2f.\n", (double)sum/count); 
}
