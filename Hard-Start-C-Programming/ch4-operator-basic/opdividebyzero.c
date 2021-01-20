#include <stdio.h>

int main(void)
{
	int nInput = 0;
	printf("정수를 입력하세요.: ");

	// 사용자로부터 정수를 입력받는다
	scanf("%d", &nInput);

	// 만일 사용자가 0을 입력한다면 10을 0으로 나눠야 한다.
	// 따라서 사용자 0 입력 시 프로그램 작동이 정지!
	printf("%d\n", 10 / nInput);
	return 0;
}