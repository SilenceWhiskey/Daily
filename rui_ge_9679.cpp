#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num, a[10], length = 0, i = 0;
	cin >> num;
	while (num!= 0)
	{
		a[length] = num % 10;
		num /= 10;
		length++;
	}
	while (a[i] == 0)
	{
		i++;
	}
	for (i; i <length; i++)
	{
		cout << a[i];
	}
	return 0;
}
