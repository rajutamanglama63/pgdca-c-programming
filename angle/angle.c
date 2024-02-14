#include <stdio.h>

void main () {
	float firstAngle, secondAngle, thirdAngle;
	
	printf("\nEnter an firstAngle: ");
	scanf("%f", &firstAngle);

	printf("\nEnter an secondAngle: ");
	scanf("%f", &secondAngle);
	
	thirdAngle = 180 - firstAngle - secondAngle;
	
	printf("\nThe thirdAngle is: %f\n", thirdAngle);
};
