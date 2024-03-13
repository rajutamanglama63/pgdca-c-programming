#include <stdio.h>

void main () {
	float number;
	
	printf("Enter the number: ");
	scanf("%f", &number);
	
	if(number % 5 == 0 && number % 11 == 0) {
		printf("Entered number is divisible by both 5 and 11.\n");
	} else {
		printf("Entered number is not divisible by both.\n");
	};
};
