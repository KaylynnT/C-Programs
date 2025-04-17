/*Kaylynn Trevillion
COSC 1336 002
10/19/2023
Purpose: To identify waht a compressed-gas cylinder hold 
bases on its identifying color (Lab4L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char colorLetter;
	printf("Please enter the first letter of the identifying color");
	printf(" of the canister: ");
	scanf(" %c", &colorLetter);

	switch (colorLetter) {
	case 'o':
	case 'O':
		printf("An orange canister represents ammonia.\n");
		break;
	case 'b':
	case 'B':
		printf("A brown canister represents carbon monoxide. \n");
		break;
	case 'y':
	case 'Y':
		printf("A yellow canister represents hydrogen.\n");
		break;
	case 'g':
	case 'G':
		printf("A green canister represents oxygen.");
		break;
	default:
		printf("Contents unknown for color letter %c.\n", colorLetter);


	}

}