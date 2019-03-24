#include "pch.h"
#include<iostream>
int main()
{
	int i, b, k = 0;
	for(i=1;i<=5;i++)
	{
		b = i % 2;
		while (b-- == 0)
		{
			k++;
		}
	}
	printf_s("%d,%d", k, b);
	return 0;
}
