#include <stdio.h>

// ���̿� ���� �з� �� ��ݰ��

/*
���� �⺻��� 1000��
�Ʒ� ���ɺ� �з��� ���� ���� ������ �����Ͽ� ������� ���
�ݵ�� if else ���� �� �� ��ø�Ͽ� 2���� ������� �з��Ͽ� ����

0~3�� ������ ������ 100% (����)
4~13�� ��� ������ 50%
14~19�� û�ҳ� ������ 25%
20�� �̻� ���� ������ 0%

��� ����
�������: ___��
*/

int main(void)
{
	int nAge = 0, nPrice = 1000;
	double dBaby = 1.0, dChild = 0.5, dTeenager = 0.25, dAdult = 0.0;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &nAge);
	
	if (nAge < 13)
	{
		nPrice *= (1 - dChild);

		if (nAge < 4) nPrice *= (1 - dBaby);
	}
	else
	{
		nPrice *= (1 - dTeenager);

		if (nAge >= 20) nPrice *= (1 - dAdult);
	}

	printf("�������: %d\n", (int)nPrice);
	return 0;
}