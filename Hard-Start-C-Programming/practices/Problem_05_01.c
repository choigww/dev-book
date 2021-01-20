#include <stdio.h>

/*
합격자와 불합격자를 분류하는 방법

사용자로부터 cm 단위 키를 입력받아 키가 150cm 이상이면 '합격' 출력
그렇지 않으면 '불합격' 출력
반드시 삼항 연산자 사용
	문자열도 삼항 연산자의 피연산자가 될 수 있음
*/

int main(void)
{
	int nHeight = 0;
	char ans[32] = { 0 };

	scanf("%d", &nHeight);

	nHeight >= 150 ? printf("합격\n") : printf("불합격\n");
	return 0;
}