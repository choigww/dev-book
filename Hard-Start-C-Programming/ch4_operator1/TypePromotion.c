#include <stdio.h>

// �����ڷ� ���� ����

int main(void)
{
	char ch = 'A';

	//char�� %c�� ���
	printf("%c\n", ch); // A

	//'char + int'�� int ����
	printf("%c\n", ch + 1); // B
	printf("%c\n", 'A' + 2); // C

	// 'double + int'�� double �����̴�.
	// ���� %d �������� ��� �Ұ���!
	printf("%d\n", 5.0 + 2); // 0���� ���
	printf("%f\n", 5.0 + 2); // 7.0

	return 0;
}

/*
���°��̶�?

�����ڷ� ���� ������ ���������� ���ڰ� ���� ���,
�ӽð���� �ڷ����� ���꿡 ������ �ǿ����� �� ���� ǥ�������� �� ���� �ڷ����� �ȴ�.

������ ����� �ǿ������� �ڷ������� ǥ�������� ���� �������� ����Ǵ� ����
= ���°� (Type Promotion)
*/