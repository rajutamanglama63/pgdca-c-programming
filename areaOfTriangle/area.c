#include <stdio.h>

void main () {
	float breadth, height, area;
	
	printf("\nEnter the breadth of a triangle: ");
	scanf("%f", &breadth);

	printf("\nEnter the height of a triangle: ");
	scanf("%f", &height);
	
	area = (breadth * height)/2;
	
	printf("\nArea of a triangle is: %f\n", area);
};
