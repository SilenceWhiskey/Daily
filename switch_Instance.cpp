#include "pch.h"
#include <iostream>

int main()
{
	printf_s("请在1~4范围内输入一个数字\n");
	int type;
	scanf_s("%d", &type);
	switch (type)
	{
	case 1:
		printf_s("你好！");
		break;
	case 2:
		printf_s("早上好！");
		break;
	case 3:
		printf_s("晚安！");
		break;
	case 4:
		printf_s("byebye~!");
		break;

	default:
		break;
	}

	int money;
	printf_s("你要给我多少钱？\n");
	scanf_s("%d", &money);
	if (money < 10) {
		printf_s("你可真是个小气鬼，人家不要理你啦！口亨~~~\n");
	}
	else
		printf_s("有钱真好！！！（づ￣3￣）づ╭❤～\n");
	    
	}

