//  동적할당 문자열 처리 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char**);

void print_str2(char**, int);

int main(void) {
	char temp[81];	// 최대 80자 입력 임시문자열
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20) {
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) {
			break;	// 문자열 end입력하면 중간에 입력 종료
		}
		str[i] = (char*)malloc(strlen(temp) + 1);	// \0까지 동적 메모리 할당
		strcpy(str[i], temp);
		i++;
	}
	// 입력 문자열 출력 함수
	print_str(str);	// str 전체를 매개변수로 전달. 배열의 주소

	print_str2(str, i);
	for (i = 0; i < str[i] != NULL; i++) {
		free(str[i]);	// 메모리 해제
	}



	return 0;
}

void print_str(char** ps) {
	// Day06 이중 포인터에서 print_str(char**, int)와 비교!!
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;
	}
}

void print_str2(char** ps, int count) {
	int i;

	for (i = 0; i < count; i++) {
		printf("# %s\n", *(ps + i));
	}
}