#include<stdio.h>
#define PI 3.14
int main()
{
    float r,h;
    scanf("%f,%f",&r,&h);
    printf("体积为:%.2f",(PI*r*r*h)/3);
    return 0;
}
