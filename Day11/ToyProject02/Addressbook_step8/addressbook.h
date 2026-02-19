#ifndef _ADDRESSBOOK_H_
#define _ADDRESSBOOK_H_

#define _CRT_SECURE_NO_WARNINGS

#pragma region 전처리 영역
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma endregion

#pragma region 매크로 선언
#define MAX_CONTACTS 100	// 100명 주소록
#define INIT_CAPACITY 10	// 초기값 10 구성
#define NAME_LEN 31			// 이름 최대 길이
#define PHONE_LEN 20		
#define EMAIL_LEN 65	
#define ADDR_LEN 129
#define MEMO_LEN 129

typedef struct _contact {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char address[ADDR_LEN];
	char email[EMAIL_LEN];
	char memo[MEMO_LEN];

}Contact;// 이후 Contact 이름으로 사용
#pragma endregion

#endif

// 외부 main.c에서 호출할 함수리스트
#pragma region 함수 선언
// 함수 선언
void print_menu(void);	// 이 소스 내에서만 쓰겠다
int read_menu(void);


void add_contact(void);
void list_contacts(void);


void search_contact(void);

void update_contact(void);
void delete_contact(void);

int save_contacts(const char* filename); // 파일명이 변경되면 안됨
int load_contacts(const char* filename);



void sort_by_name(void);	// 이름순으로 정렬 qsort() 함수 사용, stdib.h에 포함


int ab_init(void);	// 주소록 초기화
void ab_free(void);	// 주소록 메모리 해제

#pragma endregion