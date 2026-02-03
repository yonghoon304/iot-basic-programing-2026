// 변수
#include <stdio.h> // 표준 입출력 헤더파일
#include <limits.h> // 타입의 최소,최대값을 담고있는 헤더파일

int main(void) {
	// 변수 상자 만들기
	int a; // 소수점이 없는 숫자 데이터
	int b, c; // 변수 여러개 선언
	float f; // 소수점이 있는 숫자 데이터 (소수점 6자리 까지)
	double d; // 더 정밀한 소수점이 있는 숫자 데이터
	char ch; // 문자 데이터

	// assinment(대입) 왼쪽의 변수에 오른쪽 값을 넣는다
	a = 10;
	b = a;
	c = a + 20;
	
	//c = 3.145;  // ctrl +/ -> 주석 처리

	f = 3.14159;
	d = 3.14159265358979099;
	ch = 'A';

	printf("변수 a의 값 %d\n", a);
	printf("변수 b의 값 %d\n", b);
	printf("변수 c의 값 %d\n", c);
	printf("변수 f의 값 %f\n", f); // 빨간색 밑줄은 무조건 오류, 녹색 밑줄은 경고 > 실행은 가능
	printf("변수 d의 값 %.10f\n", d); // .nf
	printf("변수 ch의 값 %c\n", ch);
	printf("변수 ch의 값 %d\n", ch); // 아스키 코드
	// 영문자, 특수문자(+,-,etc) 등 숫자값으로 1:1 매칭 > ASCII 코드 
	// https://ko.wikipedia.org/wiki/ASCII 아스키표 참조

	// 정수형 
	// char : 크기가 1byte -> 8bit 0000|0000 = 00~FF (0~255 까지 표현)
	// short : 2bytes 0000~FFFF
	// int(기본, 제일 중요) : 4bytes
	// long : 4bytes
	// long long : 8bytes

	printf("변수 char의 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("변수 short의 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("변수 int의 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("변수 long long의 사이즈, %zu byte,최소 %lld, 최대 %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);

	// unsigned 양수로만 표현하는 방법 최소값이 0
	printf("변수 unsigned char의 사이즈, %zu byte, 최대 %d\n", sizeof(unsigned char), UCHAR_MAX);
	printf("변수 unsigned short의 사이즈, %zu byte, 최대 %d\n", sizeof(unsigned short), USHRT_MAX);
	printf("변수 unsigned int의 사이즈, %zu byte, 최대 %u\n", sizeof(unsigned int), UINT_MAX);
	printf("변수 unsigned long long의 사이즈, %zu byte, 최대 %llu\n", sizeof(unsigned long long), ULLONG_MAX);

}