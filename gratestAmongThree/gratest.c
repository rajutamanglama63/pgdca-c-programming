#include <stdio.h>

void main () {
	float num1, num2, num3;
	
	printf("Enter three different numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	if(num1 >= num2 && num1 >= num3){
		printf("%.2f is the largest number.\n", num1);
	};
	
	if(num2 >= num1 && num2 >= num3) {
		printf("%.2f is the largest number.\n", num2);
	};
	
	if(num3 >= num1 && num3 >= num2) {
		printf("%.2f is the largest number.\n", num3);
	};
};
