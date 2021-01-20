#include <stdio.h>

//goto문 = EVIL CODE!
// 아무 제한 없이 코드 흐름을 변경
// 사용하지 않는 것이 바람직

// 전혀 관련없는 두 대상을 묶어 구조적 결함 만들 가능성
// 이는 유지보수 효율을 심각하게 떨어뜨림

int main(void)
{
	int nInput;

	//레이블 이름 설정, goto 문으로 이동할 수 있는 지점
INPUT:
	printf("Input number : ");
	scanf("%d", &nInput);

	//사용자가 입력한 값이 0-10범위인지 검사하고
	//조건에 맞지 않으면 INPUT 레이블로 흐름을 변경한다
	if (nInput < 0 || nInput < 10)
		goto INPUT;

	puts("END");
	return 0;
}