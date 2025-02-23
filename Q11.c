//Q11

#include<stdio.h>

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 5; j++) {
	
			if (j <= i && i<=5) {
				printf(" * ");
			}
			else if (i==6 && j<=4 || i == 7 && j <= 3 || i == 8 && j <= 2 || i == 9 && j <= 1) {
				printf(" * ");
			}

		}
		printf("\n");
	}
	return 0;
}