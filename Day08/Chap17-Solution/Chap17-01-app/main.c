// 구조체
#include <stdio.h>
#pragma pack(1)	// 패딩바이트를 사용안함. >> 17byte, 속도가 느려짐

struct student {
	char ch1;	//1
	short num;	// 2
	char ch2;	// 1
	int score;	// 4byte
	double grade;	// 8byte
	char ch3;	// 1 
};

int main(void) {
	struct student st1;
	// 실제 사용되는 바이트는 17byte지만 패딩바이트가 포함되어 32byte
	printf("구조체 사이즈 : %zu\n", sizeof(st1));	
	// 구조체에 선언하는 멤버변수의 위치만 조정해도 패딩바이트가 사라짐 -> 24byte


	return 0;
}