#include <stdio.h>
#include <conio.h>

int main(void)
{
	// �ڷ����� char �����̰� �̸��� ch�� ������ ���� �� ����
	char ch = 0;

	// getchar() �Լ��� ��ȯ�� ���� ch ����� ����
	ch = getchar();

	//����ch�� ��� ������ ȭ�鿡 ���
	putchar(ch);

	// �빮�� Z�� ȭ�鿡 ���
	printf("Z");

	//0�� ��ȯ�ϰ� main() �Լ� ��ȯ - ���α׷� ����
	return 0;
}