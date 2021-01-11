#include <stdio.h>

// 나이에 따른 분류 및 요금계산

/*
버스 기본요금 1000원
아래 연령별 분류에 따라 별도 할인율 적용하여 최종요금 계산
반드시 if else 문을 두 번 중첩하여 2분할 방식으로 분류하여 구현

0~3세 영유아 할인율 100% (무료)
4~13세 어린이 할인율 50%
14~19세 청소년 할인율 25%
20세 이상 성인 할인율 0%

출력 형식
최종요금: ___원
*/

int main(void)
{
	int nAge = 0, nPrice = 1000;
	double dBaby = 1.0, dChild = 0.5, dTeenager = 0.25, dAdult = 0.0;

	printf("나이를 입력하세요: ");
	scanf("%d", &nAge);
	
	if (nAge < 13)
	{
		nPrice *= (1 - dChild);

		if (nAge < 4) nPrice *= (1 - dBaby);
	}
	else
	{
		nPrice *= (1 - dTeenager);

		if (nAge >= 20) nPrice *= (1 - dAdult);
	}

	printf("최종요금: %d\n", (int)nPrice);
	return 0;
}