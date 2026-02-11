// 구조체 내 구조체 사용
#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>
#include <stdlib.h>
#include < string.h>

struct profile {	// 구조체 정의
	int age;		// 나이
	double height;	// 키
};

struct student {
	int id;				// 학번
	double grade;		// 학점
	struct profile pf;	// 프로필 구조체 선언 
};

int main(void) {
	// C99 표준 이상 사용하는 구조체 선언과 동시 초기화 방법
	struct student st1 = {
		.id = 20191520,
		.grade = 4.1,
		.pf = {
			.age = 25,
			.height = 176.0
		}

	};

	st1.id = 20191520;
	st1.grade = 4.1;
	// 구조체 내 profile 구조체 사용
	st1.pf.age = 25;
	st1.pf.height = 176.0;

	printf("id : %d\n", st1.id);
	printf("grade : %.1f\n", st1.grade);
	printf("age : %d\n", st1.pf.age);
	printf("height : %.1f\n", st1.pf.height);


	return 0;
}
