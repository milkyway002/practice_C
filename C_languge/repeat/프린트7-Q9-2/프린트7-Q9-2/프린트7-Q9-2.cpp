// 프린트7-Q9-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 0, cnt = 0, avg = 0, sum = 0;
	do
	{
		scanf_s("%d", &su);
		if (su % 2 == 1)
		{
			sum = sum + su;
			cnt++;
		}
	} while (su!=0);
	avg = sum / cnt;
	printf("홀수의 합=%d\n", sum);
	printf("홀수의 평균=%d\n", avg);
    return 0;
}

