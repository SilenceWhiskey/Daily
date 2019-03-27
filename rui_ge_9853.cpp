#include "pch.h"
#include<iostream>
int main()
{
	int i, j;
	for (i=1 ; i <= 5; i++)
	{
		for (j = 6-i; j >0; j--)
		{
			printf_s(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf_s("%d",2*j-1);
		}
		printf_s("\n");
	}
	return 0;
}
