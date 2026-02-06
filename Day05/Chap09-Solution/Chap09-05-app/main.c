// 포인터 사용이유

#include <stdio.h>

void swap(int *pa, int *pb);


int main(void) {
	int a = 10, b = 20;

	printf("원본 a,b =%d,%d\n", a, b);
	swap(&a, &b);

	printf("변경 후 a,b = %d,%d", a, b);

	return 0;
}

void swap(int *pa, int *pb) {
	int temp; // 교환을 위한 임시 변수

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}