// 예제2-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, sum = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &su);
		sum += su;
	} while (su != 0);

	printf("합계: %d\n", sum);
    return 0;
}

