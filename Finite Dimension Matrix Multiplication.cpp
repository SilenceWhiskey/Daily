#include "pch.h"
#include <iostream>
using namespace std;
#define ROWS 8
#define COLS 8
int a[ROWS][COLS];
int b[ROWS][COLS];
int c[ROWS][COLS];

int main() {
	int m,n,p,q;
	scanf_s("%d %d",&m,&n);
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			scanf_s("%d",&a[i][j]);
		}
	}
	scanf_s("%d %d",&p,&q);
	for(int i=0;i<p;++i)
	{	
		for(int j=0;j<q;++j)
		{	
			scanf_s("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			c[i][j]=0;
			for(int k=0;k<n;++k)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
		}
	}
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<q;++j)
		{
			printf_s("%d ",c[i][j]);
			printf_s("\n");
		}
	}
	return 0;
}
