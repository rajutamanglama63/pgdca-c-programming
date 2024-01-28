#include <stdio.h>
#include <math.h>

void main () {
    double power, base, exponent;
    
    printf("-----------power detection-------------\n");
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    /* Calculates base^exponent */
    power = pow(base, exponent);
    
    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, power);
};
