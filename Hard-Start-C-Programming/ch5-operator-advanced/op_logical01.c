#include <stdio.h>

// ���� OR ������ = ||
// | �Ѱ��� ���� ��Ʈ OR �����̹Ƿ� ����!


// ����ڰ� �Է��� ���� 4 �̸��̰ų�(OR) 60 �̻��̸� 1�� ����ϰ� �׷��� ������ 0�� ����Ѵ�
int main(void)
{
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (1:True, 0:False)\n", bResult);
	return 0;


}