#include <stdio.h>

// ����ڰ� �Է��� ���ڸ�ŭ * ����ϱ�

/*
����ڷκ��� 1~9 ���� ������ �Է¹޾� �� ����ŭ '*'�� ����ϴ� ���α׷��� �ۼ�
'*'�� ��� �� �࿡ ���̾� ����ϸ�, ���� ����� �Է��� ������ ����ٸ� 1�̳� 9�� ���� ����
������ ������ŭ '*' ����� �� �ݵ�� ������ ��
*/

int main(void)
{
	int nCount = 0;
	int nStar = 0;
	scanf("%d", &nStar);

	if (nStar > 10)
		nStar = 10;
	else
		if (nStar < 0)
			nStar = 0;

	while (nCount != nStar)
	{
		printf("*");
		nCount++;
	}
	printf("\n");

	return 0;
}