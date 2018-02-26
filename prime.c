#include<stdio.h>
void main()
{
	int i,n,b=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			++b;
		}
	}
	if(b==2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
