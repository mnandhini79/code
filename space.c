#include <stdio.h>
void main()
{
	char a[100]="HELLO WORLD";
	int n=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			n++;
		}
	}
	printf("%d",n);
}
