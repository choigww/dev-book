#include <stdio.h>

int main(void)
{
	char ch = 0;
	scanf_s("%c", &ch, sizeof(ch));
	printf("입력한 문자는 %c입니다.\n", ch);
	return 0;
}