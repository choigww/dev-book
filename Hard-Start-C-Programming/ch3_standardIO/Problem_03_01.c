#include <stdio.h>

/*
나이와 이름을 입력받아 한 행으로 출력하는 프로그램

사용자로부터 이름과 나이를 입력받아 한 번에 출력하는 프로그램을 작성합니다.
이름을 입력받을 때는 gets() 함수를 사용하고 나이는 scanf() 함수로 입력받아야 하며,
두 정보를 printf() 함수로 한꺼번에 출력합니다.

입력 > 사용자 이름(gets()), 사용자 나이(scanf())
출력 > printf()
*/

int main(void)
{
	char yourName[32] = { 0 };
	int yourAge = 0;

	printf("What's your name? : ");
	gets(yourName);

	printf("How is your old? : ");
	scanf_s("%d", &yourAge);

	printf("Your age is %d, and your name is ", yourAge);
	puts(yourName);

	return 0;
}