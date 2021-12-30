#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


struct address {
	char name[30];
	char age[5];
	char phone[15];
	char btd[15];
}; // 이름, 나이, 전화번호 배열 선언

void print_menu();
void view_juso();
void add_juso();
void delete_juso();
// 각 함수

const char* fname = "c://Project//juso.txt"; // 포인터 변수 fname 상수 선언

int main()
{
	char select = 0;
	puts(" \n### 친구 주소록 ###\n"); // 친구주소록제목? 출력

	while (select != 4) {
		print_menu();
		select = getchar();
		getchar();

		switch (select)
		{
		case '1': view_juso(); // case1에 연락처함수
			break;
		case '2': add_juso(); // case2에 추가함수
			break;
		case '3': delete_juso(); // case3에 삭제함수
			break;
		case '4': return 0; // case4에 끝내기
			break;
		default: printf("\n 잘못 입력했어요. 다시 선택하세요.\n");
			// 그 외 "잘못-" 출력
		}
	}

	return 0;
}

void print_menu() { //메뉴함수
	printf("\n");
	printf("1. 연락처 출력 \n");
	printf("2. 연락처 등록 \n");
	printf("3. 연락처 삭제 \n");
	printf("4. 끝내기 \n"); // 메뉴 목록 출력
}

void view_juso() { //연락처함수
	char str[200] = ""; //문자배열선언
	FILE* rfp, * wfp; //파일 읽기, 쓰기 포인터 변수 선언
	int i; //조건문 변수 선언

	rfp = fopen(fname, "r"); // fname 주소 읽어오기

	if (rfp == NULL) { //반복문 rfp가 NULL이면
		wfp = fopen(fname, "w"); //fname에 "w" 쓰기
		fclose(wfp); //wfp 닫기
		rfp = fopen(fname, "r"); // rfp에 fname "r' 읽어오기
	}

	for (i = 1; ; i++) { //조건문, 무한루프
		fgets(str, 200, rfp); // rfp에 있는 str의 인덱스 200 배열 가져오기

		if (feof(rfp)) // 반복문, 무한루프 중 파일 끝나면 break
			break;

		printf("%2d:  %s", i, str); // 연락처 출력
	}

	if (i == 1) // 반복문, 파일에 연락처가 없으면
		puts("\n ** 연락처 파일에 전화번호가 하나도 없어요. **\n"); // 출력

	fclose(rfp); // 파일 닫아주기
}

void add_juso() { // 추가 함수
	struct address adr = { "", "", "" }; // 구조체 address 배열 선언
	char wstr[200] = ""; // wstr 문자 배열 선언
	FILE* wfp; // 파일 wfp 포인터 변수 선언

	wfp = fopen(fname, "a"); // wfp변수에 fname 열어주기 --> "a"의 의미는 all 모두: 파일 업으면 생성, 존재하면 뒤에 추가
														   //"w" 쓰기로 하면 전 파일 사라지고 덮어씌우는 것

	printf("이름을 입력 ==> ");
	gets_s(adr.name); // 구조체 adr의 name[30]배열에 맞춰서 입력
	printf("나이를 입력 ==> ");
	gets_s(adr.age); // 구조체 adr의 age[5]배열에 맞춰서 입력
	printf("전화번호를 입력 ==> ");
	gets_s(adr.phone); // 구조체 adr의 phone[15]배열에 맞춰서 입력
	printf("생일을 입력(xxxx.xx.xx) ==> ");
	gets_s(adr.btd);

	strcat(wstr, adr.name);
	strcat(wstr, "\t");
	strcat(wstr, adr.age);
	strcat(wstr, "\t");
	strcat(wstr, adr.phone);
	strcat(wstr, "\t");
	strcat(wstr, adr.btd);
	strcat(wstr, "\n");

	fputs(wstr, wfp); // wstr과 wsfp 출력

	fclose(wfp); // wfp변수의 파일 닫아주기
}


void delete_juso() { // 삭제 함수
	char read_str[50][200] = { "", };  // 문자형 read_str 2차배열 선언

	char str[200] = ""; // str 문자배열 선언
	FILE* rfp, * wfp; // 파일 rfp, wfp 포인터 변수 선언
	int del_line, i, count = 0; // 변수들 초기화

	rfp = fopen(fname, "r"); // rfp 변수에 fname 주소 읽어오기

	if (rfp == NULL) { // 반복문, rfp가 NULL이면
		puts("\n!! 연락처 파일이 없습니다. !!\n"); // 출력
		return; // 끝내기
	}

	printf("\n삭제할 행 번호는 ? "); // 출력
	scanf_s("%d", &del_line); // 삭제할 행 입력

	for (i = 0; i < 50; i++) // 조건문
	{
		strcpy(str, ""); // str 변수 복사
		fgets(str, 200, rfp); // rfp 변수가 가지고 있는 200자의 str 배열 가져오기

		if (i + 1 != del_line) // 반복문
		{
			strcpy(read_str[i], str);
			count++;
		}
		else
			printf("%d 행이 삭제되었습니다. \n", del_line); // 출력

		if (feof(rfp)) // 반복문, rfp 파일이 끝나면 break 
			break;
	}

	fclose(rfp); //rfp 파일 닫기

	wfp = fopen(fname, "w"); // wfp에 fname주소에다 쓰기

	for (i = 0; i < count; i++) // 조건문
		fputs(read_str[i], wfp);

	fclose(wfp); // wfp 파일 닫기
}