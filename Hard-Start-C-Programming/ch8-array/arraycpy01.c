#include <Stdio.h>

int main(void)
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int aListNew[5] = { 0 };
	int i = 0;

	//aListNew = aList;�� ���� �ڵ�� �Ұ����ϴ�
	//�̿� ���� �ݺ������� �ϳ��� �����ؾ� �Ѵ� (Ȥ�� �޸� ����)
	for (i = 0; i < 5; ++i)
		aListNew[i] = aList[i];

	for (i = 0; i < 5; ++i)
		printf("%d\n", aListNew[i]);

	putchar('\n');
	return 0;
}