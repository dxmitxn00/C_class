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
//	printf("���� �� ���� �Է��ϼ��� :");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	printf("���� ū ���� : %d \n", maxNum(num1, num2, num3));
//	printf("���� ���� ���� : %d \n", minNum(num1, num2, num3));
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
//	printf("ù ��° s[0]�� ���� : %d \n", s[0]);
//	printf("�� ��° s[1]�� ���� : %d \n", s[1]);
//	printf("�� ��° s[2]�� ���� : %d \n", s[2]);
//	printf("�� ��° s[3]�� ���� : %d \n", s[3]);
//	printf("�ټ� ��° s[4]�� ���� : %d \n", s[4]);
//
//	return 0;
//}

//int main(void) {
//	int a[] = { 1, 2, 3 };
//	int sum = 0;
//
//	sum = a[0] + a[1] + a[2];
//
//	printf("�迭�� �� ���� : %d\n", sum);
//	printf("�迭�� ����� : %.2f\n", (float)sum / 3); // ������ ���������� �ٸ��� ���⿡���� �� ��ȯ�� �ְڴ�.
//
//	return 0;
//}

//int main(void) {
//	int a = 100;
//	int b = 200;
//
//	printf("���� a�� �ּҴ� : %d \n", &a);
//	printf("���� b�� �ּҴ� : %d \n", &b);
//
//	return 0;
//}

//int main(void) {
//	int a[3] = { 10, 20, 30 };
//
//	printf("�迭 a�� �޸� �ּҴ� %d \n", a);
//	printf("�迭 a[0]�� �޸� �ּҴ� %d \n", &a[0]);
//	printf("�迭 a[1]�� �޸� �ּҴ� %d \n", &a[1]);
//	printf("�迭 a[2]�� �޸� �ּҴ� %d \n", &a[2]);
//
//	return 0;
//}

//int main(void) {
//	int a[3] = { 10, 20, 30 };
//
//	printf("a[0]�� %d, a + 0�� %d \n", &a[0], a + 0);
//	printf("a[1]�� %d, a + 1�� %d \n", &a[1], a + 1);
//	printf("a[2]�� %d, a + 2�� %d \n", &a[2], a + 2);
//
//	return 0;
//}

//int main(void) {
//	int data;
//	float f_data;
//
//	scanf_s("%d", &data); // data �޸� �ּҿ� �Է��� ���� �����ض�
//	scanf_s("%f", &f_data);
//
//	printf("�Էµ� ���� : %d %f \n", data, f_data);
//
//	return 0;
//}

//int main(void) {
//	char s[10] = "a-Program";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] : %d \n", &s[3]); // ���������ڸ� d�� �ϸ� �޸��ּҰ�, s�� �ϸ� ���ڿ�(������)�� �˾Ƽ� ����
//	printf("p + 3 : %s \n", p + 3); // ����Ʈ ���� p�� �迭 s�� �ּҸ� ������ ������ s + 3�� ����
//
//	printf("s[0] : %d \n", s[0]); // %s�� ���ڰ� ��µ�����, %d�� �ϸ� ��ǻ�Ͱ� �ν��ϴ� ������ ���� ������
//	printf("*(p + 0) : %d \n", *(p + 0)); // �ҹ��� a�� 97���� ����, z�� ������ �빮�� A�� ����
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
	float avg;*/     //�ؿ��� ����ü�� �ٽ� ����

	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student stu;

	printf("�̸��� �Է� : ");
	scanf_s("%s", stu.name, 9); // null���� ���� ���ڿ��� �����ٰ� �ν�, �ڸ��� ���������

	printf("���� ���� : ");
	scanf_s("%d", &stu.kor);

	printf("���� ���� : ");
	scanf_s("%d", &stu.eng);

	stu.avg = (stu.kor + stu.eng) / 2.0f;  // �Ǽ��� �����߱� ������ ������ �͵� �Ǽ��� ������ ����� ��

	printf("----------------------------------------------------\n");
	printf("�̸� : %s \n", stu.name);
	printf("���� ���� : %d \n", stu.kor);
	printf("���� ���� : %d \n", stu.eng);
	printf("��� : %8.2f \n", stu.avg);

	return 0;
}