#include "pch.h"
#include<iostream>
#include"math.h"
int main()
{
	float x, x0, x1;
	scanf_s("%f", &x);
	x1 = x / 2;//初值
	do         //按给定公式循环迭代
	{
		x0 = x1;
		x1 = (x0 + x / x0) / 2;
	} while (fabs(x0-x1)>1e-6);
	printf_s("sqar of x is:%.3f\n", x1);//输出计算结果
	return 0;
}
