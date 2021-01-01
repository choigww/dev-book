#include <stdio.h>

int main(void)
{
	int nInput = 0;

	// scanf 함수가 제대로 출력되지 않음
	// 사용자가 scanf 입력 형식에 똑같이 맞춰서 입력해야만 정상 작동
	scanf_s("Input : %d", &nInput);
	printf("Input : %d", nInput);
}