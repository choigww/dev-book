#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("How is your old? : ");
	//����ڰ� �Է��� ������ int �������� �ؼ��ϰ� nAge ������ �����Ѵ�
	//�׸��� & ��ȣ�� �ּ� �������̸�
	//&nAge�� nAge ������ �ּҰ��̶�� �ǹ�

	scanf_s("%d", &nAge);

	printf("Your age is %d.\n", nAge);
	return 0;
}