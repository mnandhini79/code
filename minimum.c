#include<stdio.h>
void main()
{
	int n,a[n],min;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int i=0;
    if(a[i]<a[i+1]&&a[i]<a[i+2])
    {
    	min=a[i];
    }
    else
    {
       if(a[i+1]<a[i+2])
       {
       	min=a[i+1];
       }
       else
       {
       	min=a[i+2];
       }
    }
    printf("%d",min);
}
