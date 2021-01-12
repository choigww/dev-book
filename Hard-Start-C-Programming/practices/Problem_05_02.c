#include <stdio.h>

/*
세 정수 중에서 가장 큰 수 구하기 (토너먼트 방식)

다음 소스코드에 새 코드를 추가하여 사용자로부터 입력받은 세 정수 중
가장 큰 수를 출력하는 프로그램을 작성

여기서 정수는 부호가 있는 32비트 정수를 의미
단, 정수를 입력받기 위해 scanf() 함수를 호출하는 것은 1회만 허용
- 1회 호출하여 세 정수를 모두 입력받아야 함

최종 결과를 출력하는 printf() 함수 코드는 수정하지 않을 것
*/

int main(void)
{
	int nMax = 0;
	int a, b, c;

	// 여기에 코드를 삽입하세요
	scanf("%d %d %d", &a, &b, &c);

	(a >= b) ? (nMax = a) : (nMax = b);
	(nMax >= c) ? nMax : (nMax = c);

	printf("MAX : %d\n", nMax);
	return 0;
}