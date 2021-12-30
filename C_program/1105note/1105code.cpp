#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main(void) {
//	char name[10];
//	printf("문자열을 입력 : ");
//	scanf_s("%s", name, 9);
//
//	printf("입력한 문자열은 : %s \n", name);
//
//	return 0;
//}

//int main(void) {
//	char ch[50];
//
//	printf("문자열을 입력 : ");
//	gets_s(ch);
//
//	puts(ch); //gets의 출력은 puts로 해야함
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
//	for (; ; ) { //무한루프
//		fgets(ch, 250, rftp);
//		if (feof(rftp)) //eof도 파일에 사용할 땐 앞에 f붙여줌
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
//	printf("합은 : %d \n", sum);
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
//	printf("문자를 입력해주세요(최대 30자) : ");
//	gets_s(ch);
//	fputs(ch, wftp); // wftp변수에 있는 ch문자를 파일에 출력해라(넣어라) 
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
//		printf("%d번째 숫자를 입력 : ", i + 1);
//		scanf_s("%d", &n);
//		sum = sum + n;
//	}
//	fprintf(wftp, "합은 : %d \n", sum);
//	fclose(wftp);
//
//	return 0;
//}

//int main(void) {
//	char ch[] = "abcdefghijklmnopqrstuvwxyz";
//	int len;
//
//	len = strlen(ch);
//	printf("문자열의 길이 값은 : %d \n", len);
//	
//	return 0;
//}

//int main(void) {
//	char ch[5];
//	strcpy(ch, "test");
//
//	printf("문자열의 내용은 : %s\n", ch);
//
//	return 0;
//}

//int main(void) {
//	char ch[20] = "test";
//	strcat(ch, "c-program");
//
//	printf("결합된 문자열은 : %s\n", ch);
//
//	return 0;
//}

//int main(void) {
//	char ch[10] = "TEST";
//	char aa[10] = "Test";
//
//	int r; // 두 문자열를 비교해서 결과값 저장
//
//	r = strcmp(ch, aa); //strcmp는 결과값을 정수로 나타냄
//
//	printf("결과는 : %d\n", r);
//
//	return 0;
//}

int main(void) {
	int aa[10000];
	int* p;

	int i, sum = 0;
	int cnt; // 입력할 숫자의 개수

	printf("입력 개수 :");
	scanf("%d", &cnt); // 입력할 숫자의 개수

	for (i = 0; i < cnt; i++) {
		printf("%d번째 숫자 : ", i + 1);
		scanf("%d", &aa[i]);
	}
	p = aa; // p = aa + 0;

	for (i = 0; i < cnt; i++) {
		sum += *(p + i);
		printf("입력한 숫자의 합은 : %d \n", sum);
	}
	return 0;
}