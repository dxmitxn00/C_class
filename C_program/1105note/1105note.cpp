//<<<<<<C 기초 플러스 / Stephen Prata / 성안당 / 이선민, 조혜란, 윤성일 옮김>>>>>> >
//
//
////malloc() : 동적 메모리 할당 - 남은 메모리 유두리 있게 활용
//ㄴ > sizeof(배열 이름) / sizeof(데이터 형) = 배열의 길이 값
//
//
//
//표준 입출력 / 파일 입출력
//ㄴ > printf, scanf
//
//
//- 표준 입출력
//입력 : scanf()[문자열 받음] / gets()[문자열 받음] / getchar()[문자 받음]
//ㄴ > scanf와 gets는 같이 쓰임
//
//--->scanf는 공백이 있으면 끝남, 공백 없는 입력만 해야함
//gets는 공백까지 입력받음
//
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
//
//
//
//출력: printf() / puts()[문자열 받음] / putchar()[문자 받음]
//
//
//
//
//-파일 입출력
//파일입력 : fscanf() / fgets()[문자열 받음] / fgetc()[문자 받음]
//파일출력 : fprintf() / fputs()[문자열 받음] / fputchar()[문자 받음]
//
//1단계.파일 포인터 변수 선언(FILE * 변수이름)
//2단계.파일 오픈(fopen())
//3단계.읽기(r) 혹은 쓰기(w) 등 파일에 관련된 처리
//4단계.파일 닫기(fclose())
//
//= > 문자배열 변수 선언->파일 포인터 변수 선언->포인터변수에 파일 열어주기
//->연 파일을 fgets를 통해 읽어주기->puts로 출력
//ㄴ > 파일을 바로 받아서 출력이 아니라
//변수에 거쳐서 오기 때문에 puts써줌
//
//int main(void) {
//	char ch[30];
//	FILE* rftp; //변수의미: 텍스트형 파일을 읽어오는 포인트 변수
//
//	rftp = fopen_s("c://test//data1.txt", "r");
//	//경로 설정할 땐 //로 표시, "r"은 그 경로의 파일을 읽어오겠다는 표현(read)
//
//	fgets(ch, 30, rftp); //변수(배열)이름, 최대 30자, 무슨파일을 읽어서 변수에 넣나
//
//	fputs(ch);
//
//	return 0;
//}
//
//
//파일 안에 데이터가 많을 때 반복문(for문 활용)
//
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
//
//eof = end of file 파일 활용할 땐 무조건 쓰임 == 파일 끝낫냐 ?
//
//
//
//
//!!!!!!!!!!!!!!!!!!!!!!비주얼 스튜디오에서 안될 때 속성->c++->sdl겁사->아니요 !!!!!!!!!!!!!!!!!!!!!!
//그래도 안되면 #define _CRT_SECURE_NO_WARNINGS 해주기
//!!!!!!!!!!!debug assertion failed가 뜨면 windows시스템을 건드는 거니까 함부로 수정x!!!!!!!!!
//
//
//
//
//파일쓰기	int main(void) {
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
//
//
//
//
//파일복사	int main(void) {
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
//
//
//
//
//입력 후	int main(void) {
//	파일쓰기	    FILE* wftp;
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
//
//
//--------------------------------------------------------------------------------------------
//
//
//- 문자열 함수
//1.strlen() : 문자열의 길이
//
//int main(void) {
//	char ch[] = "abcdefghijklmnopqrstuvwxyz";
//	int len;
//
//	len = strlen(ch);
//	printf("문자열의 길이 값은 : %d \n", len);
//
//	return 0;
//}
//2. strcpy() : 문자열 복사
//
//int main(void) {
//	char ch[5];
//	strcpy(ch, "test");
//
//	printf("문자열의 내용은 : %s\n", ch);
//
//	return 0;
//}
//
//3. strcat() : 문자열과 문자열을 결합
//
//int main(void) {
//	char ch[20] = "test";
//	strcat(ch, "c-program");
//
//	printf("결합된 문자열은 : %s\n", ch);
//
//	return 0;
//}
//
//4. strcmp() : 문자열을 비교
//--->결과값은 0 또는 1그리고 그 이외의 숫자 반환
//= > 0 = True, 나머지 숫자 = False
//
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
//
//--------------------------------------------------------------------------------------------
//
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!포인터 변수 해석할 땐 뒤에서부터 해석하면 편함 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//int* p : p변수에 포인터 선언이 되어있고 정수형임
//
//--------------------------------------------------------------------------------------------
//
//- 형 변환 : casting
//
//int num = 5 // 정수 num
//float num1 = 5.6 // 실수 num1
//int* p; // 정수 포인터 p
//
//(float*)p = num1; // 정수 포인터 p 를 실수 포인터로 형 변환
//
//p = (float*)num; // 정수 num을 실수로 형 변환
//
//p = (void*)num; // 정수 num이 어느 형으로 변환될 지 모름
