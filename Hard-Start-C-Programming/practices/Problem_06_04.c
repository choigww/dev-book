#include <stdio.h>

// 단계별 분류에 따른 버스요금 계산

/*
버스 기본요금 1000원
연령별 분류에 따라 별도 할인율 계산하여 최종요금 계산
다중 if문을 사용하여 '단계별 분류 방식'으로 구현

0-3세 영유아 할인율 100%
4-13세 어린이 할인율 50%
14-19세 청소년 할인율 25%
20세 이상 성인 할인율 0%
65세 이상 어르신 할인율 100%
*/

int main(void)
{
	int nAge = 0, nPrice = 1000;
	double dBaby = 1.0, dChild = 0.5, dTeen = 0.25, dAdult = 0.0, dElder = 1.0;

	printf("몇살이고? ");
	scanf("%d", &nAge);

	if (nAge >= 65)
		nPrice *= (1.0 - dElder);
	else if (nAge >= 20)
		nPrice *= (1.0 - dAdult);
	else if (nAge >= 14)
		nPrice *= (1.0 - dTeen);
	else if (nAge >= 4)
		nPrice *= (1.0 - dChild);
	else
		nPrice *= (1.0 - dBaby);

	printf("최종요금: %d\n", (int)nPrice);
	return 0;
}