#include<stdio.h>

//int max(int x, int y) { // �� ���� �� �Լ�(����� ���� �Լ�)
//	if (x > y) // x = 10, y = 6
//		return x;
//	else
//		return y;
//	}
//
//int main(void) {
//	int i, j; // i,j �Է°�
//	int result; // ���� �����
//
//	printf("�� ������ �Է��ϼ���: ");
//	scanf_s("%d %d", &i, &j);
//
//	result = max(i, j);// ���Լ�(max�Լ�) ȣ��
//	printf("%d�� %d �� ū ���� %d �Դϴ�.\n", i, j, result);
//
//	return 0;
//}

//void func_A(void);
//
//int main(void) {
//	int a = 10;
//	printf("main()�� a�� ���� : %d \n", a);
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
//	printf("func_A()�� a���� :%d \n", a);
//	printf("func_A()�� b���� :%d \n", b);
//}

//int main(void) {
//	int i = 0;
//	int total = 0;
//
//	for (i = 1; i < 3; i++) {
//		int total = 0;
//		total = total + i; // �߰�ȣ{}�� �ִ� ���������� ��(main�� total)�� �ſ� �������� ����
//	}
//
//	if (total < 10) { // ��ȣ()�� �ִ� ���������� ��(main�� total)�� �ſ� ����
//		printf("total�� ���� %d�Դϴ�. \n", total);
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
//	printf("����� : %d \n", result);
//	return 0;
//}

//int num; // ��������
//
//void a(void) {
//	num = 50;
//}
//
//int main(void) {
//	printf("num�� ���� : %d \n", num);
//
//	a();
//	printf("num�� ���� : %d \n", num);
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
//	printf("ch�� ������ �ִ� ���� : %c \n", ch); // ch �����͸� ���������� ��
//	printf("ch�� �޸� �ּ� ���� : %d \n", &ch); // �޸� �ּҴ� �����ϱ� %d �� �������
//	printf("p�� ������ �ִ� ���� : %d \n", p); // �޸� �ּҸ� ���������� �� 
//	printf("p�� ����Ű�� ���� ���� ���� : %c \n", *p); // ������ p�� ����Ű�� �ּ��� ������ ��(ch�� ������)�� ���������� ��
//
//	return 0;
//}

//int main(void) {
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch; //p�� ch�� �ּҸ� ����
//
//	q = p; //q�� p�� ���� ch�� �ּҸ� ����
//
//	*q = 'Z'; //*q�� p�� ���ؼ� ch�� ��ġ�� ���� A��� �����͸� Z�� �ٲ�
//
//	printf("ch�� ����Ǿ� �ִ� ���� : %c \n", ch);
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