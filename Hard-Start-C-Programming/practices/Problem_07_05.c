#include <stdio.h>

// 첫 번째 직각 삼각형 출력하기

/*

출력 예
*
*	*
*	*	*
*	*	*	*
*	*	*	*	*

*/


int main(void)
{

	int i = 1;
	while (i < 6)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*\t");
		}
		printf("\n");
		++i;
	}
	return 0;

}