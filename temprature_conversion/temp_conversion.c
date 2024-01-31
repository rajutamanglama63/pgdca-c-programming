/*
 * formula to convert celsius to fahrenhiet
 * ((celsius * 9) / 5) + 32
 */
 
 
 #include <stdio.h>
 
 void main () {
 	float fahrenhiet, celsius;
 	
 	printf("---------temprature conversion-------------\n\n");
 	
 	printf("Enter a temprature in degree celsius: ");
 	scanf("%f", &celsius);
 	
 	fahrenhiet = ((celsius * 9) / 5) + 32;
 	
 	printf("Converted temprature: %f \n", fahrenhiet);
 };
