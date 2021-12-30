//	void swap(int a, int b) {
//	    int temp = a;
//	    a = b;
//	    b = temp;
//	}
//
//	int main(void) {
//	    int first = 20, second = 30;
//	    printf("before : frist = %d, second = %d \n", first, second);
//
//	    swap(first, second);
//	    printf("after : frist = %d, second = %d \n", first, second);
//	}
//
//--------------------------------------------------------------------------------------------
//
//	void swap(int *a, int *b) {
//	    int temp = *a;
//	    *a = *b;
//	    *b = temp;
//	}
//
//	int main(void) {
//	    int first = 20, second = 30;
//	    printf("before : frist = %d, second = %d \n", first, second);
//
//	    swap(&first, &second);
//	    printf("after : frist = %d, second = %d \n", first, second);
//	}
//
//--------------------------------------------------------------------------------------------
//
//- 세 개의 수를 입력받아 가장 큰 수랑 가장 작은 수를 나타낸는 소스
//   ㄴif문을 이용한 삼학연산자(잘 안쓰고 포인터를 많이 이용함)
//   ㄴ 가장 큰 수 비교하는 함수 하나, 가장 작은 수 비교하는 함수 하나 => 총 함수 두개 필요
//                                                                                            (main 함수 제외)
//
//	int maxNum(int n1, int n2, int n3) {
//	    if (n1 > n2)
//	        return (n1 > n3) ? n1 : n3;      // ? 참 : 거짓
//	    else
//	        return (n2 > n3) ? n2 : n3;
//	}
//
//	int minNum(int n1, int n2, int n3) {
//	    if (n1 < n2)
//	        return (n1 < n3) ? n1 : n3;
//	    else
//	        return (n2 < n3) ? n2 : n3;
//	}
//
//	int main(void) {
//	    int num1, num2, num3;
//
//	    printf("정수 세 개를 입력하세요 :");
//	    scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	    printf("가장 큰 수는 : %d \n", maxNum(num1, num2, num3));
//	    printf("가장 작은 수는 : %d \n", minNum(num1, num2, num3));
//
//	    return 0;
//	}
//
//--------------------------------------------------------------------------------------------
//
//- 배열
//   array : 변수
//    ㄴ> (단수데이터)변수 : 변수 1개 당 하나의 데이터만 저장
//          (복수데이터)배열 : 여러 개의 데이터를 담는 것
//                          ㄴ> 단점 : 같은 데이터 형만 담을 수 있음
//                        (정적 메모리)배열의 길이값 선언하면 못 바꿈  => 배열의 길이값 = 상수
//                           => 배열의 단점 보완 = 구조체(struct) : 여러 개 데이터 타입 수용
//                                                         malloc : 동적 메모리 할당
//
//- 배열 선언 = 길이값만 주면 됨
//	int a[30]  // 30개의 방을 만듦
//	int a[30] = {1,2,3,4,5,.......30}  // {}에 데이터값 적어줌 = 초기화
//              ㄴ> 길이값/ 길이값 - 1 = 최고 index 값 => 0부터 세는 10진법이기 때문  
//
//	char c[8]; = { H, e, l, l, o, ! }; 
//                 // 문자열은 끝을 모르기 때문에 마지막에 공백을 줌(길이값을 나라 더 줘야함)
//	int i[10];
//	float f[10];
//
//  인덱스 별로 초기화 안해주면 쓰레기값 나옴
// --- 배열 선언과 동시에 초기화 해주어야 한다.
//      배열의 길이 값(상수값)은 한 번 선언하면 끝
//
//         1. s[0] = 90;                                   2. int s[5] = { 90, 60, 30 };
//	s[1] = 40;                                       ㄴ> 한 번에 초기화 됨
//	s[2] = 70;
//	s[3] = 0;                                       
//	s[4] = 0;                                     3. int s[] = { 90, 60, 30 };
//					   ㄴ> 내가 필요한 만큼 길이값 조절해줌
//          ㄴ> 일일이 초기화 해줘야함
//
//
//
//	int main(void) {
//	    int a[] = { 1, 2, 3 };
//	    int sum = 0;
//
//	    sum = a[0] + a[1] + a[2]
//
//	    printf("배열의 총 합은 : %d\n", sum);
//	    printf("배열의 평균은 : %.2f\n", (float)sum / 3);
//                                    // (float)선언한 데이터형과 다르게 여기에서만 형 변환을 주겠다.
//                                             ㄴ> %와 f 사이에 .숫자를 적으면 자릿수 설정할 수 있음
//	    return 0;
//	}
//
//  배열이 아닌 변수들은 랜덤으로 메모리가 저장됨, 주소가 제각각
//  배열인 변수는 배열 안의 데이터들이 순차적으로 저장됨
//
//--------------------------------------------------------------------------------------------
//
//- 포인터 & 배열
//  bit = 0과 1을 담음 // 1byte = 8bit
//
//
//!!!!!!   배열 첨자로 표현(&필요)    =   배열의 이름으로 표현      실제 주소   !!!!!!
//!!!!!! (배열 a의 인덱스 0의 주소)   =  (배열 a의 0번째 인덱스)                    !!!!!!
//                    &a[0]                               a + 0                   1000
//                    &a[1]                               a + 1                   1004
//                                                            ㄴ> 배열에서만 가능한 표기법
//                                                                  (배열의 이름 + 인덱스 값)
//     ===> 같은 메모리 주소가 나옴             ->배열의 이름 자체는 주소를 나타냄(&불필요)
//
//
// - C에서 문자열을 나타내기 위해서는 문자형을 이용한 배열선언
//
//
//	int main(void) {
//	    char s[10] = "a-Program";
//	    char* p;
//
//	    p = s;
//
//	    printf("&s[3] : %d \n", &s[3]);
//                 // 서식지정자를 d로 하면 메모리주소가, s로 하면 문자열(데이터)가 알아서 나옴
//	    printf("p + 3 : %s \n", p + 3);
//                                    // 포인트 변수 p가 배열 s의 주소를 가졌기 때문에 s + 3과 같음
//
//	    printf("s[0] : %d \n", s[0]);
//                  // %s면 문자가 출력되지만, %d로 하면 컴퓨터가 인식하는 문자의 값을 보여줌
//	    printf("*(p + 0) : %d \n", *(p + 0));
//                                               // 소문자 a는 97부터 시작, z가 끝나면 대문자 A가 시작
//
//	    return 0;
//	}
//
//   - 배열의 값 출력
//	char s[3];	|	s[0]		*(s + 0)		*(p + 0)
//	char* p;	|=>	s[1]		*(s + 1)		*(p + 1)
//	p = s;	|	s[2]		*(s + 2)		*(p + 2)
//
//   - 배열의 메모리 주소 출력
//	char s[3];	|	&s[0]		s + 0		p + 0
//	char* p;	|=>	&s[1]		s + 1		p + 1
//	p = s;	|	&s[2]		s + 2		p + 2
//
//------------------------------------------------------------------- 기본 개념 끝 -----------
//
//- 배열의 단점을 수정하여 구조체(struct)를 사용한다.
//                                  ㄴ> 구조체의 단점 : 여러 데이터형을 받지만 배열은 아님
//    : 구조체는 #include<stdio.h> 말고 헤더파일 하나가 더 들어와야함
//
//    : 구조체 이름을 가진 변수를 또 다시 선언해줘야 메모리에 저장됨 => 저장돼야 출력가능
//      구조체 선언만 하면 그냥 읽고 넘어감 (저장x)
//
//- 구조체 선언법
//	struct 구조체 이름 {
//	    데이터형 멤버변수;
//	    데이터형 멤버변수;
//	    .......
//	}add;  // 밑에꺼 귀찮으면 중괄호 뒤에 변수 이름 적어줘도 됨
//	
//	struct address add;  // 구조체이름의 변수를 선언해서 메모리에 저장하도록 함
//             ㄴ> struct 구조체이름 선언할변수의이름
//
//
//- .(dot 연산자) : 연결 연산자 ---> 구조체에서 불러올 때 많이 쓰임
//	add.a = 10;  //연결 연산자를 쓸 때는 초기화 안해줘도 됨
//	add.b = 1.5;
//	add.c = 'B';
//	strcpy(add.ch, "abcd");
//             ㄴ> string copy = 문자열 복사 => "abcd"를 add.ch 배열에 복사해서 넣어라
//	         ==> 문자열을 위한 전처리 #include<string.h> 필요
//	printf("add.a : %d \n", add.a);
//	printf("add.b : %d \n", add.b);
//	printf("add.c : %d \n", add.c);
//	printf("add.ch : %d \n", add.ch);
//
//  !!!!!!!!!!!!! 경고 떴을 때 헤더파일 위에 #define _CRT_SECURE_NO_WARNINGS 붙이기!!!!!!!!!!!
//                  ㄴ> scanf에 _s 안붙이거나, struct에 _s를 안붙이면 생김
//                    ==========> 비주얼 스튜디오에서만 이런 경우가 다반사
//
//
//	int main(void) {
//	    /*char name[10];
//	    int kor;
//	    int eng;
//	f    loat avg;*/     //밑에다 구조체로 다시 구현
//
//	    struct student {
//	        char name[10];
//	        int kor;
//	        int eng;
//	        float avg;
//	    };
//
//	    struct student stu;
//
//	    printf("이름을 입력 : ");
//	    scanf_s("%s", stu.name,9);
//                                         // null값을 쓰면 문자열이 끝난다고 인식, 자릿수 적어줘야함
//
//	    printf("국어 점수 : ");
//	    scanf_s("%d", &stu.kor);
//
//	    printf("영어 점수 : ");
//	    scanf_s("%d", &stu.eng);
//
//	    stu.avg = (stu.kor + stu.eng) / 2.0f;
//                                    // 실수로 선언했기 때문에 나누는 것도 실수로 형변형 해줘야 함
//
//	    printf("----------------------------------------------------\n");
//	    printf("이름 : %s \n", stu.name);
//	    printf("국어 점수 : %d \n", stu.kor);
//	    printf("영어 점수 : %d \n", stu.eng);
//	    printf("평균 : %8.2f \n", stu.avg);
//                                   ㄴ> 8은 8자리 공백을 띄워서 자리배치 하는 것 
//	    return 0;
//	}
//
//
//
//
//- 자료구조할 때 구조체 변수 선언과 초기화 동시에 하는 법
//
//	struct address{
//	    int a;
//	    float b;
//	    char c;
//	    char ch[5];
//	};
//
//	struct address add = { 90, 80.0, 'A', "aaa" } => 변수 선언 동시에 초기화
