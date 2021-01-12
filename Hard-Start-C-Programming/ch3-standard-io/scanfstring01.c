#include <stdio.h>

int main(void)
{
	//문자열을 저장하기 위한 배열 선언 및 정의
	char szBuffer[32] = { 0 };

	//사용자가 입력한 문자열을 배열에 저장하고 출력
	scanf("%s", szBuffer);
	printf("%s\n", szBuffer);
	return 0;

	// Test string 입력 시,
	// scanf 함수는 "Test string"을 "Test"와 "string" 두 문자열 입력으로 인식
	// 그래서 첫 번째 입력에 해당하는 "Test"만 szBuffer에 저장하고
	// 두 번째 "string"은 그대로 버퍼에 남겨진다.
	// %s 형식만으로는 공백문자를 포함한 문자열을 입력받을 수 없다!
}