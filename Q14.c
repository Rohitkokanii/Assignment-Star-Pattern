//Q14

/*  
  * * * * * 
    * * *
 	  * 
 */

#include<stdio.h>

int main() {

    for (int i = 3; i >= 1; i--) {
        
        for (int j = 1; j <= i + 2; j++) {
            if (i == 2 && j == 1 || i == 1 && j <= 2) {
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