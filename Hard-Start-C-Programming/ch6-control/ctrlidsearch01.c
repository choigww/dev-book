#include <stdio.h>

/*
변수의 통용범위 = 그 변수를 선언한 블록 스코프로 제한
> 중첩된 내부 스코프는 외부 스코프와 구별
> 따라서 외부 스코프와 이름이 동일한 변수를 선언할 수도 있음
> 가장 최근에 형성된 스코프 우선, 스코프 닫히면 그 내부 선언 변수는 사라짐
*/

int main(void)
{
	int nInput = 0; //1번
	//1번 nInput에 저장
	scanf("%d", &nInput);

	if (nInput > 10)
	{
		int nInput = 20; //2번
		// 2번 nInput 출력
		printf("%d\n", nInput);

		if (nInput < 20)
		{
			int nInput = 30; //3번
			//3번 nInput을 출력
			// 가장 최근 선언된 것이 우선한다
			printf("%d\n", nInput);

			// 3번 nInput은 여기서 소멸한다
		}
		// 2번 nInput은 여기서 소멸한다
	}

	//1번 nInput을 출력
	printf("%d\n", nInput);

	//1번 nInput은 여기서 소멸한다
	return 0;
}