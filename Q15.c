//Q15

/* 


*/
#include<stdio.h>

int main() {

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i + 3; j++) {
			if (i == 1 && j <= 3 || i == 2 && j <= 2 || i == 3 && j == 1)
			{
				printf("   ");
			}
			else
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	for (int i = 3; i >= 1; i--) {

		for (int j = 1; j <= i + 3; j++) {
			if (i == 2 && j <= 2 || i == 1 && j <= 3 || i == 3 && j == 1 ) {
				printf("   ");
			}
			else {
				printf(" * ");
			}

		}
		printf("\n");
	}
	return 0;
}