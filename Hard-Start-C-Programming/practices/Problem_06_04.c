#include <stdio.h>

// �ܰ躰 �з��� ���� ������� ���

/*
���� �⺻��� 1000��
���ɺ� �з��� ���� ���� ������ ����Ͽ� ������� ���
���� if���� ����Ͽ� '�ܰ躰 �з� ���'���� ����

0-3�� ������ ������ 100%
4-13�� ��� ������ 50%
14-19�� û�ҳ� ������ 25%
20�� �̻� ���� ������ 0%
65�� �̻� ��� ������ 100%
*/

int main(void)
{
	int nAge = 0, nPrice = 1000;
	double dBaby = 1.0, dChild = 0.5, dTeen = 0.25, dAdult = 0.0, dElder = 1.0;

	printf("����̰�? ");
	scanf("%d", &nAge);

	if (nAge >= 65)
		nPrice *= (1.0 - dElder);
	else if (nAge >= 20)
		nPrice *= (1.0 - dAdult);
	else if (nAge >= 14)
		nPrice *= (1.0 - dTeen);
	else if (nAge >= 4)
		nPrice *= (1.0 - dChild);
	else
		nPrice *= (1.0 - dBaby);

	printf("�������: %d\n", (int)nPrice);
	return 0;
}