// switch~case 문
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int rank = 0, money = 0; // 변수 선언, 초기화
	printf("등수를 입력하세요");
	scanf("%d", &rank);
	switch (rank) {
	case 1 :
		money = 1000;
		break;  // switch문을 탈출 *주의!! break문을 빼면 아래의 로직도 실행
	case 2 :
		money = 500;
		break;
	case 3 :
		money = 200;
		break;
	case 4 :
		money = 50;
		break;
	default :
		money = 10;
		break;
	}
	printf("%d등 당첨금 %d만원에 당청되셨습니다.\a\n", rank, money);


	// if,elseif로 바꾸기

	int rank1 = 0 ,money1 = 0;
	printf("등수를 입력하세요 (두번째)");
	scanf("%d", &rank1);
	if (rank1 == 1) {
		money1 = 1000;
	}else if(rank1 == 2) {
		money1 = 500;
	}else if(rank1 == 3) {
		money1 = 200;
	}else if(rank1 == 4) {
		money1 = 50;
	}else {
		money1 = 10;
	}
	printf("%d등 당첨금 %d만원에 당첨되셨습니다. \a\n", rank1, money1);

	return 0;
}