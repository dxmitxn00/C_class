#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main(void) {
//	char name[10];
//	printf("���ڿ��� �Է� : ");
//	scanf_s("%s", name, 9);
//
//	printf("�Է��� ���ڿ��� : %s \n", name);
//
//	return 0;
//}

//int main(void) {
//	char ch[50];
//
//	printf("���ڿ��� �Է� : ");
//	gets_s(ch);
//
//	puts(ch); //gets�� ����� puts�� �ؾ���
//
//	return 0;
//}

//int main(void) {
//	char ch[30];
//	FILE* rftp; 
//
//	rftp = fopen("c://test//data1.txt", "r"); 
//
//	fgets(ch, 30, rftp); 
//
//	puts(ch);
//
//	return 0;
//}

//int main(void) {
//	char ch[250];
//	FILE* rftp;
//
//	rftp = fopen("c://test//win.ini", "r");
//
//	for (; ; ) { //���ѷ���
//		fgets(ch, 250, rftp);
//		if (feof(rftp)) //eof�� ���Ͽ� ����� �� �տ� f�ٿ���
//			break;
//		puts(ch);
//	}
//	fclose(rftp);
//
//	return 0;
//}

//int main(void) {
//	FILE* rftp;
//	int sum = 0;
//	int i, n;
//
//	rftp = fopen("c://test//data2.txt", "r");
//
//	for (i = 0; i < 5; i++) {
//		fscanf(rftp, "%d", &n);
//		sum = sum + n; //sum += n;
//	}
//	printf("���� : %d \n", sum);
//
//	return 0;
//
//}

//int main(void) {
//	char ch[30];
//	FILE* wftp;
//
//	wftp = fopen("c://test//data3.txt", "w");
//
//	printf("���ڸ� �Է����ּ���(�ִ� 30��) : ");
//	gets_s(ch);
//	fputs(ch, wftp); // wftp������ �ִ� ch���ڸ� ���Ͽ� ����ض�(�־��) 
//
//	fclose(wftp);
//	
//	return 0;
//}

//int main(void) {
//	char ch[250];
//	FILE* rftp;
//	FILE* wftp;
//
//	rftp = fopen("c://test//win.ini", "r");
//	wftp = fopen("c://test//data4.txt", "w");
//
//	for (; ; ) {
//		fgets(ch, 250, rftp);
//		if (feof(rftp))
//			break;
//		fputs(ch, wftp);
//	}
//	fclose(rftp);
//	fclose(wftp);
//
//	return 0;
//}

//int main(void) {
//	FILE* wftp;
//	int sum = 0;
//	int i, n;
//
//	wftp = fopen("c://test//data5.txt", "w");
//
//	for (i = 0; i < 5; i++) {
//		printf("%d��° ���ڸ� �Է� : ", i + 1);
//		scanf_s("%d", &n);
//		sum = sum + n;
//	}
//	fprintf(wftp, "���� : %d \n", sum);
//	fclose(wftp);
//
//	return 0;
//}

//int main(void) {
//	char ch[] = "abcdefghijklmnopqrstuvwxyz";
//	int len;
//
//	len = strlen(ch);
//	printf("���ڿ��� ���� ���� : %d \n", len);
//	
//	return 0;
//}

//int main(void) {
//	char ch[5];
//	strcpy(ch, "test");
//
//	printf("���ڿ��� ������ : %s\n", ch);
//
//	return 0;
//}

//int main(void) {
//	char ch[20] = "test";
//	strcat(ch, "c-program");
//
//	printf("���յ� ���ڿ��� : %s\n", ch);
//
//	return 0;
//}

//int main(void) {
//	char ch[10] = "TEST";
//	char aa[10] = "Test";
//
//	int r; // �� ���ڿ��� ���ؼ� ����� ����
//
//	r = strcmp(ch, aa); //strcmp�� ������� ������ ��Ÿ��
//
//	printf("����� : %d\n", r);
//
//	return 0;
//}

int main(void) {
	int aa[10000];
	int* p;

	int i, sum = 0;
	int cnt; // �Է��� ������ ����

	printf("�Է� ���� :");
	scanf("%d", &cnt); // �Է��� ������ ����

	for (i = 0; i < cnt; i++) {
		printf("%d��° ���� : ", i + 1);
		scanf("%d", &aa[i]);
	}
	p = aa; // p = aa + 0;

	for (i = 0; i < cnt; i++) {
		sum += *(p + i);
		printf("�Է��� ������ ���� : %d \n", sum);
	}
	return 0;
}