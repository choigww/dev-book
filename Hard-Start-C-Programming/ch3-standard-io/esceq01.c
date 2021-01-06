#include <stdio.h>

int main(void)
{
	int x = 10;

	// ���ڻ���� ȭ�鿡 ���
	putchar('B');
	// '\n'�� ���๮���̹Ƿ� ���ĺ� ���ڰ� ȭ�鿡 ���̴� ���� �ƴϴ�
	putchar('\n');

	//�ռ� ���๮�ڰ� ��µǾ����Ƿ� A�� ���� �࿡ ��µȴ�
	printf("%c\n", 'A');

	//%d��� ���� ���ڿ� ���� ���� x�� ��� ������ ����Ѵ�
	printf("X�� %d �Դϴ�.\n", x);
	return 0;

	/*
	C��� ���� ����
	%c - int(char) - character, ASCII ���ڷ� ���
	%d - int - decimal, ��ȣ�� �ִ� 10���� ���
	%o - int, octal, 8���� ���
	%u - unsigned, ��ȣ�� ���� 10������ ���
	%x, %X - // - Hexa,  16������ ���
	%e, %E - float, double - Exponent, ������ �Ҽ��� ���
	$f - double(float) - float, 10���� �Ҽ��� ���
	%g - double - ������ �Ҽ�(%e)�� 10���� �Ҽ�(%f)�� ���. �� ��µǴ� ���ڿ��� ª�� ���·� ����Ѵ�
	%p - Pointer - 16���� �ּ� ���
	%s - String - �μ��� ����Ű�� �޸��� ������ ���ڿ��� ���
	*/

	/*
	�̽������� ������ - Ư���� �ǹ̸� ���� ���ڵ�
	\a - ����� �︲
	\\ - Backslash
	\b - backsapce
	\? - ����ǥ
	\f - �μ�� ���� �� �� �ѱ� (form feed)
	\' - ���� ����ǥ, ���� ���
	\" - ū ����ǥ, ���ڿ� ���
	\n - New Line
	\r - Carriage return
	\ooo - 8����
	\xhh - 16����
	\t - tab
	\v - vertical tab
	*/

}