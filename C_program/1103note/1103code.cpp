#include<stdio.h>

//int max(int x, int y) { // 두 정수 비교 함수(사용자 정의 함수)
//	if (x > y) // x = 10, y = 6
//		return x;
//	else
//		return y;
//	}
//
//int main(void) {
//	int i, j; // i,j 입력값
//	int result; // 비교한 결과값
//
//	printf("두 정수를 입력하세요: ");
//	scanf_s("%d %d", &i, &j);
//
//	result = max(i, j);// 비교함수(max함수) 호출
//	printf("%d와 %d 중 큰 수는 %d 입니다.\n", i, j, result);
//
//	return 0;
//}

//void func_A(void);
//
//int main(void) {
//	int a = 10;
//	printf("main()의 a의 값은 : %d \n", a);
//
//	func_A();
//
//	return 0;
//}
//
//void func_A(void) {
//	int a = 20;
//	int b = 30;
//
//	printf("func_A()의 a값은 :%d \n", a);
//	printf("func_A()의 b값은 :%d \n", b);
//}

//int main(void) {
//	int i = 0;
//	int total = 0;
//
//	for (i = 1; i < 3; i++) {
//		int total = 0;
//		total = total + i; // 중괄호{}에 있는 지역변수는 밖(main의 total)에 거와 동일하지 않음
//	}
//
//	if (total < 10) { // 괄호()에 있는 지역변수는 밖(main의 total)에 거와 동일
//		printf("total의 값은 %d입니다. \n", total);
//	}
//	return 0;
//}

//int add(int x, int y) {
//	return x + y;
//}
//
//int main(void) {
//	int a = 5, b = 4;
//	int result = 0;
//
//	result = add(a, b);
//	printf("결과는 : %d \n", result);
//	return 0;
//}

//int num; // 전역변수
//
//void a(void) {
//	num = 50;
//}
//
//int main(void) {
//	printf("num의 값은 : %d \n", num);
//
//	a();
//	printf("num의 값은 : %d \n", num);
//	return 0;
//
//}

//int main(void) {
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값은 : %c \n", ch); // ch 데이터를 가져오고자 함
//	printf("ch의 메모리 주소 값은 : %d \n", &ch); // 메모리 주소는 정수니까 %d 로 해줘야함
//	printf("p가 가지고 있는 값은 : %d \n", p); // 메모리 주소를 가져오고자 함 
//	printf("p가 가리키는 곳의 실제 값은 : %c \n", *p); // 포인터 p가 가리키는 주소의 데어터 값(ch의 데이터)을 가져오고자 함
//
//	return 0;
//}

//int main(void) {
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch; //p는 ch의 주소를 가짐
//
//	q = p; //q는 p가 가진 ch의 주소를 가짐
//
//	*q = 'Z'; //*q는 p를 통해서 ch의 위치에 가서 A라는 데이터를 Z로 바꿈
//
//	printf("ch에 저장되어 있는 값은 : %c \n", ch);
//
//	return 0;
//}

//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(void) {
//	int first = 20, second = 30;
//	printf("before : frist = %d, second = %d \n", first, second);
//
//	swap(first, second);
//	printf("after : frist = %d, second = %d \n", first, second);
//}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int first = 20, second = 30;
	printf("before : frist = %d, second = %d \n", first, second);

	swap(&first, &second);
	printf("after : frist = %d, second = %d \n", first, second);
}