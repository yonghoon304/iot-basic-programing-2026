// 문자열 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 복사 함수를 사용하기 위한 추가 라이브러리

int main(void) {
	char str[80] = "applejam"; // str[8]부터는 \0이 초기화 됨
	char str2[80];

	printf("최초 문자열 : %s\n", str);
	//printf("문자열 입력 : ");
	//scanf("%s", str);  // 중요!! 
	// 첨자[i]를 사용하지 않으면 배열의 이름은 주소를 나타냄. > &안씀
	//printf("입력 후 문자열 : %s\n", str);
	// grape 입력시 g	r	a	p	e	\0	a	m	\0	\0	\0  am은 메모리에서 안 지워지고 출력시에는 처음 \0앞까지 나온다.	

	strcpy(str, "grape");
	printf("입력 후 문자열 : %s\n", str);

	strcpy(str2, str);
	printf("입력 후 문자열 : %s\n", str2);  

	return 0;
}