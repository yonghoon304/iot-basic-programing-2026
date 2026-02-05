// 여러가지 함수 유형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void); // void -> 매개변수 없음 1.매개변수가 없는 함수
void print_char(char, int); // 2.리턴값이 없는 함수
void print_Line(void); // 3. 매개변수와 리턴값 둘 다 없는 함수

int main() {
	int result;
	
	print_Line(); // 함수 호출
	printf("학번	이름	전공	학점\n");
	print_Line(); // 함수 호출

	print_char('@', 5); // 함수 호출

	result = get_num(); // 함수 호출
	printf("result = %d\n", result);

	return 0;
}
// ------------------------------   함수 정의   ---------------------------------------

void print_Line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");

}
void print_char(char ch, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	printf("\n");
	// return이 없음
}

// 매개변수가 필요없음. 키보드로 입력을 받으니까
int get_num(void) {
	// 함수 내용작성
	int num; // 키보드에서 입력값을 저장할 변수
	int res; // scanf의 리턴값을 받는 변수

	printf("양수 입력 : ");
	res = scanf("%d", &num); // 키보드 입력으로 값을 대입

	return num;


}