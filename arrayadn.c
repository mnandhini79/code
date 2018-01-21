#include<stdio.h>
void main()
{
	int j,n,a[j];
	int b,sum=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[j]);
	}
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
	sum=sum+a[i];
	}
	printf("sum %d",sum);
}
