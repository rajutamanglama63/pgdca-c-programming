#include <stdio.h>

void main () {
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= i; j++) {
			if(j == 1 || i == j || i == 5) {
				printf("*");
			} else {
				printf(" ");
			};
		};
		
		printf("\n");
	};
};
