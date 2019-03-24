#include "pch.h"
#include<iostream>
int main()
{
	int y = 2, a = 1;
	while(y--!=-1)
	{
		do
		{
			a *= y;
			a++;
		} while (y--);
	}
	printf_s("%d,%d\n", a, y);
	return 0;
}
