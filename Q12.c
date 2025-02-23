//Q12

#include<stdio.h>

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 && j < 5 || i == 2 && j < 4 || i == 3 && j < 3 || i == 4 && j < 2 || i==6 && j<2 || i == 7 && j < 3 || i == 8 && j < 4 || i == 9 && j < 5) {
				printf("   ");
			}
			else if (i == 1 && j == 5 || i == 2 && j > 3 || i == 3 && j >2 || i == 4 && j > 1 || i == 5 && j >=1 || i == 6 && j >= 2 || i == 7 && j >= 3 || i == 8 && j >= 4 || i == 9 && j== 5) {
				printf(" * ");
			}
		}
		printf("\n");
	}

	return 0;
}