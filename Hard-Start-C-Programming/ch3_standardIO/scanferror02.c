#include <stdio.h>

int main(void)
{
	int nInput = 0;
	//scanf_s("%d\n", &nInput);
	scanf_s("%d", &nInput);

	/*
	getchar(), gets(), scanf() 세 함수 모두 사용자 키보드 입력 완료를 위해
	<Enter> 키를 입력한다 - 따라서 scanf 함수의 형식 문자열에 개행문자를
	포함해서는 안 된다.
	*/

	printf("%d\n", nInput);
	return 0;
}