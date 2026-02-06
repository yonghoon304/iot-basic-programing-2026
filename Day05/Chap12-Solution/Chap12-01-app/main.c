// 문자열과 포인터

#include <stdio.h>	

int main(void) {
	// 문자열 출력
	printf("%s\n", "apple");

	// 문자열 주소확인
	printf("%u\n", "apple");
	printf("%u\n", "apple");
	printf("두 번째 문자 주소 %u\n", "apple" + 1);
	printf("두 번째 문자  %c\n", *("apple"+1));
	printf("두 번째 문자  %c\n", *("apple"));

	char fruit[6] = "apple";

	printf("%u\n", fruit);
	printf("두 번째 문자 주소 %u\n", fruit + 1);
	printf("두 번째 문자  %c\n", *(fruit + 1));
	printf("두 번째 문자  %c\n", *(fruit));



	return 0;
}