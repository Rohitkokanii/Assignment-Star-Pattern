//Q9

#include<stdio.h>

int main() {
	
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 && j <= 5) {
				printf(" * ");
			}
			else if (i == 2 && j == 1 || i == 3 && j == 1 || i == 4 && j == 1 || i == 5 && j == 1) {
				printf(" * ");
			}
			else if (i == 2 && j == 4 || i == 3 && j == 3 || i == 4 && j == 2 || i == 5 && j == 1) {
				printf(" * ");
			}
			else {
				printf("   ");
			}
		}
		printf("\n");
	}

	return 0;
}