//�����ð� ���� ��
//
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
//
//
//--------------------------------------------------------------
//
//16���� : 0123456789ABCDEF
//
//- ������ �迭
//
//������ ����                �迭�� �̸�
//�̸� ����           ����o                       ����o
//�����ϴ°�         �ּҰ�                      �ּҰ�
//�ּҰ�����          ����                        �Ұ���
//
//--->�迭�� ���� �� : ���
//= > �迭�� �̸��� ���
//
//
//int arr[3] = { 1, 2, 3 };
//�ּ� ǥ�� ��� : arr == &arr[0]
//�迭�� �� arr[0] == *arr
//
//
//arr[i] == *(arr + i)
//
//printf("%d %d %d \n", *(ptr + 0), *(ptr + 1), *(ptr + 2));
////*(ptr + 0) == *ptr
//printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
//printf("%d %d %d \n", *(arr + 0), *(arr + 1), *(arr + 2));
//// *(arr + 0) == *arr
//printf("%d %d %d \n", arr[0], arr[1], arr[2]);
//
//
//
//-��� ���� ���ڿ� ������
//
//char str1{} = "C-Programming";
//�� > �迭�� ������� �ϴ� ���ڿ� ����
//= �迭�� ������� �ϴ� "���� ������ ���ڿ�"
//-------- > ���� ������ ���ڿ��̶�� ��  �� �ִ� ������
//������ �Ϻκ��� �ٲ� �� �ֱ� ����
//char* str2 = "C-Programming";
//�� > �ڵ����� �Ҵ�(�ڿ� �� ����)
//
//str1 : �� ��ü�� ���ڿ� ��ü�� �����ϴ� �迭
//str2 : �޸𸮻� �ڵ����� ����� ���ڿ���
//ù ��° ���ڸ� �ܼ��� ����Ű�� �ִ� ������ �迭
//
//==> �߿��� ��������
//str1�� ��� ���� 'C'�� ����� ��ġ(�ּ�)�� ����Ų��.
//����Ʈ ���� str2�� �ٸ� ��ġ�� ����ų �� �ִ�.
//
//int main(void) {
//	char str1[] = "C-Programming"; // ���� ������ ���ڿ�
//	const char* str2 = "C++-Programming";
//	// ��� ������ ���ڿ�
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
//
//
//- �迭 : ������ ������ �̷���� �迭
//int* arr[20]; //���̰� 20�� int�� ������ �迭 arr
//
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
//
//------------------------------------------------------------------------ -
//
//-�Լ��� �������� ����
//
//int function(int num) { ... }
//
//int main(void) {
//	int age = 20;
//	function(age); // age�� ����� ���� num�� ����(���� ����)
//	......
//}
//
//--->�迭�� �Լ��� ���ڷ� ������ �� �ִ�.
//
//int main(void) {
//	int arr[3] = { 1, 2, 3 };
//	int* ptr = arr;
//
//	sizeof(�迭���̸�) / sizeof(��������) : �迭�� ���� �� ���ϱ�
//
//		sizeof(������ ��) : �迭�� ũ�� ���ϱ�
//
//		Call - by - value : �� ����->������ c����� ����
//		Call - by - reference : �ּ�
//
//
//		void swap(int n1, int n2) {
//		int temp = n1;
//		n1 = n2;
//		n2 = temp;
//		printf("n1 n2 : %d %d \n", n1, n2); // 20, 10
//	}
//
//	int main(void) {
//		int num1 = 10;
//		int num2 = 20;
//		printf("num1, num2 : %d %d \n", num1, num2); // 10, 20
//
//		swap(num1, num2);
//		printf("num1 num2 : %d %d \n", num1, num2); // 10, 20
//
//		return 0;
//	}
//
//
//
//
//
//
//
//	void swap(int* n1, int* n2) {
//		int temp = *n1;
//		*n1 = *n2;
//		*n2 = temp;
//	}
//
//	int main(void) {
//		int num1 = 10;
//		int num2 = 20;
//		printf("num1, num2 : %d %d \n", num1, num2); // 10, 20
//
//		swap(&num1, &num2);
//		printf("num1 num2 : %d %d \n", num1, num2); // 20, 10
//
//		return 0;
//	}
//
//
//
//
//	const : ����������->�����Ϳ��� ��밡�� = > ���� �Ұ���
//
//		int main(void) {
//		const int* ptr = &num;
//		*ptr = 50; // ������ ����
//		num = 50;
//
//
//		----------------�迭 / �Լ� / ������ / ��������������(**ptr)��-------------- -
//
//			-����ü(struct), typedef
//
//			typedef struct person {
//			int age; // ����ü�� ���� ��� ����
//			char name[25];
//			int number;
//		} per;
//		struct person per;
//
//		typedef : ��Ī�� �������
//			typedef int iint; // int�� iint�� ġȯ
//		�� > int num == iint num �� �� �� ����
//
//			------------------------------------------------------------------------ -
//
//			-�޸�(���� / ��)
//			malloc(���� �޸�)
//			�޸� �Ҵ� 1. ���� �޸� �Ҵ� : ������� �͵� �ڵ������� ����
//			�� > ������� ������
//			2. ���� �޸� �Ҵ� : ����ڰ� ���� �޸� ����
//			�� > �޸����� �����൵ ������ ��� ����
//			==> �޸� ���� �Լ� : free()
//			�޸� �Ҵ� �Լ� : malloc()
//			�� > �޸�, �����ʹ� Ŭ��� ���� �ʴ� �̻� �Ȼ����
//			-- > �޸� ���� : �������� �ּҸ� �������
//
//			free()�� �Ű� ������ ������ ������ ������ ������.
//			void* malloc(size_t, size)
//			void free(void* ptr);
//
//		int* ptr[3]
//			free(ptr) // free()�� ��ȯ���� �������� �ʴ´�.
//
//			void free(pointer - name);
//
//
//
//		int main(void) {
//			ptr = malloc(4); // 4����Ʈ�� �� ������ �Ҵ�
//			ptr1 = malloc(12); //12����Ʈ
//
//			free(ptr);
//			free(ptr1);
//
//			void* ptr1 = (int*)maloc(sizeof(int)); // malloc(4)
//			void* ptr2 = (double*)malloc(sizeof(double)); // malloc(8)
//			void* ptr3 = malloc(sizeof(char)) // malloc(1)
//				noid * ptr4 = malloc(sizeof(int) * 4); //malloc(16)
//
//
//			malloc == calloc
//				realloc
//
//				int* arr = (int*)malloc(sizeof(int) * 3);
//			int arr = (int*)calloc(3, 3) -> 9����Ʈ ���ڴٴ� �Ҹ�
//
//				------------------------------------------------------------------------ -
//
//				-����ó������ / ���� ������
//
//				------------------------------------------------------------------------ -
//
//				-���������� : �������� �����͸� ����Ų��.
//				�� > ������ ������ �޸� �ּҸ� �������� ������ ����
//
//
//				[�̸���] ��� / �̸�