#include<stdio.h>
void main()
{
	int i,c=1;
	char a[100]="hello world.hai";
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.'||a[i]=='\0')
		{
			c++;
		}
	}
	printf("%d",c);
}
