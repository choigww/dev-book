#include <stdio.h>

/*
필수실습문제 04-01
두 정수를 입력받아 평균을 계산해 출력하는 프로그램

- 사용자로부터 두 정수를 입력받아 두 수의 평균을 계산 후 출력하는 예제를 작성
- 사용자 입력은 scanf() 함수로 받고, 출력은 printf() 함수 이용
- 단, 반드시 소수점 둘째 자리까지만 표시해야 하며, 변수는 2개만 선언할 것
*/

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("두 정수를 입력하세요.: ");
	scanf("%d %d", &num1, &num2);
	
	printf("AVG : %.2f\n", (num1 + num2) / 2.0);
	return 0;
}
