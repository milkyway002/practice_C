// Q1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su[10], i;
	FILE *fin, *fout;
	fin = fopen(".\temp\in.txt", "r");
	fout = fopen(".\temp\out.txt", "w");

	for (i = 0; i < 10; i++)
		fscanf(fin, "%d", &su[i]);
	for (i = 0; i < 10; i += 2)
		fprintf(fout, "%d", su[i]);

	fprintf(fout, "\n");
	fclose(fin);
	fclose(fout);
    return 0;
}

