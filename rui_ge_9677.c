int main()
{
    int a=0,b=1,c=1,d=3;
    printf("%d,%d,%d,%d\n",a,b,c,a*b&&c-d);
    printf("%d,%d,%d,%d\n",a,b,c,c-d&&a*b);
    printf("%d,%d,%d,%d\n",a,b,c,--a||++b&&--c);
    a=0,b=1,c=1,d=3;
    printf("%d,%d,%d,%d\n",a,b,c,++b&&--c||--a);
    return 0;
}
