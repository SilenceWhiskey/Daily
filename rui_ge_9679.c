#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>9999&&a<100000)
    printf("%d",a%10*10000+a%100/10*1000+a%1000/100*100+a%10000/1000*10+a%100000/10000);
    else if(a>999&&a<10000)
    printf("%d",a%10*1000+a%100/10*100+a%1000/100*10+a%10000/1000);
    else if(a>99&&a<1000)
    printf("%d",a%10*100+a%100/10*10+a%1000/100);
    else if(a>9&&a<100)
    printf("%d",a%10*10+a/10);
    else if(a<10)
    printf("%d",a);
    return 0;
}
