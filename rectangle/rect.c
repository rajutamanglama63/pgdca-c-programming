#include <stdio.h>

void main () {
	int length, breadth;
	int parameter;
	int area;

	printf("--------calculation of rectangle----------\n");
	printf("Enter a length of rectangle: ");
	scanf("%d", &length);
	
	printf("Enter a breadth of rectangle: ");
	scanf("%d", &breadth);
	
	parameter = 2 * length + 2 * breadth;
	area = length * breadth;
	
	printf("Parameter of rectangle: '%d' \n", parameter);
	printf("Area of rectangle: '%d' \n", area);
	
	
};
