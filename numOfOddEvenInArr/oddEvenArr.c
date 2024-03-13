#include <stdio.h>

void main () {
	int arr[10];
	int odd = 0, even = 0;
	
	printf("Enter the number in array:\n");
	
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	};
	
	for(int j = 0; j < 10; j++) {
		if(arr[j] % 2 == 0) {
			even++;
		} else {
			odd++;
		};
	};
	
	printf("The total even number in array is %d\n", even);
	printf("The total odd number in array is %d\n", odd);
};
