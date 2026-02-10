// 함수 포인터
// 함수도 변수처럼 주소를 가짐 > 포인터로 활용가능
// 콜백,대리자(이벤트) 함수 처리할 때 필요한 기능

#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void) {
	int (*pf)(int, int);	// 함수 포인터 선언! 매개변수의 타입과 갯수가 일치
	int res;

	pf = sum;	// 함수의 이름만 적으면 주소를 뜻함
	// res = sum(10,20) 일반 함수 호출
	res = pf(10, 20);	// 함수 포인터로 함수 호출
	printf("덧셈 = %d\n", res);

	pf = sub;
	res = pf(20, 10);
	printf("뺄셈 = %d\n", res);

	pf = mul;
	res = pf(20, 10);
	printf("곱셈 = %d\n", res);

	pf = div;
	res = pf(20, 10);
	printf("나눗셈 = %d\n", res);

	return 0;
}

int sum(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}