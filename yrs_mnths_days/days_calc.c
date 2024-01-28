#include <stdio.h>

void main () {
	int num_of_days, years, months, days;
	int total_num_days_in_yr = 365;
	int avg_days_in_months = 30;
	
	printf("Enter the number of days: ");
	scanf("%d", &num_of_days);
	
	years = num_of_days / total_num_days_in_yr;
	
	months = (num_of_days - years * total_num_days_in_yr) / avg_days_in_months;
	
	days = (num_of_days - years * total_num_days_in_yr - months * avg_days_in_months)
	
	
	printf("Years: %d \n", years);
	printf("Months: %d \n", months);
	printf("Days: %d \n", days);
};
