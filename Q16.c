//Q16

#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		if (i == 2 || i == 4) {
			printf("   ");
		}
		else if (i == 3) {
			printf("      ");
		}
		
		for (int j = 1; j <= 3; j++) {	
				printf(" * ");
		}
		printf("\n");
	}

	return 0;
}