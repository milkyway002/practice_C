// if문2-Q6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int jsu1, jsu2;
	printf("주사위를 던진 결과를 입력하세요.");
	scanf_s("%d %d", &jsu1, &jsu2);
	if (jsu1 >= 4 && jsu2 >= 4)
	{
		printf("이겼습니다.\n");
	}
	else if (jsu1 >= 4 || jsu2 >= 4)
	{
		printf("비겼습니다.\n");
	}
	else
		printf("졌습니다.\n");
    return 0;
}

