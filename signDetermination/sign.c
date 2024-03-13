#include <stdio.h>

void main () {
	float number;
	
	printf("Enter any number: ");
	scanf("%f", &number);
	
	if(number >= 0.0) {
		if(number == 0.0) {
			printf("You entered 0.\n");
		} else {
			printf("You entered positive number %.2f\n", number);
		};
	} else {
		printf("You entered negetive number %.2f\n", number);
	};
};
