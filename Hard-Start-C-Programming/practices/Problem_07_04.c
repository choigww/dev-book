#include <stdio.h>

// �����ܿ��� �� �ܸ� ����ϱ�

/*
����ڷκ��� 2~9 ���� ������ �Է¹޾� �ش� ������ ������ ���
����ڰ� �Է��� ���� 2���� �۰ų� 9���� ũ�� 'ERROR' ���
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