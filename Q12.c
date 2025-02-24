//Q12

#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int b = 5; b >= i; b--) {
			printf("   ");
		}

		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}
		printf("\n");
	}

	for (int i = 1; i <=4; i++) {
		if (i <= 4) {
			printf("   ");
		}
		for (int j = 1; j <= i; j++) {
			
				printf("   ");
		}
		for (int b = 4; b >= i; b--) {
			printf(" * ");
		}
		printf("\n");
	}

	return 0;
}

/*
if (i == 1 && j < 5 || i == 2 && j < 4 || i == 3 && j < 3 || i == 4 && j < 2 || i==6 && j<2 || i == 7 && j < 3 || i == 8 && j < 4 || i == 9 && j < 5) {
				printf("   ");
			}
			else if (i == 1 && j == 5 || i == 2 && j > 3 || i == 3 && j >2 || i == 4 && j > 1 || i == 5 && j >=1 || i == 6 && j >= 2 || i == 7 && j >= 3 || i == 8 && j >= 4 || i == 9 && j== 5) {
				printf(" * ");
			}
*/