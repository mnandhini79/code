#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i=1;i>=m&&i<=n;i++)
	{
		if(i%2!=0&&i!=1)
		{
		printf(" %d ",i);
		}
	}
	
}
