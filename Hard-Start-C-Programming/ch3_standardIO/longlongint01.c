#include <stdio.h>

/*
32��Ʈ ��ȣ ���� ���������� ǥ���ϴ� ���� ū �� = �� 43�� �̸�
> ��� ���� ���α׷��� �ٷ� �� ���ڶ� �� �ִ�

C99 ǥ�ؿ��� �����ϱ� ������ ��ȣ�� �ִ� 64��Ʈ ������ = long long int
-2**63 ~ 2**63-1���� �����Ѵ�.
*/

int main(void)
{
	//��ȣ�� �ִ� 64��Ʈ ������ ���� ���� �� ����
	long long int llData = 4294967295LL;

	//64��Ʈ ������ 32��Ʈ ���� ���ڷ� ����Ѵ�.
	printf("%d\n", llData);
	printf("%u\n", llData);

	//32��Ʈ�δ� ǥ���� �� ���� ������ ������ ����غ���.
	//����� �� ����� ����� �� ����
	printf("%u\n", llData + 1);
	printf("%u\n", llData + 2);
	printf("%u\n", llData + 3);

	//64��Ʈ ������ 64��Ʈ ���� ����(%lld)�� ����Ѵ�.
	printf("%lld\n", llData + 1);
	printf("%lld\n", llData + 2);
	printf("%lld\n", llData + 3);

	return 0;

}