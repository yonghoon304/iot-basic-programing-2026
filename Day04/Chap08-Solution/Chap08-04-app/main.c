// 문자열 입력
// 공백허용하는 문자열
// 문자열 전용 입출력 함수 : gets,puts
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80];
	char str2[5];

	str2[0] = 'p';
	str2[1] = 'k';
	str2[2] = '\0'; // 배열 요소로 문자열을 넣을 때는 마지막 요소에 반드시 \0를 입력

	printf("%s\n", str2);

	printf("문자열 입력 : ");
	//scanf("%s", str);
	gets(str);

	printf("입력한 문자열 :");
	puts(str);



	return 0;
}