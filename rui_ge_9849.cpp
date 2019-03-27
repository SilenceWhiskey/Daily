#include "pch.h"
#include<iostream>
#include"math.h"
int main()
{
	int x, y;
	int m, n, r;
	scanf_s("%d,%d", &x, &y);
	m = abs(x);
	n = abs(y);

	/*穷举法求最大公约数*/
	if (m<n)
	{
		r = m;
		m = n;
		n = r;
	}
	r = n;
	while (r>1)
	{
		if (m%r == 0 && n%r == 0)
		{
			break;
		}
		else
		{
			r--;
		}
	}
	printf_s("穷举法求最大公约数:%d\n", r);

	/*辗转相除法求最大公约数*/
	if (m<n)
	{
		r = m;
		m = n;
		n = r;
	}
	do
	{
		r = m % n;
		m = n;
		n = r;
	} while (r!=0);
	printf_s("辗转相除法求最大公约数:%d\n", m);

	/*求最小公倍数*/
	printf_s("最小公倍数:%d\n", abs(x)*abs(y) / m);
	return 0;
}
