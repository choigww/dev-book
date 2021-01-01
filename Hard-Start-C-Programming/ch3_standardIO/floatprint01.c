#include <stdio.h>

/*
float형 실수 상수는 끝에 'F'가 붙는다.
실수 상수 끝에 'F'표기 가 없다면 이는 double형 실수상수
(sizeof) -- 피연산자와 자료형이 무엇인지 판별 후 바이트 단위 크기 계산
*/

int main(void)
{
	//실수 자료 형식의 메모리 크기(바이트 단위) 출력
	printf("%d\n", sizeof(123.456F));
	printf("%d\n", sizeof(123.456));

	//float 형식을 실수 형식으로 출력
	printf("%f\n", 123.456F); // float
	
	//double 형식을 실수 형식으로 출력
	printf("%f\n", 123.456); //double
	printf("%lf\n", 123.456); //long double

	return 0;

/*
printf 함수에서는 플로트와 더블을 구분하지 않고 %f로 통일
그러나 scanf() 함수에서는 명확히 구분해야 한다

16번 행과 19번 행은 같은 값을 출력했지만 0.000001 오차 발생
---이는 부동 소수점 오차 때문에 발생
---실수를 출력하는 문법 형식 외에도 부동소수점 오차 문제를 이해해야 함
*/
}