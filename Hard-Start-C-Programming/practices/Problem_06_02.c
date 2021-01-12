#include <stdio.h>

// 버스요금 계산 프로그램

/*
버스 기본요금 = 1000원
20세 미만 > 25% 요금 할인
20세 이상 성인 > 할인 없음

입력 / 출력
17 / 최종요금: 750원
21 / 최종요금: 1000원
*/

int main(void)
{
	int nAge = 0;
	int nPrice = 0;
	scanf("%d", &nAge);

	if (nAge >= 20)
	{
		nPrice = 1000;
		printf("최종요금: %d\n", nPrice);
	}
	else
	{
		nPrice = (1000 * 0.75);
		printf("최종요금: %d\n", nPrice);
	}

	return 0;
}