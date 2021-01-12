#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	//bResult = 3 < nInput < 20;
	bResult = nInput > 3 && nInput < 20;
	printf("%d (1:True, 0:False)\n", bResult);
	return 0;	
}