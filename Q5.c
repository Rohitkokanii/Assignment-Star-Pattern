#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {

		for (int b = 5; b >= i; b--) {
			printf(" ");
		}
		
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}