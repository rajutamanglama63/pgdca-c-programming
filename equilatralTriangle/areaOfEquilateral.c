#include <stdio.h>

void main () {
	float side, area;
	
	printf("\nEnter a side of triangle: ");
	scanf("%f", &side);
	
	area =  ( 1.73 * side * side) / 4 ;
	
	printf("Area of equilateral triangle is: %f \n", area);
};
