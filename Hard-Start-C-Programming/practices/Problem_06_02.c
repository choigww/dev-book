#include <stdio.h>

// ������� ��� ���α׷�

/*
���� �⺻��� = 1000��
20�� �̸� > 25% ��� ����
20�� �̻� ���� > ���� ����

�Է� / ���
17 / �������: 750��
21 / �������: 1000��
*/

int main(void)
{
	int nAge = 0;
	int nPrice = 0;
	scanf("%d", &nAge);

	if (nAge >= 20)
	{
		nPrice = 1000;
		printf("�������: %d\n", nPrice);
	}
	else
	{
		nPrice = (1000 * 0.75);
		printf("�������: %d\n", nPrice);
	}

	return 0;
}