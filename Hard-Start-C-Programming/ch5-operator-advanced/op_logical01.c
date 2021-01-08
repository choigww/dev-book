#include <stdio.h>

// 논리합 OR 연산자 = ||
// | 한개만 쓰면 비트 OR 연산이므로 주의!


// 사용자가 입력한 값이 4 미만이거나(OR) 60 이상이면 1을 출력하고 그렇지 않으면 0을 출력한다
int main(void)
{
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (1:True, 0:False)\n", bResult);
	return 0;


}