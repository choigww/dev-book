#include <stdio.h>

int main(void)
{
	char ch = 0;

	do
	{
		// ������ ���߿� ���ϹǷ�
		// �ϴ� �� ���� ������ ����
		ch = getchar();
		putchar(ch);


	// ���ǽ� ������ ���� ;�� �ִٴ� ���� �����Ѵ�.
	} while (ch != '\n');

	return 0;
}