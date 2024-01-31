#include <stdio.h>

void main () {
	int num1, num2, result;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	printf("Enter a number: ");
	scanf("%d", &num2);
	
	result = num1 + num2;
	
	printf("Sum of entered two number: %d \n", result);
};
