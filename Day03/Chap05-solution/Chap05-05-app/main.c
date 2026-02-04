// 구구단

#include <stdio.h>
int main() {
	int i, j;
	for (i = 2; i < 10; i++) {
		printf("%d단 시작\n",i);
		printf("--------------------------------> \n");
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %2d\t", i,j, 2 * j); // %2d하면 두자리수 > 오른쪽 정렬가능 // /t탭 기능
		}
		printf("\n");
	}


	return 0;
}