#include <stdio.h>

int main(void)
{
	int nIndex = 0;
	//값이 음수가 돼야 반복이 멈춘다
	while (nIndex >= 0)
	{
		//1만큼 증가시켜도 여전히 0보다 큰 양수다
		++nIndex;
	}

	//int형 양수 최대 크기를 넘어서면 가장 큰 음수가 되고
	//조건을 만족하지 못하게 된다
	printf("%d\n", nIndex);

	// nInput이 2,147,483,648번 증가하면 부호가 있는 32비트 정수 표현을 넘겨 갑자기 음수가 된다
	// 음수는 0 이상이 아니므로 반복문을 종료시킨다
	return 0;
}