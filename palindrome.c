#include<stdio.h>
void main()
{
	int n,t,rem,rev=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==t)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
