#include<stdio.h>
void main()
{
	int n,p,r=1;
	scanf("%d",&n);
	scanf("%d",&p);
	for(int i=0;i<p;i++)
	{
	r=r*n;	
	}
	printf("%d",r);
}
