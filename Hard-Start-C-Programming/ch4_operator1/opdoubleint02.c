#include <stdio.h>

// 정수를 정수로 나눈 결과 = 정수
// 절대 !! 0으로 나눌 수 없음

int main(void)
{
	int x = 10;
	printf("%d\n", x * 10); // 10 출력
	// int * double -> %d (출력 불가)
	printf("%d\n", x * 10.0); // 10.0을 정수로 - 출력X

	// int / int는 int 형식이다. 실수 형식이 아니라는 점에 주의!
	// 단, 소수점 이하는 절사된다.
	printf("%d\n", x / 10); // 1 출력

	// int / int는 int 형식이므로 %f로 출력할 수 없다.
	printf("%d\n", 5 / 2); // 2 출력

	// 소수점 이하가 절사되므로 사실상 정수 2를 %f로 출력하는 것이다.
	printf("%f\n", 5 / 2); // 0.000000 출력

	// double / int는 double 형식이다 (형승격)
	printf("%f\n", 5.0 / 2); // 2.500000 출력

	return 0;
}