#include <stdio.h>

/*
�迭���� �ִ� ���ϱ�

	nMax ���� ��� ����
	�߰��� �� ���� ���� �Ұ���
	�־��� �ڵ� ������� ���ο� �ڵ带 �߰�
	�Ϻ� �ڵ带 �߰��ϴ� �͸����� '��� ��'�� ���� ����� ����ؾ� ��
*/

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	// ���⿡ �� �ڵ带 �ۼ��մϴ�.
	while (i < 100)
	{
		if (aList[i % 5] > aList[i % 5 - 1])
		{
			aList[0] = aList[i % 5];
		}
		++i;
	}

	// �Ʒ��� �ڵ�� �������� �ʽ��ϴ�.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	putchar('\n');
	printf("MAX: %d\n", aList[0]);
	return 0;
}