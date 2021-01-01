#include <stdio.h>

/*
warning C4996
'get's : This function or variable may be unsafe.
Consider using gets_s instead.
--- "버퍼 오버플로우 공격에 대한 취약성"
*/

int main(void)
{
	char szName[32] = { 0 };
	printf("이름을 입력하세요 : ");

	// sizeof - 메모리 측정 연산자
	gets_s(szName, sizeof(szName)); // 32바이트 자료형 가진 szName 메모리 주소에 정보를 gets_s

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");

	return 0;
}