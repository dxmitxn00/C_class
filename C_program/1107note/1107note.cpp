//저번시간 문제 답
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
//16진법 : 0123456789ABCDEF
//
//- 포인터 배열
//
//포인터 변수                배열의 이름
//이름 존재           존재o                       존재o
//저장하는것         주소값                      주소값
//주소값변경          가능                        불가능
//
//--->배열의 길이 값 : 상수
//= > 배열의 이름도 상수
//
//
//int arr[3] = { 1, 2, 3 };
//주소 표현 방식 : arr == &arr[0]
//배열의 값 arr[0] == *arr
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
//-상수 형태 문자열 포인터
//
//char str1{} = "C-Programming";
//ㄴ > 배열을 기반으로 하는 문자열 선언
//= 배열을 기반으로 하는 "변수 형태의 문자열"
//-------- > 변수 형태의 문자열이라고 할  수 있는 이유는
//문자의 일부분을 바꿀 수 있기 때문
//char* str2 = "C-Programming";
//ㄴ > 자동으로 할당(뒤에 널 포함)
//
//str1 : 그 자체로 문자열 전체를 저장하는 배열
//str2 : 메모리상에 자동으로 저장된 문자열의
//첫 번째 문자를 단순히 가리키고 있는 포인터 배열
//
//==> 중요한 차이점은
//str1은 계속 문자 'C'가 저장된 위치(주소)를 가리킨다.
//포인트 변수 str2는 다른 위치를 가리킬 수 있다.
//
//int main(void) {
//	char str1[] = "C-Programming"; // 변수 형태의 문자열
//	const char* str2 = "C++-Programming";
//	// 상수 형태의 문자열
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
//- 배열 : 포인터 변수로 이루어진 배열
//int* arr[20]; //길이가 20인 int형 포인터 배열 arr
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
//-함수와 포인터의 관계
//
//int function(int num) { ... }
//
//int main(void) {
//	int age = 20;
//	function(age); // age에 저장된 값이 num에 전달(값이 복사)
//	......
//}
//
//--->배열을 함수의 인자로 전달할 수 있다.
//
//int main(void) {
//	int arr[3] = { 1, 2, 3 };
//	int* ptr = arr;
//
//	sizeof(배열의이름) / sizeof(데이터형) : 배열의 길이 값 구하기
//
//		sizeof(데이터 형) : 배열의 크기 구하기
//
//		Call - by - value : 값 복사->웬만한 c언어의 패턴
//		Call - by - reference : 주소
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
//	const : 상수만들어줌->포인터에도 사용가능 = > 변경 불가능
//
//		int main(void) {
//		const int* ptr = &num;
//		*ptr = 50; // 컴파일 에러
//		num = 50;
//
//
//		----------------배열 / 함수 / 포인터 / 포인터의포인터(**ptr)끝-------------- -
//
//			-구조체(struct), typedef
//
//			typedef struct person {
//			int age; // 구조체가 가진 멤버 변수
//			char name[25];
//			int number;
//		} per;
//		struct person per;
//
//		typedef : 별칭도 만들어줌
//			typedef int iint; // int를 iint로 치환
//		ㄴ > int num == iint num 이 될 수 있음
//
//			------------------------------------------------------------------------ -
//
//			-메모리(스택 / 힙)
//			malloc(동적 메모리)
//			메모리 할당 1. 정적 메모리 할당 : 사라지는 것도 자동적으로 해제
//			ㄴ > 연결고리가 끊어짐
//			2. 동적 메모리 할당 : 사용자가 직접 메모리 해제
//			ㄴ > 메모리해제 안해줘도 되지만 계속 쌓임
//			==> 메모리 해제 함수 : free()
//			메모리 할당 함수 : malloc()
//			ㄴ > 메모리, 데이터는 클리어가 되지 않는 이상 안사라짐
//			-- > 메모리 해제 : 데이터의 주소를 끊어버림
//
//			free()는 매개 변수로 해제할 포인터 변수를 가진다.
//			void* malloc(size_t, size)
//			void free(void* ptr);
//
//		int* ptr[3]
//			free(ptr) // free()는 반환형이 존재하지 않는다.
//
//			void free(pointer - name);
//
//
//
//		int main(void) {
//			ptr = malloc(4); // 4바이트가 힙 영역에 할당
//			ptr1 = malloc(12); //12바이트
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
//			int arr = (int*)calloc(3, 3) -> 9바이트 쓰겠다는 소리
//
//				------------------------------------------------------------------------ -
//
//				-예외처리구문 / 이중 포인터
//
//				------------------------------------------------------------------------ -
//
//				-이중포인터 : 포인터의 포인터를 가르킨다.
//				ㄴ > 포인터 변수의 메모리 주소를 가져오는 포인터 변수
//
//
//				[이메일] 노원 / 이름