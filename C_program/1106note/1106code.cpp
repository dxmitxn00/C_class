#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main(void) {
//	int aa[10000];
//	int* p;
//
//	int i, sum = 0;
//	int cnt; // �Է��� ������ ����
//
//	printf("�Է� ���� :");
//	scanf("%d", &cnt); // �Է��� ������ ����
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d��° ���� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//	p = aa; // p = aa + 0;
//
//	for (i = 0; i < cnt; i++) {
//		sum += *(p + i);
//		printf("�Է��� ������ ���� : %d \n", sum);
//	}
//	return 0;
//}

//int main(void) {
//	int num1 = 3;
//	char num2 = 'A';
//
//	printf("�ּ� : %X, �� : %d, �� : %d\n", &num1, num1, *&num1);
//	printf("�ּ� : %X, �� : %d, �� : %d\n", &num2, num2, *&num2);
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
//	printf("�Է� ������ �����ּ��� : ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d��° ���� : ", i + 1);
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < cnt; i++) {
//		sum += *(p + i);
//		printf("�Է��� ������ ���� : %d \n", sum);
//	}
//	free(p);
//	return 0;
//}

//int main(void) {
//	char* cp = NULL; //NULL�� ������ ����̰ų� �����ͺ��� �ʱ�ȭ��Ų��
//	int* ip = NULL;
//
//	printf("%x %x %x \n", &cp, cp, *&cp); //cp�ּ�(����+����), 0, 0
//	printf("%x %x %x \n", &ip, ip, *&ip); // ip�ּ�(����+����), 0, 0
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
//	printf("%x %c %c \n", &ch, ch, *&ch); //ch�ּ�(����+����), A, A
//	printf("%x %x %x \n", &cp, cp, *&cp); //cp�ּ�(����+����), ch�ּ�(����+����), ch�ּ�(����+����)
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
//	printf("%x %x %d \n", &*&ip, *&ip, **&ip); // ip�� �ּ�, num�� �ּ�, num�� ��
//	printf("%x %x %d \n", &ip, ip, *ip); // ip�� �ּ�, num�� �ּ�, num�� ��
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
//	printf("%d %d %d \n", *pNum, num, num2); // num�� �� 10, 10, 20
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
	void (*pointer)(float, float); // �Լ� ������ ����

	printf("add�Լ� �ּ� : %x \n", add);
	printf("�Լ� ������ �ּҴ� : %x \n", &pointer);

	pointer = add;
	pointer(x, y);

	return 0;
}

void add(float num1, float num2) {
	float result;
	result = num1 + num2;
	printf("%.2f + %.2f = %.2f \n", num1, num2, result);
}