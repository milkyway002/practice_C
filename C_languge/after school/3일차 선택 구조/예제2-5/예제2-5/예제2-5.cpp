// 예제2-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);
	if (score >= 90)
	{
		printf("수\n");
	}
	else if (score >= 80)
	{
		printf("우\n");
	}
	else if (score >= 70)
	{
		printf("미\n");
	}
	else if (score >=60)
	{
		printf("양\n");
	}
	else
	{
		printf("가\n");
	}
    return 0;
}

