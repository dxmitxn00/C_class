#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


struct address {
	char name[30];
	char age[5];
	char phone[15];
	char btd[15];
}; // �̸�, ����, ��ȭ��ȣ �迭 ����

void print_menu();
void view_juso();
void add_juso();
void delete_juso();
// �� �Լ�

const char* fname = "c://Project//juso.txt"; // ������ ���� fname ��� ����

int main()
{
	char select = 0;
	puts(" \n### ģ�� �ּҷ� ###\n"); // ģ���ּҷ�����? ���

	while (select != 4) {
		print_menu();
		select = getchar();
		getchar();

		switch (select)
		{
		case '1': view_juso(); // case1�� ����ó�Լ�
			break;
		case '2': add_juso(); // case2�� �߰��Լ�
			break;
		case '3': delete_juso(); // case3�� �����Լ�
			break;
		case '4': return 0; // case4�� ������
			break;
		default: printf("\n �߸� �Է��߾��. �ٽ� �����ϼ���.\n");
			// �� �� "�߸�-" ���
		}
	}

	return 0;
}

void print_menu() { //�޴��Լ�
	printf("\n");
	printf("1. ����ó ��� \n");
	printf("2. ����ó ��� \n");
	printf("3. ����ó ���� \n");
	printf("4. ������ \n"); // �޴� ��� ���
}

void view_juso() { //����ó�Լ�
	char str[200] = ""; //���ڹ迭����
	FILE* rfp, * wfp; //���� �б�, ���� ������ ���� ����
	int i; //���ǹ� ���� ����

	rfp = fopen(fname, "r"); // fname �ּ� �о����

	if (rfp == NULL) { //�ݺ��� rfp�� NULL�̸�
		wfp = fopen(fname, "w"); //fname�� "w" ����
		fclose(wfp); //wfp �ݱ�
		rfp = fopen(fname, "r"); // rfp�� fname "r' �о����
	}

	for (i = 1; ; i++) { //���ǹ�, ���ѷ���
		fgets(str, 200, rfp); // rfp�� �ִ� str�� �ε��� 200 �迭 ��������

		if (feof(rfp)) // �ݺ���, ���ѷ��� �� ���� ������ break
			break;

		printf("%2d:  %s", i, str); // ����ó ���
	}

	if (i == 1) // �ݺ���, ���Ͽ� ����ó�� ������
		puts("\n ** ����ó ���Ͽ� ��ȭ��ȣ�� �ϳ��� �����. **\n"); // ���

	fclose(rfp); // ���� �ݾ��ֱ�
}

void add_juso() { // �߰� �Լ�
	struct address adr = { "", "", "" }; // ����ü address �迭 ����
	char wstr[200] = ""; // wstr ���� �迭 ����
	FILE* wfp; // ���� wfp ������ ���� ����

	wfp = fopen(fname, "a"); // wfp������ fname �����ֱ� --> "a"�� �ǹ̴� all ���: ���� ������ ����, �����ϸ� �ڿ� �߰�
														   //"w" ����� �ϸ� �� ���� ������� ������ ��

	printf("�̸��� �Է� ==> ");
	gets_s(adr.name); // ����ü adr�� name[30]�迭�� ���缭 �Է�
	printf("���̸� �Է� ==> ");
	gets_s(adr.age); // ����ü adr�� age[5]�迭�� ���缭 �Է�
	printf("��ȭ��ȣ�� �Է� ==> ");
	gets_s(adr.phone); // ����ü adr�� phone[15]�迭�� ���缭 �Է�
	printf("������ �Է�(xxxx.xx.xx) ==> ");
	gets_s(adr.btd);

	strcat(wstr, adr.name);
	strcat(wstr, "\t");
	strcat(wstr, adr.age);
	strcat(wstr, "\t");
	strcat(wstr, adr.phone);
	strcat(wstr, "\t");
	strcat(wstr, adr.btd);
	strcat(wstr, "\n");

	fputs(wstr, wfp); // wstr�� wsfp ���

	fclose(wfp); // wfp������ ���� �ݾ��ֱ�
}


void delete_juso() { // ���� �Լ�
	char read_str[50][200] = { "", };  // ������ read_str 2���迭 ����

	char str[200] = ""; // str ���ڹ迭 ����
	FILE* rfp, * wfp; // ���� rfp, wfp ������ ���� ����
	int del_line, i, count = 0; // ������ �ʱ�ȭ

	rfp = fopen(fname, "r"); // rfp ������ fname �ּ� �о����

	if (rfp == NULL) { // �ݺ���, rfp�� NULL�̸�
		puts("\n!! ����ó ������ �����ϴ�. !!\n"); // ���
		return; // ������
	}

	printf("\n������ �� ��ȣ�� ? "); // ���
	scanf_s("%d", &del_line); // ������ �� �Է�

	for (i = 0; i < 50; i++) // ���ǹ�
	{
		strcpy(str, ""); // str ���� ����
		fgets(str, 200, rfp); // rfp ������ ������ �ִ� 200���� str �迭 ��������

		if (i + 1 != del_line) // �ݺ���
		{
			strcpy(read_str[i], str);
			count++;
		}
		else
			printf("%d ���� �����Ǿ����ϴ�. \n", del_line); // ���

		if (feof(rfp)) // �ݺ���, rfp ������ ������ break 
			break;
	}

	fclose(rfp); //rfp ���� �ݱ�

	wfp = fopen(fname, "w"); // wfp�� fname�ּҿ��� ����

	for (i = 0; i < count; i++) // ���ǹ�
		fputs(read_str[i], wfp);

	fclose(wfp); // wfp ���� �ݱ�
}