// 성적처리 프로그램
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고 제거
#include <stdio.h>	

int main(void) {
	int score[5];
	int i;
	int total = 0;
	double avg;

	printf("배열의 크기 : %zu\n", sizeof(score)/sizeof(score[0]));
	// %zu는 배열의 크기 sizeof(score)를 하면 한칸 당 4bite이기에 4(bite)*5(칸)=20이 나옴.
	// sizeof(score[0]) == sizeof(int)
	int count = sizeof(score) / sizeof(score[0]);

	// 키보드 성적 입력
	for (i = 0; i < count; i++) {
		scanf("%d", &score[i]); // 배열의 각 요소에 성적입력 

	}

	// 합산
	for (i = 0; i < count; i++) {
		total = total + score[i];
	}
	avg = total / (double)count;

	// 각 성적 출력
	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);

	}
	printf("\n");
	printf("총점은 : %d\n", total);
	printf("평균은 : %.1f\n", avg);

}