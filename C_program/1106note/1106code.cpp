#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main(void) {
//	int aa[10000];
//	int* p;
//
//	int i, sum = 0;
//	int cnt; // 입력할 숫자의 개수
//
//	printf("입력 개수 :");
//	scanf("%d", &cnt); // 입력할 숫자의 개수
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d번째 숫자 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//	p = aa; // p = aa + 0;
//
//	for (i = 0; i < cnt; i++) {
//		sum += *(p + i);
//		printf("입력한 숫자의 합은 : %d \n", sum);
//	}
//	return 0;
//}

//int main(void) {
//	int num1 = 3;
//	char num2 = 'A';
//
//	printf("주소 : %X, 값 : %d, 값 : %d\n", &num1, num1, *&num1);
//	printf("주소 : %X, 값 : %d, 값 : %d\n", &num2, num2, *&num2);
//
//	printf("%d %d\n", sizeof(int), sizeof(char));
//	printf("%d %d\n", sizeof(num1), sizeof(num2));
//
//	return 0;
//}

//int main(void) {
//	int* p;
//	int i, sum = 0;
//	int cnt;
//
//	printf("입력 개수를 적어주세요 : ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d번째 숫자 : ", i + 1);
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < cnt; i++) {
//		sum += *(p + i);
//		printf("입력한 숫자의 합은 : %d \n", sum);
//	}
//	free(p);
//	return 0;
//}

//int main(void) {
//	char* cp = NULL; //NULL이 있으면 상수이거나 포인터변수 초기화시킨거
//	int* ip = NULL;
//
//	printf("%x %x %x \n", &cp, cp, *&cp); //cp주소(숫자+영어), 0, 0
//	printf("%x %x %x \n", &ip, ip, *&ip); // ip주소(숫자+영어), 0, 0
//
//	printf("%d %d \n", sizeof(char*), sizeof(int*));// 4, 4
//	printf("%d %d \n", sizeof(cp), sizeof(ip));// 4, 4
//
//	return 0;
//}

//int main(void) {
//	char ch = 'A';
//	char* cp = NULL;
//
//	cp = &ch;
//
//	printf("%x %c %c \n", &ch, ch, *&ch); //ch주소(숫자+영어), A, A
//	printf("%x %x %x \n", &cp, cp, *&cp); //cp주소(숫자+영어), ch주소(숫자+영어), ch주소(숫자+영어)
//
//	printf("%c \n", ch); //A
//	printf("%c \n", *cp); //A
//
//	return 0;
//}

//int main(void) {
//	int a = 0, b = 0, c = 0;
//	int* ip = NULL;
//
//	ip = &a;
//	*ip = 10;
//	printf("%d %d %d %d \n", a, b, c, *ip);
//
//	ip = &b;
//	*ip = 20;
//	printf("%d %d %d %d \n", a, b, c, *ip);
//
//	ip = &c;
//	*ip = 30;
//	printf("%d %d %d %d \n", a, b, c, *ip);
//
//	return 0;
//}

//int main(void) {
//	int num = 10;
//	int* ip = NULL;
//
//	ip = &num;
//
//	printf("%x %x %d \n", &*&ip, *&ip, **&ip); // ip의 주소, num의 주소, num의 값
//	printf("%x %x %d \n", &ip, ip, *ip); // ip의 주소, num의 주소, num의 값
//
//	return 0;
//}

//int main(void) {
//	int num = 10;
//	int num2 = 0;
//	int* pNum = NULL;
//
//	pNum = &num;
//
//	num2 = *pNum + num;
//
//	printf("%d %d %d \n", *pNum, num, num2); // num의 값 10, 10, 20
//
//	return 0;
//}

//int main(void) {
//	printf("%x %x %x \n", main, printf, scanf);
//
//	return 0;
//}

void add(float num1, float num2);

int main(void) {
	float x = 4.1, y = 6.1;
	void (*pointer)(float, float); // 함수 포인터 선언

	printf("add함수 주소 : %x \n", add);
	printf("함수 포인터 주소는 : %x \n", &pointer);

	pointer = add;
	pointer(x, y);

	return 0;
}

void add(float num1, float num2) {
	float result;
	result = num1 + num2;
	printf("%.2f + %.2f = %.2f \n", num1, num2, result);
}