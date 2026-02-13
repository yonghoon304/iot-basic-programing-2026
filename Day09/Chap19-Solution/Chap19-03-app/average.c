// 평균 계산 소스코드

extern int count;	
extern int total;	// input.c의 total을 가져와서 공유

double average(void) {
	return total / (double)count;
}