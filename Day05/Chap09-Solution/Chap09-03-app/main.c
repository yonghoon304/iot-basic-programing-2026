//

#include <stdio.h>

int main(void) {
	char ch;
	int in;
	double db;

	// 선언 및 초기화
	char* pch = &ch; 
	int* pin = &in;
	double* pdb = &db;

	// 주소크기 출력
	// 윈도우가 64비트 > 8바이트
	printf("char형 변수 주소 크기 : %zu bytes\n", sizeof(&ch));
	printf("int형 변수 주소 크기 : %zu bytes\n", sizeof(&in));
	printf("double형 변수 주소 크기 : %zu bytes\n", sizeof(&db));

	// 포인터크기
	printf("char형 포인터변수 크기 : %zu bytes\n", sizeof(&pch));
	printf("int형 포인터변수 크기 : %zu bytes\n", sizeof(&pin));
	printf("double형 포인터변수 크기 : %zu bytes\n", sizeof(&pdb));

	// 포인터가 가리키는 변수 크기
	printf("char형 * 가리키는 변수 크기 : %zu bytes\n", sizeof(*pch));
	printf("int형 * 가리키는 크기 : %zu bytes\n", sizeof(*pin));
	printf("double형 * 가리키는 크기 : %zu bytes\n", sizeof(*pdb));


	return 0;
}