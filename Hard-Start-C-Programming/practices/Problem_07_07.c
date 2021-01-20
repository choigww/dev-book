#include <stdio.h>

// 피라미드 출력하기

/*

				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*
*	*	*	*	*	*	*	*	*

*/

int main(void)
{
	for (int i = 1; i < 6; ++i)
	{
		int nStars = (2 * i) - 1;
		for (int j = 5 - i; j > 0; --j)
		{
			printf("\t");
		}

		for (nStars; nStars > 0; --nStars)
		{
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}