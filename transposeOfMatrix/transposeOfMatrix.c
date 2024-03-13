#include <stdio.h>

void main () {
	int matrix[3][4];
	
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
		};
		
		printf("\n");
	};
	
	printf("\nPrinting the transpose of matrix...\n");
	for(int m = 0; m < 4; m++) {
		for(int n = 0; n < 3; n++) {
			printf("%d\t", matrix[n][m]);
		};
		
		printf("\n");
	};
};
