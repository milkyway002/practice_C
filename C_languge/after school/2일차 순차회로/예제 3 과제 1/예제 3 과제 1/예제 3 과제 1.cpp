// 예제 3 과제 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1, su2, su3;
	printf("연산할 수를 입력하세요:");
	scanf_s("%d %d %d", &su1, &su2, &su3);
	printf("%d×%d÷%d=%d", su1, su2, su3, (su1 << 3) >> 2);
    return 0;
}

