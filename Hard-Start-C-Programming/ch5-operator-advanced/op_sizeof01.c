#include <stdio.h>

/*
sizeof 연산자

sizeof 연산자는 피연산자의 자료형에 대한 연산
sizeof(5) = sizeof(int) = 4

피연산자로 기술한 연산식 자체를 아예 실행하지 않음
전위 또는 후위에 ++, --를 아무리 붙여도 소용없음
--- 어차피 값이 중요한 게 아니라 자료형이 중요한 것이므로
--- sizeof 연산자는 프로그램 빌드 후 CPU가 실행하는 런타임 연산자가 아니라 컴파일러가 수행하는 연산
--- 따라서 아무리 많이 사용하더라도 프로그램이 느려질 일은 없음


*/

int main(void)
{
	int nData = 10;

	// sizeof 연산자의 피연산자는 자료형이다.
	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

	// 연산식 결괏값의 자료형의 크기를 측정한다.
	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));
	printf("%d\n", nData);
	return 0;
}