#include <stdio.h>

int main(void)
{
	int nInput = 0;
	//scanf_s("%d\n", &nInput);
	scanf_s("%d", &nInput);

	/*
	getchar(), gets(), scanf() �� �Լ� ��� ����� Ű���� �Է� �ϷḦ ����
	<Enter> Ű�� �Է��Ѵ� - ���� scanf �Լ��� ���� ���ڿ��� ���๮�ڸ�
	�����ؼ��� �� �ȴ�.
	*/

	printf("%d\n", nInput);
	return 0;
}