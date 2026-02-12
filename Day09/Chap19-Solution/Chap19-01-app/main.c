// 헤더파일 사용

#include <stdio.h>		// 빌트인 라이브러리(헤더파일)
// 하위 폴더에 있는 파일을 추가할 때는 printf()와 다르게 \\ 사용하지 않음
#include "student.h"	// 사용자 헤더파일은 ""로 추가

// 매크로 정의
#define PI 3.14159265359
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용범위 초과!!");

// 조건부 컴파일 지시자
#define VER7
#define BIT16
void func(void);

int main(void) {
	student st1 = { 315,"홍길동" };
	double radius, area;	

	int max;


#if VER 6
	printf("버전 %d입니다\n", VER);
#else
//#error 컴파일러 버전은 6.0 이상이어야 합니다.
	printf("버전확인하세요\n");

#endif

#ifdef BIT16
	max = 32761;
#else
	max = 2147483647;
#endif

	printf("학번 : %d,이름 : %s\n", st1.num, st1.name);

	radius = 5;
	area = radius * radius * PI;

	if (area > LIMIT) {
		ERR_PRN;
	}
	else {
		printf("원 면접 : %.2f (%s)\n", area,MSG);
	}

	// 파이썬에서도 확인 가능
	printf("컴파일(빌드) 날짜와 시간 : %s,%s\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"	// 행번호를 100으로 변경,파일명도 macro.c로 표시
	func();


	return 0;
}

void func(void) {
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}