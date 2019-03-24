#include "pch.h"
#include<iostream>
int main()
{
	int a = 0, b = 0, c = 0;
	if (++a > 0 || ++b > 0)
	{
		++c;
	}
	printf_s("%d,%d,%d", a, b, c);
	return 0;
}
