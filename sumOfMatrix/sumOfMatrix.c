#include <stdio.h>

void main () {
	int matrix[3][4];
	int sum = 0;
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("Enter the number element for matrix at index [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		};
	};
	
	printf("\nPrinting the matrix...\n");
	
	for(int k = 0; k < 3; k++) {
		for(int l = 0; l < 4; l++) {
			printf("%d\t", matrix[k][l]);
			sum = sum + matrix[k][l];
		};
		printf("\n");
	};
	
	printf("\n%d\n", sum);
};
