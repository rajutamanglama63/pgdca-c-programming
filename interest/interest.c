#include <stdio.h>
#include<math.h>

void main () {
	float principal, rate, time, simpleInterest, compoundInterest;
	
	printf("Enter principal: ");
	scanf("%f", &principal);
	
	printf("Enter rate: ");
	scanf("%f", &rate);
	
	
	printf("Enter time: ");
	scanf("%f", &time);
	
	simpleInterest = (principal * time * rate) / 100;
	compoundInterest = principal * (pow(1+rate/100, time) - 1);
	
	printf("\nSimple interest: %0.3f\n", simpleInterest);
	printf("Compound interest: %0.3f\n", compoundInterest);
	
};
