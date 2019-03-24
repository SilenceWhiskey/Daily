#include "pch.h"
#include<iostream>
int main()
{
	int i, j;
	for (int i = 0; i < 3; i++,i++)
	{
		for(j=4;j>=0;j--)
		{
			if ((j+i)%2)
			{
				j--;
				printf_s("%d,", j);
				continue;
			}
			--i;
			j--;
			printf_s("%d,", j);
		}
	}
	return 0;
}
