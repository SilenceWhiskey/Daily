#include "pch.h"
#include <iostream>

int main() {
	int count=100;
	while (count >0) {
		count--;
		printf_s("%d\n", count);
	}
	printf_s("发射!\n");
	getchar();
}
