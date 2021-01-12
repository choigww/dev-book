#include <stdio.h>

// (조건식) ? A : B

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	// 조건식이 참이면 nSelect = 10
	// 거짓이면 nSelect = 20
	nSelect = nInput <= 10 ? 10 : 20;
	printf("%d\n", nSelect);
	return 0;
}