#include <stdio.h>
int main(void) {
	int res; // 결과 변수
	short a;
	long b;

	res = sizeof(a) < sizeof(b);

	printf("%s\n", (res == 1) ? "long" : "short");

	return 0;
}