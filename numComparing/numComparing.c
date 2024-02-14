#include <stdio.h>

void main () {
	float num1, num2;
	
	printf("Enter first number: ");
	scanf("%f", &num1);
	
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	if(num1 > num2) {
		printf("The maximum number is: %0.3f\n", num1);
	} else {
		printf("The maximum number is: %0.3f\n", num2);
	};
	
};
