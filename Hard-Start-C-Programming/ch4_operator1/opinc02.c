#include <stdio.h>

int main(void)
{
	int x = 0, nResult = 0;

	// x�� ���� 1 ������Ų �� ���
	++x;
	printf("%d\n", x);

	// x�� ���¤� 1 ������Ų �� ���
	x++;
	printf("%d\n", x);
	
	// x�� ���� 1 ������Ų �� �ܼ� ���� (������ ǥ��)
	nResult = ++x;
	printf("%d, %d\n", nResult, x);

	// x�� ���� nResult�� ������ �� x�� 1 ���ҽ�Ų��(������ ǥ��)
	nResult = x--;
	printf("%d, %d", nResult, x);
	return 0;
}