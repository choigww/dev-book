#include <stdio.h>

// 형변환 연산자
// 형변환(type cast) 연산자는 피연산자의 자료형을 새 자료형으로 변경하는 단항 연산자
// 기본 연산자보다 우선순위가 높다
// 무조건 [강제] 변환, 논리적 오류와 적절성 상관없이 100% 변환시키므로 주의

int main(void)
{
	int x = 5;

	printf("%d\n", 5 / 2); // int / int -> int
	printf("%f\n", 5.0 / 2); // double / int -> double
	printf("%f\n", 5 / 2.0); // int / double -> double
	printf("%f\n", (double)5 / 2); // double / int -> double
	printf("%f\n", (double)x / 2); // double / int -> double
	printf("%f\n", x / (double)2); // int / double -> double
	printf("%f\n", (double)(x / 2)); // double

	return 0;
}