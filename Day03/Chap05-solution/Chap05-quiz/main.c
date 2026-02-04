// 별 찍기

#include <stdio.h>

int main() {
/*
  *****
  *****
  *****
  *****
  *****
*/
	int i, j,k;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

/*
*
**
***
****
*****
*/
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
/*
     *
	**
   ***
  ****
 *****
*/
	for (i = 1; i <= 5; i++) {
		for (k = 1; k <= 5 - i; k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

/*
   *
  ***
 *****
*******
*/

	for (i = 1; i <= 4; i++) {
		for (k = 1; k <= (7 - (2 * i - 1))/ 2; k++) {
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j ++) {
			printf("*");
		}for (k = 1; k <= (7 - i) / 2; k++) {
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}