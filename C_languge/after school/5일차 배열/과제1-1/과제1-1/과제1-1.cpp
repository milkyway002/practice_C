// 과제1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[5] = { 90,70,80,100,50 }, temp = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (num[i] > num[i + 1])
			{
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		printf("%5d", num[i]);
    return 0;
}

