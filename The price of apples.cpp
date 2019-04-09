#include "pch.h"
#include <iostream>
#define PRICE 0.8
int main()
{
	int number, days = 1;
	float account = 0;
	for (number = 2; number <= 100; number *= 2)
	{
		account =  number * PRICE + account;
		days++;
	}
	printf("%.3f", account / days);
}
