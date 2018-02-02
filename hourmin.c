#include<stdio.h>
void main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n%60;
    b=n/60;
    printf("%d %d",b,a);
}
