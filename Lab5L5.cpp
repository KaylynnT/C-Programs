/*Kaylynn Trevillion
COSC 1336 002
11/7/2023
Purpose: To print out a multiplication table from 0-12 (Lab5L5)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("      0   1   2   3   4   5   6   7   8   9  10  11  12\n");
	printf("-------------------------------------------------------\n");
	for (int i = 0; i <= 12; i++) {
		printf("%2d|", i);
		for (int j = 0; j <= 12; j++)
			printf("%4d", i * j);
		printf("\n");
	}
}