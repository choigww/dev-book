#include <stdio.h>

int main(void)
{
	int x = 10;

	// 문자상수를 화면에 출력
	putchar('B');
	// '\n'은 개행문자이므로 알파벳 문자가 화면에 보이는 것이 아니다
	putchar('\n');

	//앞서 개행문자가 출력되었으므로 A는 다음 행에 출력된다
	printf("%c\n", 'A');

	//%d라는 형식 문자에 맞춰 변수 x에 담긴 정보를 출력한다
	printf("X는 %d 입니다.\n", x);
	return 0;

	/*
	C언어 형식 문자
	%c - int(char) - character, ASCII 문자로 출력
	%d - int - decimal, 부호가 있는 10진수 출력
	%o - int, octal, 8진수 출력
	%u - unsigned, 부호가 없는 10진수로 출력
	%x, %X - // - Hexa,  16진수로 출력
	%e, %E - float, double - Exponent, 지수형 소수로 출력
	$f - double(float) - float, 10진형 소수로 출력
	%g - double - 지수형 소수(%e)나 10진형 소수(%f)로 출력. 단 출력되는 문자열이 짧은 형태로 출력한다
	%p - Pointer - 16진수 주소 출력
	%s - String - 인수가 가리키는 메모리의 내용을 문자열로 출력
	*/

	/*
	이스케이프 시퀀스 - 특별한 의미를 지닌 문자들
	\a - 경고음 울림
	\\ - Backslash
	\b - backsapce
	\? - 물음표
	\f - 인쇄시 종이 한 장 넘김 (form feed)
	\' - 작은 따옴표, 문자 상수
	\" - 큰 따옴표, 문자열 상수
	\n - New Line
	\r - Carriage return
	\ooo - 8진수
	\xhh - 16진수
	\t - tab
	\v - vertical tab
	*/

}