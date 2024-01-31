#include <stdio.h>

void main () {
	float radious, diameter, circumference, area;
	
	printf("----------circle programme-----------\n");
	
	printf("Enter radious of a circle: ");
	scanf("%f", &radious);
	
	diameter = 2 * radious;
	circumference = 2 * 3.14 * radious;
	area = 3.14 * radious * radious;
	
	printf("Diameter of circle: %f \n\n", diameter);
	printf("circumference of circle: %f \n\n", circumference);
	printf("area of circle: %f \n\n", area);
};
