#include <stdio.h>

// �� ������ ���� �� ���

/*
���� �ڵ�� ����ڷκ��� �� ������ �Է¹޾� ������ ����ϴ� ���α׷� �Ϻ��Դϴ�.
�� �ڵ忡 ���ο� �ڵ带 �߰��Ͽ� ����� �ϼ��մϴ�.
��, ���ο� ������ �߰��� �� ������, �������� ������ ����ϴ� printf() �Լ� �ڵ�� ������ �� �����ϴ�.
�׷��� �ʿ��ϴٸ� nInput, nTotal ������ ���ϴ� ������ �ʱ�ȭ�ϵ��� �����ϴ� ���� �������ϴ�.
�׸��� �ݵ�� '+=' ���� ���� �����ڸ� ����Ͽ� �����մϴ�.
*/


int main(void)
{
	int nInput, nTotal;

	// ���⿡ �� �ڵ带 �ۼ��ϼ���.
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &nTotal);

	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("����° ������ �Է��ϼ���: ");
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}