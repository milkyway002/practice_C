// textbook p.109.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i, sum = 0;
	for (i = 1; i <=100; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\n1~100까지 합은 %d입니다.\n", sum);
    return 0;
}

