#include "pch.h"
#include<iostream>
int main()
{
	int i, j;
	for (i=1 ; i <= 4; i++)
	{
		for (j = 5-i; j >0; j--)
		{
			printf_s(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf_s("%c",'A'+i-1);
		}
		printf_s("\n");
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf_s(" ");
		}
		for(j=7-2*i;j>0;j--)
		{
			printf_s("%c", 'D' - i);
		}
		printf_s("\n");
	}
	return 0;
}
