#include "pch.h"
#include<iostream>
int main()
{
	int a;
	scanf_s("%d", &a);
	printf_s("%s", (a % 2 != 0) ? "No" : "Yes");
	return 0;
}
