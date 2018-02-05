#include<stdio.h>
void main()
{
	int n,t,r,rem,a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i>=a&&i<=b;i++)
	{
	t=i;
	while(i!=0)
	{
		rem=i%10;
		r=r+rem*rem*rem;
		i=i/10;
	}
	if(r==t)
	{
	printf("%d",t);
	}
	}
}
