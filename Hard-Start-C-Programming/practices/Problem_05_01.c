#include <stdio.h>

/*
�հ��ڿ� ���հ��ڸ� �з��ϴ� ���

����ڷκ��� cm ���� Ű�� �Է¹޾� Ű�� 150cm �̻��̸� '�հ�' ���
�׷��� ������ '���հ�' ���
�ݵ�� ���� ������ ���
	���ڿ��� ���� �������� �ǿ����ڰ� �� �� ����
*/

int main(void)
{
	int nHeight = 0;
	char ans[32] = { 0 };

	scanf("%d", &nHeight);

	nHeight >= 150 ? printf("�հ�\n") : printf("���հ�\n");
	return 0;
}