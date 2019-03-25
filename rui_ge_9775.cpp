#include "pch.h"
#include<iostream>
int main()
{
	int a, s, n, count;
	a = 2;
	s = 0;
	n = 1;
	count = 1;
	while (count<=7)
	{
		n = n * a;
		s = s + n;
		++count;
	}
	printf_s("s=%d", s);
	return 0;
}
