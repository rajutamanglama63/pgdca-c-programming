#include <stdio.h>

void main () {
	float math, digitalLogic, dataComm, oop, webTech, average, percentage, total;
	int fullMarks = 500;
	int numOfSubjects = 5;
	
	printf("Enter the marks of math: ");
	scanf("%f", &math);

	printf("Enter the marks of digitalLogic: ");
	scanf("%f", &digitalLogic);

	printf("Enter the marks of dataComm: ");
	scanf("%f", &dataComm);
	
	printf("Enter the marks of oop: ");
	scanf("%f", &oop);
	
	printf("Enter the marks of webTech: ");
	scanf("%f", &webTech);
	
	total = math + digitalLogic + dataComm + oop + webTech;
	percentage = (total/fullMarks) * 100;
	average = total/numOfSubjects;

	printf("Total marks obtained: %f\n", total);
	printf("Percentage: %f\n", percentage);
	printf("Average: %f\n", average);
};
