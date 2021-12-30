#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int maxNum(int n1, int n2, int n3) {
//	if (n1 > n2)
//		return (n1 > n3) ? n1 : n3;
//	else
//		return (n2 > n3) ? n2 : n3;
//}
//
//int minNum(int n1, int n2, int n3) {
//	if (n1 < n2)
//		return (n1 < n3) ? n1 : n3;
//	else
//		return (n2 < n3) ? n2 : n3;
//}
//
//int main(void) {
//	int num1, num2, num3;
//
//	printf("정수 세 개를 입력하세요 :");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("가장 큰 수는 : %d \n", maxNum(num1, num2, num3));
//	printf("가장 작은 수는 : %d \n", minNum(num1, num2, num3));
//
//	return 0;
//}

//int main(void) {
//	/*int s[5] = { 90, 60, 30 };*/
//
//	int s[] = { 90, 60, 30 };
//
//	/*s[0] = 90;
//	s[1] = 40;
//	s[2] = 70;
//	s[3] = 0;
//	s[4] = 0;*/
//
//	printf("첫 번째 s[0]의 값은 : %d \n", s[0]);
//	printf("두 번째 s[1]의 값은 : %d \n", s[1]);
//	printf("세 번째 s[2]의 값은 : %d \n", s[2]);
//	printf("네 번째 s[3]의 값은 : %d \n", s[3]);
//	printf("다섯 번째 s[4]의 값은 : %d \n", s[4]);
//
//	return 0;
//}

//int main(void) {
//	int a[] = { 1, 2, 3 };
//	int sum = 0;
//
//	sum = a[0] + a[1] + a[2];
//
//	printf("배열의 총 합은 : %d\n", sum);
//	printf("배열의 평균은 : %.2f\n", (float)sum / 3); // 선언한 데이터형과 다르게 여기에서만 형 변환을 주겠다.
//
//	return 0;
//}

//int main(void) {
//	int a = 100;
//	int b = 200;
//
//	printf("변수 a의 주소는 : %d \n", &a);
//	printf("변수 b의 주소는 : %d \n", &b);
//
//	return 0;
//}

//int main(void) {
//	int a[3] = { 10, 20, 30 };
//
//	printf("배열 a의 메모리 주소는 %d \n", a);
//	printf("배열 a[0]의 메모리 주소는 %d \n", &a[0]);
//	printf("배열 a[1]의 메모리 주소는 %d \n", &a[1]);
//	printf("배열 a[2]의 메모리 주소는 %d \n", &a[2]);
//
//	return 0;
//}

//int main(void) {
//	int a[3] = { 10, 20, 30 };
//
//	printf("a[0]은 %d, a + 0은 %d \n", &a[0], a + 0);
//	printf("a[1]은 %d, a + 1은 %d \n", &a[1], a + 1);
//	printf("a[2]은 %d, a + 2은 %d \n", &a[2], a + 2);
//
//	return 0;
//}

//int main(void) {
//	int data;
//	float f_data;
//
//	scanf_s("%d", &data); // data 메모리 주소에 입력한 값을 저장해라
//	scanf_s("%f", &f_data);
//
//	printf("입력된 값은 : %d %f \n", data, f_data);
//
//	return 0;
//}

//int main(void) {
//	char s[10] = "a-Program";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] : %d \n", &s[3]); // 서식지정자를 d로 하면 메모리주소가, s로 하면 문자열(데이터)가 알아서 나옴
//	printf("p + 3 : %s \n", p + 3); // 포인트 변수 p가 배열 s의 주소를 가졌기 때문에 s + 3과 같음
//
//	printf("s[0] : %d \n", s[0]); // %s면 문자가 출력되지만, %d로 하면 컴퓨터가 인식하는 문자의 값을 보여줌
//	printf("*(p + 0) : %d \n", *(p + 0)); // 소문자 a는 97부터 시작, z가 끝나면 대문자 A가 시작
//
//	return 0;
//}

//int main(void) {
//	struct address {
//		int a;
//		float b;
//		char c;
//		char ch[5];
//	}add;
//
//	//struct address add;
//
//	add.a = 10;
//	add.b = 1.5;
//	add.c = 'B';
//	strcpy(add.ch, "abcd");
//
//	printf("add.a : %d \n", add.a);
//	printf("add.b : %f \n", add.b);
//	printf("add.c : %d \n", add.c);
//	printf("add.ch : %s \n", add.ch);
//
//	return 0;
//}

int main(void) {
	/*char name[10];
	int kor;
	int eng;
	float avg;*/     //밑에다 구조체로 다시 구현

	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student stu;

	printf("이름을 입력 : ");
	scanf_s("%s", stu.name, 9); // null값을 쓰면 문자열이 끝난다고 인식, 자릿수 적어줘야함

	printf("국어 점수 : ");
	scanf_s("%d", &stu.kor);

	printf("영어 점수 : ");
	scanf_s("%d", &stu.eng);

	stu.avg = (stu.kor + stu.eng) / 2.0f;  // 실수로 선언했기 때문에 나누는 것도 실수로 형변형 해줘야 함

	printf("----------------------------------------------------\n");
	printf("이름 : %s \n", stu.name);
	printf("국어 점수 : %d \n", stu.kor);
	printf("영어 점수 : %d \n", stu.eng);
	printf("평균 : %8.2f \n", stu.avg);

	return 0;
}