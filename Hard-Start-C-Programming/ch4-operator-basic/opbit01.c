#include <stdio.h>

int main(void)
{
	int nData = 0x11223344;

	// nData에 담긴 정보와 0x00FFFF00을 비트 AND 연산 결과를 %08X 형식으로 출력 > 00223300
	printf("%08X\n", nData & 0x00FFFF00); 

	// nData에 담긴 정보와 0x2211FFFFFF를 비트 OR 연산결과를 출력한다. > 3333FFFF
	printf("%08X\n", nData | 0x2211FFFF);

	// nData에 담긴 정보와 0x2211FFFFFF를 비트 XOR 연산결과를 출력한다. > 3333CCBB
	printf("%08X\n", nData ^ 0x2211FFFF);

	// nData에 담긴 정보에 대해 1의 보수를 취하고 결과를 출력한다. > EEDDCCBB
	printf("%08X\n", ~nData);

	// nData에 담긴 정보를 오른쪽으로 8비트 시프트 연산결과를 보여준다. > 00112233
	printf("%08X\n", nData >> 8);

	// nData에 담긴 정보를 왼쪽으로 16비트 시프트 연산결과를 보여준다. > 33440000
	printf("%08X\n", nData << 16);

	return 0;
}