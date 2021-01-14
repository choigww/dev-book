#include <stdio.h>

// 사용자가 입력한 숫자만큼 * 출력하기

/*
사용자로부터 1~9 범위 정수를 입력받아 그 수만큼 '*'를 출력하는 프로그램을 작성
'*'는 모두 한 행에 연이어 출력하며, 최초 사용자 입력이 범위를 벗어났다면 1이나 9로 강제 보정
정해진 개수만큼 '*' 출력한 후 반드시 개행할 것
*/

int main(void)
{
	int nCount = 0;
	int nStar = 0;
	scanf("%d", &nStar);

	if (nStar > 10)
		nStar = 10;
	else
		if (nStar < 0)
			nStar = 0;

	while (nCount != nStar)
	{
		printf("*");
		nCount++;
	}
	printf("\n");

	return 0;
}