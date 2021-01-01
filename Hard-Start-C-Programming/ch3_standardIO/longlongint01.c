#include <stdio.h>

/*
32비트 부호 없는 정수형으로 표현하는 가장 큰 수 = 약 43억 미만
> 통계 관련 프로그램을 다룰 때 모자랄 수 있다

C99 표준에서 지원하기 시작한 부호가 있는 64비트 정수형 = long long int
-2**63 ~ 2**63-1까지 지원한다.
*/

int main(void)
{
	//부호가 있는 64비트 정수형 변수 선언 및 정의
	long long int llData = 4294967295LL;

	//64비트 정보를 32비트 형식 문자로 출력한다.
	printf("%d\n", llData);
	printf("%u\n", llData);

	//32비트로는 표현할 수 없는 범위의 정보를 출력해본다.
	//제대로 된 결과를 기대할 수 없다
	printf("%u\n", llData + 1);
	printf("%u\n", llData + 2);
	printf("%u\n", llData + 3);

	//64비트 정보를 64비트 형식 문자(%lld)로 출력한다.
	printf("%lld\n", llData + 1);
	printf("%lld\n", llData + 2);
	printf("%lld\n", llData + 3);

	return 0;

}