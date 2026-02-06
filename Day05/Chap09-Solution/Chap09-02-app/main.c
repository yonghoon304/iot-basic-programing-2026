// 포인터 계속

#include <stdio.h>

// &(ampersand 엠퍼샌드,엔드)은 주소를, *(asterik 아스티릭,스타)는 그 값을. 
// &a면 a의 메모리주소값을, *a면 값을.
// 만약 a안에 주소가 들어있고 a를 출력하면 주소값이 출력.



// &, * 
int main(void) {
	int a = 10, b = 15, total; // 변수 선언 및 초기화 a,b만
	double avg; // 평균

	// 포인터변수
	int* pa, * pb;
	int* pt = &total; // total의 주소를 pt에 저장
	double* pg = &avg; 

	pa = &a; 
	pb = &b;

	// 원래는 total = a+b; avg = total / 2.0;
	// 대신 포인터변수로 위의 작업을 대체
	// *pa -> a변수의 주소가 가지고 있는 값
	// pa -> a변수의 주소
	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	// 결과 출력
	printf("a=%d,b=%d,total=%d,avg=%.2f\n", a, b, total, avg);

	printf("*pa = %d,*pb = %d,*pt=%d,*pg=%.2f\n", *pa, *pb, *pt, *pg);





	return 0;
}