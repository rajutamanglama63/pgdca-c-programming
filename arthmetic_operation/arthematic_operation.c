#include <stdio.h>

void main () {
	float num1, num2, add, sub, divide, multiply;
	
	printf("Enter a number: ");
	scanf("%f", &num1);
	
	printf("Enter a number: ");
	scanf("%f", &num2);
	
	add = num1 + num2;
	sub = num1 - num2;
	divide = num1 / num2;
	multiply = num1 * num2;

	printf("-----------arthematic operations-----------\n\n");
	printf("Addition: %f \n\n", add);
	printf("subtraction: %f \n\n", sub);
	printf("division: %f \n\n", divide);
	printf("multiplication: %f \n\n", multiply);
}
