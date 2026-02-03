#include <stdio.h>
int main(void) {
	int seats = 70; // 전체 좌석 수
	int audience = 65; // 입장객 수
	float rate; // 입장률

	rate = (float)audience / seats * 100;
	printf("입장률 : %.1f%%\n", rate);

	return 0;
}