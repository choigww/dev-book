#include <stdio.h>

/*
배열에서 최댓값 구하기

	nMax 변수 사용 금지
	추가로 새 변수 선언 불가능
	주어진 코드 기반으로 새로운 코드를 추가
	일부 코드를 추가하는 것만으로 '출력 예'와 같은 결과를 출력해야 함
*/

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	// 여기에 들어갈 코드를 작성합니다.
	while (i < 100)
	{
		if (aList[i % 5] > aList[i % 5 - 1])
		{
			aList[0] = aList[i % 5];
		}
		++i;
	}

	// 아래의 코드는 수정하지 않습니다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	putchar('\n');
	printf("MAX: %d\n", aList[0]);
	return 0;
}