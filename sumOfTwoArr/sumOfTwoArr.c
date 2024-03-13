#include <stdio.h>

void main () {
	int arr1[5], arr2[5], sumArr[5];
	
	for(int i = 0; i < 5; i++) {
		printf("Enter the element at index %d for arr1: ", i);
		scanf("%d", &arr1[i]);
	};
	
	for(int j = 0; j < 5; j++) {
		printf("Enter the element at index %d for arr2: ", j);
		scanf("%d", &arr2[j]);
	};
	
	for(int k = 0; k < 5; k++) {
		sumArr[k] = arr1[k] + arr2[k];
		
		printf("The element of sumArr at index %d is %d\n", k, sumArr[k]);
	};
};
