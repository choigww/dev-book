#include <stdio.h>

// ù ��° ���� �ﰢ�� ����ϱ�

/*

��� ��
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