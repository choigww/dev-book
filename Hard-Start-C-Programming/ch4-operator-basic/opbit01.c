#include <stdio.h>

int main(void)
{
	int nData = 0x11223344;

	// nData�� ��� ������ 0x00FFFF00�� ��Ʈ AND ���� ����� %08X �������� ��� > 00223300
	printf("%08X\n", nData & 0x00FFFF00); 

	// nData�� ��� ������ 0x2211FFFFFF�� ��Ʈ OR �������� ����Ѵ�. > 3333FFFF
	printf("%08X\n", nData | 0x2211FFFF);

	// nData�� ��� ������ 0x2211FFFFFF�� ��Ʈ XOR �������� ����Ѵ�. > 3333CCBB
	printf("%08X\n", nData ^ 0x2211FFFF);

	// nData�� ��� ������ ���� 1�� ������ ���ϰ� ����� ����Ѵ�. > EEDDCCBB
	printf("%08X\n", ~nData);

	// nData�� ��� ������ ���������� 8��Ʈ ����Ʈ �������� �����ش�. > 00112233
	printf("%08X\n", nData >> 8);

	// nData�� ��� ������ �������� 16��Ʈ ����Ʈ �������� �����ش�. > 33440000
	printf("%08X\n", nData << 16);

	return 0;
}