// print9-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1, su2, su3;
	scanf_s("%d %d", &su1, &su2);
	if (su1 < su2)
	{
		su3 = su1;
		su1 = su2;
		su2 = su3;
	}
	for (int i = su2; i <= su1; i++)
	{
		printf("%d ", i);
	}
    return 0;
}

