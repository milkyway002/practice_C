// print8-Q7while.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, i = 0, sum = 0;
	scanf_s("%d", &su);
	while (i <= su)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);
    return 0;
}

