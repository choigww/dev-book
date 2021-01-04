#include <stdio.h>


int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	// 사용자로부터 나이를 입력받는다.
	// 이 때, 입력 완료를 의미하는 <enter> 키(\n) 입력이 버퍼에 남는다.
	printf("나이를 입력하세요 : ");

	// 숫자1개, 문자1개를 버퍼에 읽어온 뒤 문자는 버린다
	// 매우 바람직한 솔루션!
	scanf_s("%d%*c", &nAge); 

	printf("이름을 입력하세요 : ");
	// 버퍼 안에 남아있는 것들을 모두 비운 후 이름을 입력받는다.
	// 따라서 개행문자(\n)가 제거된다.
	// 운영체제에 따라 불가능한 경우가 있으므로 추천되지 않는다.
	fflush(stdin);


	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);
	return 0;
}