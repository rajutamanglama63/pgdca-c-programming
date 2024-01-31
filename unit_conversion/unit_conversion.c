/*
 * unit conversion
 * centimeter to meter: cm/100
 * centimeter to kilometer: cm/100000
 */
 
 
 #include <stdio.h>
 
 void main () {
 	float centimeter, meter, kilometer;
 	
 	printf("---------unit conversion-------------\n\n");
 	
 	printf("Enter a length in centimeter: ");
 	scanf("%f", &centimeter);
 	
 	meter = centimeter/100;
 	kilometer = centimeter/100000;
 	
 	printf("Converted into meter: %f \n", meter);
 	printf("Converted into kilometer: %f \n", kilometer);
 };
