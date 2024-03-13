#include <stdio.h>

void main () {
	int arr[3][5];
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 5; j++) {
			printf("Enter the elements for 2 dimensional arr at index [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		};
	};
	
	printf("\nPrint 2 Dimensional array: \n");
	
	for(int k = 0; k < 3; k++) {
	
		printf("\n");
		
		for(int l = 0; l < 5; l++) {
			printf("%d\t", arr[k][l]);
		};
	};
	
	printf("\n");
};
