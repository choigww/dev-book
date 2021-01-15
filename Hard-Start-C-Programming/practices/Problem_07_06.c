#include <stdio.h>

// 두 번째 직각 삼각형 출력하기

/*

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
		for (int j = 0; j < (5-i); ++j)
		{
			printf("\t");
		}
		for (int k = 0; k < i; ++k)
		{
			printf("*\t");
		}

		printf("\n");
		++i;
	}
	return 0;

}