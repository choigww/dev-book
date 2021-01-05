#include <stdio.h>

// 세 정수의 누적 및 출력

/*
다음 코드는 사용자로부터 세 정수를 입력받아 총합을 출력하는 프로그램 일부입니다.
이 코드에 새로운 코드를 추가하여 기능을 완성합니다.
단, 새로운 변수를 추가할 수 없으며, 마지막에 총합을 출력하는 printf() 함수 코드는 수정할 수 없습니다.
그러나 필요하다면 nInput, nTotal 변수는 원하는 값으로 초기화하도록 수정하는 것은 괜찮습니다.
그리고 반드시 '+=' 복합 대입 연산자를 사용하여 구현합니다.
*/


int main(void)
{
	int nInput, nTotal;

	// 여기에 들어갈 코드를 작성하세요.
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &nTotal);

	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("세번째 정수를 입력하세요: ");
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}