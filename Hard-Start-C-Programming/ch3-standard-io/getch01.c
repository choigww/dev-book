#include <stdio.h>
// _getch() �Լ��� ����ϱ� ���� ��� ���� ����
#include <conio.h>

int main(void)
{
	char ch = 0;
	printf("�ƹ� Ű�� ������ �������� �Ѿ�ϴ�.\n");
	ch = _getch();

	printf("�Է��� Ű�� ");
	putchar(ch);
	printf("�Դϴ�.\n");
	return 0;
}
