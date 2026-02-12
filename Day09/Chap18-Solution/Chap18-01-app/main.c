// 파일 입출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <direct.h>

int main(void) {
	char cwd[256];	// 경로 입력 변수, 윈도우 경로 문자열 최대길이.
	char str[80];
	char* res;

	_getcwd(cwd, sizeof(cwd));

	printf("현재 작업 폴더 : %s\n", cwd);
	



	// 여기서 부터 텍스트 파일 복사
	FILE* fp,*ofp; // fp- 파일 입력용 파일 포인터, ofp- 출력용 파일포인터 

	// 디렉토리,폴더 구분자로 /를 사용해도 무방
	fp = fopen("./data/Sample.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	else {
		printf("파일 오픈 성공\n");
	}

	// 파일 복사용 오픈
	ofp = fopen("./data/copy.txt", "w");
	if (ofp == NULL) {	// 실패 방지
		printf("출력파일 열기 실패\n");
		return 1;
	}

	while (1) {
		res = fgets(str, sizeof(str), fp);	// Sample.txt 읽은 파일포인터에서 한줄을 read
		if (res == NULL) {
			break;
		}
		printf("한줄 쓰기 - > %s\n",str);
		str[strlen(str) - 1] = '\0';	// \n을 ->\0 바꿔줘서 
		fputs(str, ofp);
		fputs(" ", ofp);	// 한줄 끝난뒤 스페이스 추가
	}
	printf("텍스트 파일 복사 성공!");
	fclose(fp);
	fclose(ofp);

	return 0;
}