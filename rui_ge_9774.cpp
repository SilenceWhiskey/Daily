#include "pch.h"
#include<iostream>
int main()
{
	char c;
	while ((c=getchar())!='?')
	{
		putchar(++c);
	}
	return 0;
}
