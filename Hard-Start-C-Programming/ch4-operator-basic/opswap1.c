#include <stdio.h>

// 두 변수의 값 교환

int main(void)
{
	// nTmp는 '교환'을 위해 필요한 변수
	int x = 10, y = 20, nTmp = 0;
	printf("Before: %d, %d\n", x, y);

	// 두 변수 x와 y에 저장된 값을 서로 교환한다
	nTmp = x;
	x = y;
	y = nTmp;

	// 교환 완료 확인
	printf("After: %d, %d\n", x, y);
	return 0;
}
