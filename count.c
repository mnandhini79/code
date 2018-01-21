#include<stdio.h>
void main()
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	{
	if(n%10!=0)
	{
             n=n/10;
	 count=count+1;
	}
	}
	printf("%d",count);
}
