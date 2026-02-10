// void 포인터

#include <stdio.h>

int main(void) {
	int a = 10;
	double b = 3.5;
	
	void* vp;// void 포인터
	// int* pi = vp;	// 대입연산에서는 형변환을 안써도 오류x 단, 명시적으로 형변환 필수
	int* pa;
	double* pb;

	vp = &a;
	printf("a:%d\n", *(int*)vp);	// vp를 int*로 변경 후 사용하라

	vp = &b;
	printf("b:%.1f\n", *(double*)vp);	// vp를 double*로 변경 후 사용하라, void타입은 형변환을 뺄 수 없음

	pa = &b; // double형을 int*에 할당
	printf("pa:%.1f\n", *pa);	// pa를 double*로 변경 후 사용하라


	return 0;
}