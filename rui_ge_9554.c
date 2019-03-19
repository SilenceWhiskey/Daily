/*
  扣除20%的个人所得税，输出利息（复利）。
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float account,years,rate,come_in;
    scanf("%f,%f,%f",&account,&years,&rate);
    come_in=account*pow(1+rate,years)-account;
    come_in=come_in*0.8;
    printf("利息:%.0f",come_in);
    return 0;
}
