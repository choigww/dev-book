#include <stdio.h>

/*
구체적인 코드로 부동 소수점 오차 확인하기
>> 0.000002 오차 발생
>> 실수 표현 시, 소수점 이하 15번째 자리까지 신뢰가능한 double 형을 사용할 것

*/

int main(void)
{
	printf("%f\n",
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F
	);

	return 0;
}