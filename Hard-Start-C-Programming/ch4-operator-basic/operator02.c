#include <stdio.h>

// 연산 도중 발생하는 임시결과가 꼭 필요하다면
// 변수(메모리)에 저장해 두었다가 활용해야만 함

int main(void)
{
	int nResult = 0;

	//임시결과 7을 변수에 담음
	nResult = 3 + 4;
	//변수에 담아둔 정보를 다시 꺼내 연산
	printf("nResult : %d\n", nResult - 5);

	return 0;
}