#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<1000;i++)
	{
		if(n%i==0)
		{
			printf(" %d ",i);
		}
	}
}
