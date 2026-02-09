// 다차원 배열
#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[3][4]; // 4byte * 3 * = 48bytes
	/*int score[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};*/
	//int score[3][4] = { 0 }; // 모두 0으로 초기화
	int total;
	double avg;

	char animal[5][20]; // 동물 5마리,이름길이 20
	int count;

	int i, j;

	// 2차원 배열로 동물 이름 관리
	// 총 크기 100, animal[0]은 20
	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++) {
		scanf("%s", animal[i]);	// 만약 animal[i][j]이면 &로 쓸수 있음
	}
	for (i = 0; i < count; i++) {
		printf("%d번 동물 %s\n",i, animal[i]);
	}


	// 2차원 배열로 성적 처리
	for (i = 0; i < 3; i++) {
		printf("%d번 학생 4과목 점수 입력 : ", i);
			
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]); // 점수 입력 (앞쪽 []는 행 바깥쪽 for문 변수 , 뒤쪽[]열 안쪽 for문 변수)
		}
	}

	// 점수 채점
	for (i = 0; i < 3; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			total += score[i][j];
		}avg = total / 4.0;
		printf("%d번 학생,총점 : %d, 평균 : %.1f\n", i, total, avg);
	}

	return 0;
}