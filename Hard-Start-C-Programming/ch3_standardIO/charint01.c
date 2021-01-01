#include <stdio.h>

/*
char형과 int형은 분명 다르지만 '부호가 있는 정수형'이라는 점에서 같다
%c와 %d 모두 int형을 다루는 것을 원칙으로 한다
 --- char형은 단지 크기가 작을 뿐인 int형으로 처리할 수 있다
*/

int main(void)
{
	//문자상수를 ASCII코드 문자형식으로 출력한다
	printf("%c\n", "A");
	
	//문자 'A'의 ASCII 코드값(65)에 1을 더한 값을 문자로 출력한다
	printf("%c\n", 'A' + 1);

	//문자상수를 ASCII 코드 문자형식으로 출력한다
	printf("%c\n", 'C');

	//문자 'A'의 ASCII 코드값을 10진수(%d)로 출력한다.
	printf("%d\n", 'A');

	//문자 'A'의 ASCII 코드값에 1을 더하고 10진수(%d)로 출력한다.
	printf("%d\n", 'A' + 1);

	//문자 'C'의 ASCII 코드값을 10진수(%d)로 출력한다.
	printf("%d\n", 'C');

	//10진수(정수)를 문자(ASCII)로 출력한다.
	printf("%c\n", 65);
	printf("%c\n", 65 + 1);
	printf("%c\n", 67);

	return 0;
}