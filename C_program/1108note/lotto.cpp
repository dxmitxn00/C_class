#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int random = 0;
	int i;

	printf("로또 6개 숫자 자동 추출 \n");
	printf("\n");
	printf("추출된 숫자 6개 : ");

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		random = rand() % 45 + 1;
		printf("%d ", random);
	}

	printf("\n");

	return 0;
}