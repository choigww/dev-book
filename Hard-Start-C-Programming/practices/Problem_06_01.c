#include <stdio.h>

// if문을 이용한 최대값 구하기

/*
사용자로부터 세 정수를 입력받아 그중 가장 큰 수를 출력하는 프로그램 작성
단, 삼항 연산자 사용하지 않고 반드시 if문 사용하여 작성
서바이벌 논리 적용하여 프로그램 완성
*/


int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int maxNum = 0;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if (num1 >= num2)
	{
		maxNum = num1;
	}
	else
	{
		maxNum = num2;
	}

	if (maxNum >= num3)
	{
		printf("MAX : %d\n", maxNum);
	}
	else
	{
		printf("MAX : %d\n", num3);
	}

	return 0;

}