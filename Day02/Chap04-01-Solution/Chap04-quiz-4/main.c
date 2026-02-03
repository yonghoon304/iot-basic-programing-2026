#include<stdio.h>
int main(void) {
	float weight;
	float height;
	float BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf(" %f%f", &weight, &height);
	BMI = weight / ((height / 100) * (height / 100));
	printf((BMI >= 20) && (BMI < 25) ? "표준입니다." : "체중관리가 필요합니다.\n");
	printf("%f", BMI);

	return 0;
}