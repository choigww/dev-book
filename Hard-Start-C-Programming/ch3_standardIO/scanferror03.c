#include <stdio.h>

int main(void)
{
	int nInput = 0;

	// scanf �Լ��� ����� ��µ��� ����
	// ����ڰ� scanf �Է� ���Ŀ� �Ȱ��� ���缭 �Է��ؾ߸� ���� �۵�
	scanf_s("Input : %d", &nInput);
	printf("Input : %d", nInput);
}