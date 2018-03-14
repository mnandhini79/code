#include<stdio.h>
void main()
{
	int m,n,i,b=0;
	scanf("%d%d",&m,&n);
    for(i=0;i<100;i++)
    {
    	if((m*n)==i*i)
    	{
    		b=1;
    		break;
    	}
    }
    if(b==1)
    {
    	printf("yes");
    }
    	else
    	{
    		printf("no");
    	}
    
}
