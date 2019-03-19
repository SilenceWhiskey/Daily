#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
    printf("x=%d,y=%d",x,x+10);
    else if(x>=15)
    printf("x=%d,y=%d",x,2*x-10);
    else
    printf("x=%d,y=%d",x,3*x+5);
    return 0;
    }
