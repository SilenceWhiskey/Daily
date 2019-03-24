#include "pch.h"
#include<iostream>
int main()
{
	int x = 10, y = 9;
	int a, b, c;
	a = (x-- == y++) ? x-- : y++;
	b = x++;
	c = y;
	printf_s("%d,%d,%d\n", a, b, c);
	return 0;
}
