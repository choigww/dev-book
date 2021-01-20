#include <stdio.h>

// 1에서 10까지의 총합 구하기
// while문 사용
// 반복대상 누적

int main(void)
{
	int i = 1, result = 0;
	
	while (i < 11)
	{
		result += i;
		++i;
	}

	printf("%d\n", result);
}