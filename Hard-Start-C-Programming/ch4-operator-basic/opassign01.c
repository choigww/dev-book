#include <stdio.h>

// 단순 대입 연산자
// 복사와 덮어쓰기 기능을 결합한 가장 기보적인 대입 연산자
// 오로지 대입(복사)만 수행
// 기존 정보는 유실

int main(void)
{
	int x = 0, nInput = 0;
	scanf("%d", &nInput);

	// nInput 변수에 저장된 사용자가 입력한 값을 x에 복사
	// x에 들어있던 값은 Overwrite되고 사라짐

	x = nInput;
	printf("%d\n", x);
	return 0;
}