#include <stdio.h>

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	// nInput <= 10 ? nSelect = 10 : nSelect = 20; ---- error C2106: '=' : ���� �ǿ����ڴ� l-value�̾�� �մϴ�.
	// printf("%d\n", nSelect);

	nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	printf("%d\n", nSelect);

	return 0;
}

/*
8�� �࿡�� ������ �߻��ϴ� ����
	���� ������� �ܼ����� ������� �� ����� ����ع����� - wrong!
	8�� �� ������ �κ��� nSelect�� ����� ������ 20�� �����϶�� ������ ����
	��, nSelect�� ��� ���� 100�̶�� '100=20'�� �����Ϸ� �ϴ� �� (l-value error)

	sizeof �����̳� �ּ� ������(&) ���� ������ Ÿ�� ������ �����ϰ�,
	���꿡 �����ϴ� �ǿ����ڴ� ���� �� ��ü�� �ƴ϶� �� �ȿ� ��� ��!
*/