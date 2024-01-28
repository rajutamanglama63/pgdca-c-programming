#include <math.h>
#include <stdio.h>

void main () {
	double number, square_root;
	
	printf("Enter a num: ");
	scanf("%lf", &number);
	
	square_root = sqrt(number);
	
	printf("Square root of %.2lf = %.2lf \n\n", number, square_root);
};
