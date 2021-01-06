#include <stdio.h>

// 이형자료 간의 연산

int main(void)
{
	char ch = 'A';

	//char를 %c로 출력
	printf("%c\n", ch); // A

	//'char + int'는 int 형식
	printf("%c\n", ch + 1); // B
	printf("%c\n", 'A' + 2); // C

	// 'double + int'는 double 형식이다.
	// 따라서 %d 형식으로 출력 불가능!
	printf("%d\n", 5.0 + 2); // 0으로 출력
	printf("%f\n", 5.0 + 2); // 7.0

	return 0;
}

/*
형승격이란?

이형자료 간의 연산이 문법적으로 하자가 없는 경우,
임시결과의 자료형은 연산에 참여한 피연산자 중 정보 표현범위가 더 넓은 자료형이 된다.

연산의 결과가 피연산자의 자료형보다 표현범위가 넓은 형식으로 변경되는 현상
= 형승격 (Type Promotion)
*/