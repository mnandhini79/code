#include<stdio.h>
void main()
{
	int i,n,t,t1=0,t2=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",t1);
		t=t1+t2;
		t1=t2;
		t2=t;
	}
}
