// 最小公倍數.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1, su2, sum = 0;
	scanf_s("%d %d", &su1, &su2);
	for (int i = 1; i <= su2; i++)
	{
		if (su1%i == 0 && su2%i == 0)
			sum = i;
	}
	printf("%d", su1*su2 / sum);
    return 0;
}

