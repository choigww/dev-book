#include <stdio.h>

// 1���� 10������ ���� ���ϱ�
// while�� ���
// �ݺ���� ����

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