#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			if (j == 1 && i == 1) {
				printf(" * ");
			}
			else if (j == 1 && i == 2) {
				printf(" * ");
			}
		}
	}

	return 0;
}