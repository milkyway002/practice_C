// 예제2_과제1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int gin;
	printf("10진수를 입력하세요.");
	scanf_s("%d", &gin);
	printf("8진수로 변환:%o\n", gin);
    return 0;
}

