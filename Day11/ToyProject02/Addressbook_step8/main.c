// 주소록 프로그램 step8
#define _CRT_SECURE_NO_WARINGS
#include <stdlib.h>
#include <stdio.h>
#include "addressbook.h"


#pragma region 메인함수 영역
static void clear_screen(void) {
	system("cls");	// 화면 클리어
}
static void pause_enter(void) {
	puts("\n계속 하려면 Enter...");
	getchar();
}

int main(void) {
	int choice = 0;

	if (!ab_init()) {
		return 1;	// main함수의 1과 사용자 함수들의 return 1의 차이를 비교이해해야할 것. 여기 1은 실패
	}
	load_contacts("contacts.txt");	// 프로그램 실행 후 데이터 로드

	while (1) {	// 무한루프
		clear_screen();
		print_menu();// 메뉴를 출력
		// choice 값에 입력 받음
		choice = read_menu();

		switch (choice) {
		case 1:
			// printf("%s\n", "[ADD] 연락처 추가 (기능 구현요)");
			add_contact();	// 실제 연락처 추가 구현
			break;
		case 2:
			// puts("[LIST] 연락처 목록");
			list_contacts();
			break;
		case 3:
			//puts("[SEARCH] 연락처 검색");
			search_contact();
			break;
		case 4:
			//puts("[EDIT] 연락처 수정)");
			update_contact();
			break;
		case 5:
			//puts("[DELETE] 연락처 삭제");
			delete_contact();
			break;
		case 6:	// 정렬
			sort_by_name();
			break;

		case 7:
			save_contacts("contacts.txt");	// 종료직전 현재 데이터 저장
			ab_free();	// 반드시 종료전 메모리 해제
			puts("프로그램 종료");
			return 0;
			break;
		/*case 7:		// 신규 추가 저장기능
			// save_contacts("contacts.txt");
			break;
		case 8:		// 데이터 불러오기
			// load_contacts("contacts.txt");
			break;*/
		default:
			puts("메뉴는 1~7사이 입니다.");
			break;
		}
		pause_enter();
	}

	return 0;
}
#pragma endregion

