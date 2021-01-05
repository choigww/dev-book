#include <stdio.h>

// 누적 연산 구현

int main(void)
{
	int x = 0, y = 0;


	// 대입 연산자 또는 단항 연산자는 결합성이 오른쪽 -> 왼쪽
	// 따라서 아래 코드에서 가장 먼저 수행하는 연산은 y = 10
	x = y = 10;
	printf("%d, %d\n", x, y);

	return 0;
}