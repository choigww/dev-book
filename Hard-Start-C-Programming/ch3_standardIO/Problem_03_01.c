#include <stdio.h>

/*
���̿� �̸��� �Է¹޾� �� ������ ����ϴ� ���α׷�

����ڷκ��� �̸��� ���̸� �Է¹޾� �� ���� ����ϴ� ���α׷��� �ۼ��մϴ�.
�̸��� �Է¹��� ���� gets() �Լ��� ����ϰ� ���̴� scanf() �Լ��� �Է¹޾ƾ� �ϸ�,
�� ������ printf() �Լ��� �Ѳ����� ����մϴ�.

�Է� > ����� �̸�(gets()), ����� ����(scanf())
��� > printf()
*/

int main(void)
{
	char yourName[32] = { 0 };
	int yourAge = 0;

	printf("What's your name? : ");
	gets(yourName);

	printf("How is your old? : ");
	scanf_s("%d", &yourAge);

	printf("Your age is %d, and your name is ", yourAge);
	puts(yourName);

	return 0;
}