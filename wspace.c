#include<stdio.h>
void main()
{
	int i;
	char a[100]="hello world";
	for(i=0;i<100;i++)
	{
		if(a[i]!='\0'&&a[i]!=' ')
		{
		   
			printf("%c",a[i]);
		  
		}
	}
}
