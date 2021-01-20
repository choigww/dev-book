#include <stdio.h>

// 구구단에서 한 단만 출력하기

/*
사용자로부터 2~9 사이 정수를 입력받아 해당 정수의 구구단 출력
사용자가 입력한 값이 2보다 작거나 9보다 크면 'ERROR' 출력
*/

int main(void)
{
	int nInput = 0;
	scanf("%d", &nInput);

	if ((nInput > 9) | (nInput < 0))
		printf("ERROR\n");
	else
	{
		int i = 1;
		while (i < 10)
		{
			printf("%d * %d = %d\n", nInput, i, nInput * i);
			++i;
		}
	}
	return 0;
}