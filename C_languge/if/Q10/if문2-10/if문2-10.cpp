// if문2-10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score;
	printf("점수를 입력하세요. ");
	scanf("%d", &score);
	score = score / 10;
	switch (score)
	{
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("E\n");
		break;
	}
    return 0;
}

