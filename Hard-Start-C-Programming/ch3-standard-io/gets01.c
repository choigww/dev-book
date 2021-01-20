#include <stdio.h>

int main(void)
{
	/***
	char *gets(char *buffer)
	인자 - buffer : 입력받을 문자열을 저장할 메모리의 주소
	반환 - (정상) 인자로 전달받은 메모리의 주소 / (에러) NULL
	***/


	// char변수 32개가 한 덩어리로 묶인 배열 선언 및 정의
	char szName[32] = { 0 };

	// 사용자로부터 이름 문자열을 입력받는다
	printf("이름을 입력하세요: ");

	// 버퍼 내용 검사 > 버퍼 비어 있음 > 사용자 입력 대기 > 사용자가 입력한 문자들을 문자 배열에 모두 저장한다
	gets(szName);

	// 배열에 저장된 이름을 화면에 출력한다
	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");
	
	return 0;

}