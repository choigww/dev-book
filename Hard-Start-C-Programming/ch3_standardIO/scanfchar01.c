#include <stdio.h>

int main(void)
{
	char ch = 0;
	scanf_s("%c", &ch, sizeof(ch));
	printf("�Է��� ���ڴ� %c�Դϴ�.\n", ch);
	return 0;
}