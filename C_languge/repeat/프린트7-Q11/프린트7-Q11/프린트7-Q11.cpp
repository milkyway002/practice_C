// 프린트7-Q11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	do 
	{
		printf("1. 입력하기\n2. 출력하기\n3. 삭제하기\n4. 끝내기\n 작업할 번호를 선택하세요. ");
		scanf_s("%d", &num);
		switch (num) 
		{
		case 1:
			printf("입력하기를 선택하였습니다. \n\n");
			break;
		case 2:
			printf("출력하기를 선택하였습니다. \n\n");
			break;
		case 3:
			printf("삭제하기를 선택하였습니다. \n\n");
			break;
		case 4:
			printf("끝내기를 선택하였습니다. \n\n");
			break;
		default:
			printf("잘못 선택하였습니다. \n\n");
				break;
		}
	} while (num != 4);
    return 0;
}

