#include<stdio.h>
void main()
{
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
           printf("%d",a[0]);
}
