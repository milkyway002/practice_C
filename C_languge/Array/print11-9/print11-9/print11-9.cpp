// print11-9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	//Q-9
	/*int num[5] = { 95,75,85,100,50 }, temp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);*/
	
	//Q-10
	/*int num[5] = { 95,75,85,100,50 }, temp = 0, cnt = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5 - 1 - i; j++)
			{
				if (num[j] > num[j + 1])
				{
					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < 5; i++) {
			printf("%d ", num[i]);
		}*/

	//Q-11
	int num[5] = { 95,75,85,100,50 }, temp = 0, sav = 0, j = 0;
	for (int i = 0; i < 4; i++)
	{
		temp = num[i + 1];
		for (int j = i; j > -1; j--)
		{
			if (num[j] > temp)
			{
				num[j + 1] = temp;
			}
			else
				num[i + 1] = temp;
				break;
		}
		num[j + 1] = temp;
	}
	printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);

	//Q-12
	/*int num[10] = { 95,100,88,65,76 }, temp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9]);*/

	//Q-13
	/*int num[5] = { 95,75,85,100,50 }, temp = 0, cnt = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}*/

	//Q-14

    return 0;
}

