#include <stdio.h>

void main () {
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("Even number\n");
	} else {
		printf("Odd number\n");
	};
};
