#include "pch.h"
#include<iostream>
int main()
{
	int a = 2, b = 7, c = 5;
	switch (a>0)
	{
	case 1:
		switch (b<0)
		{
		case 1:printf_s("@"); break;
		case 2:printf_s("!"); break;
		}
	case 0:
		switch (c==5)
		{
		case 1:printf_s("*"); break;
		case 2:printf_s("#"); break;
		default:printf_s("#"); break;
		}
	default:printf_s("&");
		break;
	}
	printf_s("\n");
	return 0;
}
