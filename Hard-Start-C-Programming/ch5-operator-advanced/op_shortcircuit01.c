#include <stdio.h>

/*
1. 논리 연산식은 무조건 왼쪽에서 오른쪽으로 진행
2. OR 논리식은 조건에 만족하면 이후 연산을 생략
3. AND 논리식은 조건에 만족하지 않으면 이후 연산을 생략
4. 혼합 논리식에서 AND는 한 덩어리로 묶고 OR의 연속으로 살핀다
	nAge >= 20 && nAge <= 30 || nHeight >= 150
	nAge = 15로 && 불만족할 경우, 두번째 식을 건너뛰고 OR을 수행한다
*/

int main(void)
{
	int nAge = 0, nHeight = 0;

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	printf("키를 입력하세요. : ");
	scanf("%d", &nHeight);

	// 모든 논리 연산은 왼쪽에서 오른쪽으로 진행
	// 만일 논리적으로 더 수행할 필요가 없다고 결정되면
	// 수행하지 않은 나머지 연산들과 상관없이 최종 판단 결정

	printf("결과 : %d (1:합격, 0:불합격\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150
	);

	return 0;
}