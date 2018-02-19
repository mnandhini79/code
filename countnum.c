#include<stdio.h>
void main()
{
	int i,n,t=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	if(n!=0)
	{
	t++;
	n=n/10;
	}
	}
	printf("%d",t);
}	
