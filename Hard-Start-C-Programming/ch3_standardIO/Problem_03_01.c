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

	printf("How is your old? : ");
	scanf("%d%*c", &yourAge);

	printf("What's your name? : ");
	gets(yourName);

	printf("Your name is %s, and your name is %d.\n", yourName, yourAge);

	return 0;
}