// 재귀호출 함수

#include <stdio.h>

void fruit(void);	// 함수 선언
void fruit2(int);   // 종료레벨 매개변수로 받는 재귀호출 함수 정의

int main() {
//	fruit(); // 함수 호출
	fruit2(1);
	return 0;
}

void fruit2(int count) {
	printf("apple\n");
	if (count == 3) {
		return; // 리턴을 하지만 반환값은 없음
	}
	fruit2(count + 1);
}


void fruit(void) {
	static int i=1;
	printf("banana, %d\n",i++);
	fruit(); // 자기 자신을 호출

}