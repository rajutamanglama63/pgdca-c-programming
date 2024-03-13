#include <stdio.h>

void main () {
	float marks[5];
	float avg, sum = 0;
	
	printf("Enter the obtained marks:\n");
	
	for(int i = 0; i < 5; i++) {
		scanf("%f", &marks[i]);
	};
	
	for(int j = 0; j < 5; j++) {
		sum = sum + marks[j];
	};
	
	avg = sum / 5;
	
	printf("Total marks obtained is %f and average is %f\n", sum, avg);
};
