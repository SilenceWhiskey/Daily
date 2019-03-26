#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int day;
    scanf("%d",&n);
    day = n%7;
    if(day==1)
    {
        printf("%d天后是星期一",n);
    }
    else if(day==2)
    {
        printf("%d天后是星期二",n);
    }
    else if(day==3)
    {
        printf("%d天后是星期三",n);
    }
    else if(day==4)
    {
        printf("%d天后是星期四",n);
    }
    else if(day==5)
    {
        printf("%d天后是星期五",n);
    }
    else if(day==6)
    {
        printf("%d天后是星期六",n);
    }
    else if(day==7)
    {
        printf("%d天后是星期日",n);
    }
    else
        printf("%d天后是星期日",n);
    return 0;
}
