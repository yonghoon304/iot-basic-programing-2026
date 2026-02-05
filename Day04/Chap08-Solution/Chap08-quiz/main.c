// 대소문자 변환 프로그램
// 문자열 입력 DON'T Worry, Be Happy > 다 소문자로
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>

int main(void) {
	char str[80];
	int i;
	int count = sizeof(str) / sizeof(str[0]);
	int pos; // 문자열에서 \0값이 처음 나오는 위치 인덱스
	int sum = 0;
	printf("문자열 입력 : ");
	gets(str); 
	
	for (i = 0; i < count; i++) {
		if (str[i] == '\0') {
			pos = i;
			break;
		}printf("\n");
	}
	for (i = 0; i < pos; i++) {
		if ((str[i] < 91)&&(str[i]>64) ){
			str[i] += 32;
			sum++;
		}
	}puts(str);
	printf("바뀐 문자 수 : %d", sum);

	
	
	return 0;
}
