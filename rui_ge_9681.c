#include<stdio.h>
int main()
{
    int weight,account,S;
    scanf("%d,%d",&weight,&S);
    if(weight <= 15)
    {
        account = 5;
        printf("%d",account);
    }
    else if(weight > 15 && weight <=30)
    {
        account = 9;
        printf("%d",account);
    }
    else if(weight > 30 && weight <= 45)
    {
        account = 12;
        printf("%d",account);
    }
    else if(weight>45 &&weight <=60)
    {
        account = 14+((S/1000)*1);
        printf("%d",account);
    }
    else
    {
        account = 15+((S/1000)*2);
        printf("%d",account);
    }
    return 0;
}
