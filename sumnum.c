#include<stdio.h>
void main()
{
	int i,n,sum;
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	printf("%d",sum);
}
