#include <stdio.h>

int main(void)
{
	//���ڿ��� �����ϱ� ���� �迭 ���� �� ����
	char szBuffer[32] = { 0 };

	//����ڰ� �Է��� ���ڿ��� �迭�� �����ϰ� ���
	scanf("%s", szBuffer);
	printf("%s\n", szBuffer);
	return 0;

	// Test string �Է� ��,
	// scanf �Լ��� "Test string"�� "Test"�� "string" �� ���ڿ� �Է����� �ν�
	// �׷��� ù ��° �Է¿� �ش��ϴ� "Test"�� szBuffer�� �����ϰ�
	// �� ��° "string"�� �״�� ���ۿ� ��������.
	// %s ���ĸ����δ� ���鹮�ڸ� ������ ���ڿ��� �Է¹��� �� ����!
}