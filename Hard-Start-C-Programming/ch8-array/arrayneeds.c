#include <stdio.h>

/*
배열
-	형식이 같은 자료 여러 개가 모여 새로운 하나를 이룬 형식
-	기존 변수와 다른 점 > 배열 이름은 변수 이름과 달리 메모리의 주소!

int형 변수 nData > 변수 자체에 대하여 nData 식별자 부여
int형 배열에 부여하는 이름 > 배열을 이루는 여러 요소를 대표하는 첫 번째 요소의 메모리 주소에 부여하는 식별자
*/

int main(void)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);

	return 0;
}