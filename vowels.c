#include<stdio.h>
void main()
{
	char a[10]="hello";
	int i,b=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
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
