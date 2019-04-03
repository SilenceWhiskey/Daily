#include "pch.h"
#include <iostream>

int main()
{
	int a = 3, b = 4, c = 5;
	printf_s("%d", a + b > c&&b == c);
	printf_s("%d", !(a > b) && !c || 1);
	printf_s("%d", !(a + b) + c - 1 && b + c / 2);
	return 0;
}
