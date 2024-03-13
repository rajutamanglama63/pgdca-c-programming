#include <stdio.h>

void main () {
	int arr[5];
	
	printf("Enter the elements in array:\n");
	
	for(int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	};
	
	for(int j = 0; j < 5; j++) {
		printf("Array element at index %d is %d\n", j, arr[j]);
	};
};
