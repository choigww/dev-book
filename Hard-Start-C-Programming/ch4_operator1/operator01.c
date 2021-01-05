#include <stdio.h>

/*
***연산의 임시결과***

산술 연산이 중첩될 경우, 우선순위가 나중에 수행될 연산의 피연산자는
코드에 기술된 피연산자가 아니라 앞선 연산의 결과(임시결과)가 된다
> 매우 중대한 개념!!!

연산 임시결과가 이어지는 다른 연산에 참여하여 또 다른 임시결과가 생길 경우
기존의 임시결과는 사라진다(유실)

*/

int main(void)
{
	int nResult = 0;

	// 1: 3+4
	// 2: 7 (임시결과)
	// 3: nResult = 2
	nResult = 3 + 4 - 5;

	// 우선순위가 같은 연산의 중첩, 따라서 결합성 고려해야 함
	// +, -는 우선순위 같으며 결합성은 왼쪽 -> 오른쪽
	// 3 + 4가 먼저 수행되며 이는 임시결과에 해당됨
	// 연산의 최종 결과를 nResult 변수에 저장(단순 대입 연산) 하였음

	printf("nResult: : %d\n", nResult);
	return 0;
}
