// print11-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int year = 1, month = 1, day[12] = { 31,28,31,30,31,30,31,30,31,30,31 };
	while (1)
	{
		printf("YEAR = ");
		scanf_s("%d", &year);
		printf("MONTH = ");
		scanf_s("%d", &month);
		if (month == 0 || year == 0) break;
		if (year % 400 == 0 && month == 2)
			printf("입력하신 달의 날 수는 %d일 입니다.\n", day[1] + 1);
		else if (year % 4 == 0 && year % 100 != 0 && month == 2)
			printf("입력하신 달의 날 수는 %d일 입니다.\n", day[1] + 1);
		else if (month >= 13)
			printf("잘못 입력하셨습니다.\n");
		else
			printf("입력하신 달의 날 수는 %d일 입니다.\n", day[month - 1]);
	}

	return 0;
}

