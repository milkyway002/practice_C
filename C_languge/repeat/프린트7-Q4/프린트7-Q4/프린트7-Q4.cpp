// 프린트7-Q4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1 = 0, su2 = 0, hap = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &su1);
	while (su2 <= su1)
	{
		hap += su2;
		su2++;
	}
	printf("%d\n", hap);
    return 0;
}

