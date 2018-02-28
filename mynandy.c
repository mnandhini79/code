#include<stdio.h>
 int f1(int *,int *);
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	f1(&a,&b);
	printf("%d %d",a,b);
}
int f1(int *m,int *n)
{
	int *t;
	*t=*m;
	*m=*n;
	*n=*t;
	return 0;
}
