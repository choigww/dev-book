#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("How is your old? : ");
	//사용자가 입력한 정보를 int 형식으로 해석하고 nAge 변수에 저장한다
	//그리고 & 기호는 주소 연산자이며
	//&nAge는 nAge 변수의 주소값이라는 의미

	scanf_s("%d", &nAge);

	printf("Your age is %d.\n", nAge);
	return 0;
}