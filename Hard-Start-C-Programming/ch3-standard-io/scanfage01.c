#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	// 사용자로부터 정수를 입력받아 nAge 변수에 저장한다.
	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);
	// scanf() 함수호출 시 사용자 입력 완료를 의미하는 개행문자(enter)가 버퍼에 남게 됨
	// 따라서 이하 코드는 정상적으로 실행되지 않는다.


	// 이름 중간에 빈 공백이 있더라도 문제없이 입력할 수 있다.
	printf("이름을 입력하세요. : ");
	gets(szName);

	// 이름과 나이를 출력한다.
	printf("%d, %s\n", nAge, szName);

	return 0;
	// 위 코드의 문제를 해결 --- scanfage02.c
}