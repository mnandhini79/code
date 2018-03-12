#include<stdio.h>
void main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if((m-n)%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
