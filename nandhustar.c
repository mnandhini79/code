#include <stdio.h>
void main()
{
	char a[10]="hello";
	int i,n,b=0,s;
	for(i=0;a[i]!='\0';i++)
	{
		b++;
	}
            if(b%2!=0)
            {
            	s=(b/2);
            	a[s]='*';
            	for(i=0;i<=b;i++)
            	{
            		printf("%c",a[i]);
            	}
            }
            else
            {
            s=(b/2);
            a[s]='*';
            a[s-1]='*';
            	for(i=0;i<=b;i++)
            	{
            		printf("%c",a[i]);
            	}
            }
            
}
