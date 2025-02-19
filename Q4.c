#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		
		for (int b = 5; b >= i; b--) {
			printf("*");
		}
		printf("\n");
	}
		//AnotherLogic

	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			if (j < i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
	}

	*/
	return 0;
}