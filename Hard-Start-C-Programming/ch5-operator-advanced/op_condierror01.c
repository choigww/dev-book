#include <stdio.h>

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	// nInput <= 10 ? nSelect = 10 : nSelect = 20; ---- error C2106: '=' : 왼쪽 피연산자는 l-value이어야 합니다.
	// printf("%d\n", nSelect);

	nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	printf("%d\n", nSelect);

	return 0;
}

/*
8번 행에서 오류가 발생하는 이유
	많은 사람들은 단순대입 연산식을 한 덩어리로 취급해버린다 - wrong!
	8번 행 마지막 부분은 nSelect에 저장된 정보에 20을 대입하라는 연산을 수행
	즉, nSelect에 담긴 값이 100이라면 '100=20'을 실행하려 하는 것 (l-value error)

	sizeof 연산이나 주소 연산자(&) 같은 컴파일 타임 연산을 제외하고,
	연산에 참여하는 피연산자는 변수 그 자체가 아니라 그 안에 담긴 값!
*/