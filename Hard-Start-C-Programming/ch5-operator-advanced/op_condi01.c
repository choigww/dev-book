#include <stdio.h>

// (���ǽ�) ? A : B

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	// ���ǽ��� ���̸� nSelect = 10
	// �����̸� nSelect = 20
	nSelect = nInput <= 10 ? 10 : 20;
	printf("%d\n", nSelect);
	return 0;
}