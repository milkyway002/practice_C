// print9-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1 = 0, su2 = 0;
	char con;
	double s = 0;
	while(true)
	{
		printf("밑변의 길이 =");
		scanf_s("%d", &su1);
		printf("높이 =");
		scanf("%d", &su2);
		s = (double) su1 * su2 / 2;
		printf("입력한 삼각형의 넓이는 %.1f입니다.\n", s);
		printf("계속하시겠습니까? ");
		scanf("%s", &con);
		if (con != 'y' && con != 'Y')
			break;
	}
    return 0;
}

