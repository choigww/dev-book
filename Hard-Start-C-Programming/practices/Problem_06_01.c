#include <stdio.h>

// if���� �̿��� �ִ밪 ���ϱ�

/*
����ڷκ��� �� ������ �Է¹޾� ���� ���� ū ���� ����ϴ� ���α׷� �ۼ�
��, ���� ������ ������� �ʰ� �ݵ�� if�� ����Ͽ� �ۼ�
�����̹� �� �����Ͽ� ���α׷� �ϼ�
*/


int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int maxNum = 0;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if (num1 >= num2)
	{
		maxNum = num1;
	}
	else
	{
		maxNum = num2;
	}

	if (maxNum >= num3)
	{
		printf("MAX : %d\n", maxNum);
	}
	else
	{
		printf("MAX : %d\n", num3);
	}

	return 0;

}