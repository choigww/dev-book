#include <stdio.h>

/*
warning C4996
'get's : This function or variable may be unsafe.
Consider using gets_s instead.
--- "���� �����÷ο� ���ݿ� ���� ��༺"
*/

int main(void)
{
	char szName[32] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");

	// sizeof - �޸� ���� ������
	gets_s(szName, sizeof(szName)); // 32����Ʈ �ڷ��� ���� szName �޸� �ּҿ� ������ gets_s

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");

	return 0;
}