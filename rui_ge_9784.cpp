#include "pch.h"
#include<iostream>
int main()
{
	int a, b;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b>=20)
		{
			break;
		}
		if (b%3==1)
		{
			b += 3;
			continue;
		}
		b -= 5;
	}
	printf_s("%d\n", a);
	return 0;
}
