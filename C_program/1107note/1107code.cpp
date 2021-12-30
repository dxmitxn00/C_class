#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main(void) {
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* temp;
//
//	(*ptr1) += 20;
//	(*ptr2) -= 10;
//
//	temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//
//	printf("%d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}

//int main(void) {
//	int arr[3] = { 1, 2 ,3 };
//	printf("배열의 이름 : %p \n", arr);
//	printf("배열의 첫 번째 요소 : %p \n", &arr[0]);
//	printf("배열의 두 번째 요소 : %p \n", &arr[1]);
//
//	return 0;
//}

//int main(void) {
//	int arr1[3] = {1, 2, 3};
//	double arr2[3] = {1.1, 2.2, 3.3};
//
//	printf("%d %g \n", *arr1, *arr2); //데이터형이 double일 땐 %lf 나 %g로 줘도 됨
//
//	*arr1 += 100;
//	*arr2 += 100.5;
//
//	printf("%d %lf \n", arr1[0], arr2[0]);
//
//	return 0;
//}

//int main(void) {
//	int arr[3] = { 1, 2, 3 };
//	int* ptr = &arr[0]; // int* ptr = arr
//
//	printf("%d %d \n", ptr[0], arr[0]);
//	printf("%d %d \n", ptr[1], arr[1]);
//	printf("%d %d \n", ptr[2], arr[2]);
//	printf("%d %d \n", *ptr, *arr);
//
//	return 0;
//}

//int main(void) {
//	int arr[3] = { 10, 20, 30 };
//	int* ptr = arr; // int* ptr = &arr[0];
//
//	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));// 10, 20, 30
//
//	printf("%d", *ptr); ptr++; // 10
//
//	printf("%d", *ptr); ptr++; // 20
//
//	printf("%d", *ptr); ptr--; // 30
//
//	printf("%d", *ptr); ptr--; // 20
//
//	printf("%d", *ptr); printf("\n"); // 10
//
//	return 0;
//}

//int main(void) {
//	char str1[] = "C-Programming"; // 변수 형태의 문자열
//	const char* str2 = "C++-Programming"; // 상수 형태의 문자열
//
//	printf("%s %s \n", str1, str2);
//
//	str2 = "Java-Programming";
//	printf("%s %s \n", str1, str2);
//
//	str1[0] = 'J';
//	/*const str2[0] = 'C';*/
//	printf("%s %s \n", str1, str2);
//
//	return 0;
//}

//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* arr[3] = { &num1, &num2, &num3 };
//
//	printf("%d \n", *arr[0]);
//	printf("%d \n", *arr[1]);
//	printf("%d \n", *arr[2]);
//
//	return 0;
//}

//void arrayElement(int* ptr, int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//}
//
//int main(void) {
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 4, 5, 6, 7, 8 };
//
//	arrayElement(arr1, sizeof(arr1) / sizeof(int));
//	arrayElement(arr2, sizeof(arr2) / sizeof(int));
//
//	return 0;
//}

//void arrayElement(int* ptr, int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//}
//
//void addArrayElement(int* ptr, int len, int add) {
//	int i;
//	for (i = 0; i < len; i++) {
//		ptr[i] += add;
//	}
//}
//
//int main(void) {
//	int arr[3] = { 1, 2, 3 };
//	addArrayElement(arr, sizeof(arr) / sizeof(int), 1);
//	arrayElement(arr, sizeof(arr) / sizeof(int));
//
//	addArrayElement(arr, sizeof(arr) / sizeof(int), 2);
//	arrayElement(arr, sizeof(arr) / sizeof(int));
//
//	addArrayElement(arr, sizeof(arr) / sizeof(int), 3);
//	arrayElement(arr, sizeof(arr) / sizeof(int));
//
//	return 0;
//}

//void swap(int n1, int n2) {
//	int temp = n1;
//	n1 = n2;
//	n2 = temp;
//	printf("n1 n2 : %d %d \n", n1, n2);
//}
//
//int main(void) {
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1, num2 : %d %d \n", num1, num2);
//
//	swap(num1, num2);
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	return 0;
//}

//void swap(int *n1, int *n2) {
//	int temp = *n1;
//	*n1 = *n2;
//	*n2 = temp;
//}
//
//int main(void) {
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1, num2 : %d %d \n", num1, num2);
//
//	swap(&num1, &num2);
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	return 0;
//}

int main(void) {
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++) {
		ptr2[i] = i + 1;
	}

	printf("%d \n", *ptr1);
	for (i = 0; i < 7; i++) {
		printf("%d ", ptr2[i]);
	}

	free(ptr1);
	free(ptr2);

	return 0;
}