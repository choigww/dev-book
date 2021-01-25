#include <stdio.h>

/*
요소의 값을 교환하는 방식으로 배열에서 최솟값 구하기


	최솟값이 저장되는 변수는 별도 선언하지 않고 배열 0번 요소(aList[0])에 저장
	1~4번 요소를 각각 비교하여 작은 값을 무조건 0번 요소에 대입하는 것이 아니라 교환
	단순 대입으로 인해 배열 요소 중 일부 값이 유실되는 일이 없어야 함
*/



int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTemp = 0;

	// 여기에 들어갈 코드를 작성합니다.
	while (i < 3)
	{
		if (aList[0] > aList[i % 5])
		{

			nTemp = aList[i % 5];
			aList[i % 5] = aList[0];
			aList[0] = nTemp;

		}
		++i;
	}

	// 아래의 코드는 수정하지 않습니다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);

	putchar('\n');
	printf("MIN: %d\n", aList[0]);
	return 0;
}