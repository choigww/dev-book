#include <stdio.h>

int main(void)
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int aListNew[5] = { 0 };
	int i = 0;

	//배열 전체 요소를 동시에 대입하려 시도한다
	//error C2106: '=': 왼쪽 피연산자는 l-value이어야 합니다.
	aListNew = aList;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", aListNew[i]);
	}
	putchar('\n');
	return 0;
}