#include <stdio.h>

int main(void)
{
	char ch = 0;

	//�� ���ڸ� �Է¹޾� ch�� ������ �� �̸� '\n'�� ��
	while ((ch = getchar()) != '\n')
	{
		//������ �´� ���
		putchar(ch);
	}

	// '\n'�� ������ ������ �������� ���� �ݺ����� ����
	return 0;
}