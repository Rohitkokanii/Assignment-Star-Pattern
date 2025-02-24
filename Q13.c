//Q13
/*
		  *
		* * *
	  * * * * *
*/

#include<stdio.h>

int main() {

	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= i + 2; j++) {
			if (i == 1 && j <= 2 || i == 2 && j == 1)
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

	return 0;
}