#include "pch.h"
#include<iostream>
int main()
{
	int i, j, k = 19;
	while (i = k - 1)
	{
		k -= 3;
		if (k % 5 == 0) 
		{
			i++;
			continue;
		}
		else if (k < 5)
		{
			break;
		}
		i++;
	}
	printf_s("i=%d,k=%d\n", i, k);
	return 0;
}
