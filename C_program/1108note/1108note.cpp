#include<stdio.h>
//#include"myHeader.h"

#define PI 3.141592
#define STR "원의 면적을 계산하였습니다."

int main(void) {
	printf("반지름이 20인 원의 면적은 : %f \n", 20 * 20 * PI);
	printf(STR);

	return 0;
}

//typedef : 치환하는 것
//
//- 헤더 파일(.h) 만들기(예외처리구문은 C++에서)
//
//C제공 헤더파일
//#include<stdio.h>
//
//사용자정의 헤더파일
//#include"geaderfile_name.h"
//
//
//- 전처리지시자 헤더파일 종류
//
//* stdio.h : 표준 입출력
//string.h : 문자열 = > 3개는 많이 씀
//malloc.h : 메모리 관련 *
//stdlib.h : 표준 라이브러리
//math.h : 수학관련(코싸인, 탄젠트 등)
//
//- 전처리지시자
//	: #include, #define, #ifdef, #undef
//
//#define : 복잡한 숫자 혹은 문자, 함수 등을 기호로 나타낼 때 사용
//
//
//	- 2차원 배열
//	: 행과 열을 나타내는 것(행 먼저 표기)
//	ㄴ > 행은 한 그룹, 열은 그룹 안을 조각냄
//	ex)	int arr[4][5] // arr은 그룹 중 4행의 5열에 위치
//
//	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} }
//	= > 3 그룹에 4개씩 들어감
//	int arr[2][3] = 11;
//
//
//-------------------------------------------------------------------- -
//
//-struct(구조체)
//
//열거형 eum : 숫자 대신 특정한 기호를 사용하여 나타낸다.
//열거형을 이용하거나 혹은 변수를 사용하여 작업하는 개념은 같다.
//
//enum 열거형_이름 {
//	기호_1;
//기호_2;
//.....
//};
//enum 열거형_이름 열거형_변수; // 열거형 변수 선언
//
//
//enum week {
//	sun;
//mon;
//tue;
//wed;
//thu;
//fri;
//sat;
//};
//enum week wk;   // 배열과 비슷
//
//enum week { sun, mon, tue, wed, the, fri, sat };
//enum week wk;   // 이렇게 써도 무방
//
//wk = sat;
//// wk라는 변수는 week의 열거 중 가져와서 쓸 수 있음
//
//
//-------------------------------------------------------------------- -
//
//int main(int arg[], char ch) {
//	// 실행할 때 사용자가 직접 값을 입력
//	주로 명령 프롬프트에서 활용
//		실행할 때 입력 : a.exe 12, a
//		==> a의 파일을 실행할 때 변수에 12와 a를 넣고 main 함수를 돌려라
//
//
//		프로그래밍 - 디버깅 모드(개발자가 테스트 할 때 사용함)
//		- 배포 모드
//
//		-------------------------------------------------------------------- -
//
//		C / C++ / Java / android / DB(oracle, splite, OZ) 는 질문 가능
