#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int random = 0;
	int i;

	printf("�ζ� 6�� ���� �ڵ� ���� \n");
	printf("\n");
	printf("����� ���� 6�� : ");

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		random = rand() % 45 + 1;
		printf("%d ", random);
	}

	printf("\n");

	return 0;
}